

add_executable(pardis
  reducers.cpp
  main.cpp
)


# NOTE: The file dealing with antlr-cpp directly must include rtti, but
#  everything else should avoid it in order to make use of the LLVM libraries.
target_compile_options(pardis PUBLIC -fno-rtti)

if (LLVM_ENABLE_ASSERTIONS)
  add_definitions(-DLLVM_ENABLE_ASSERTIONS=${LLVM_ENABLE_ASSERTIONS})
endif()

llvm_map_components_to_libnames(REQ_LLVM_LIBRARIES #${LLVM_TARGETS_TO_BUILD}
                                core objcarcopts support option
)

target_link_libraries(pardis
  antlr-wrapper
  ${REQ_LLVM_LIBRARIES}
)

# Configure libraries and headers for antlr-cpp
target_link_libraries(pardis
  antlr-PNFC-parser
  antlr4_static
)

target_include_directories(pardis
  PRIVATE $<TARGET_PROPERTY:antlr-wrapper,INTERFACE_INCLUDE_DIRECTORIES>
  PRIVATE $<TARGET_PROPERTY:deltadebugging,INTERFACE_INCLUDE_DIRECTORIES>
  PRIVATE $<TARGET_PROPERTY:antlr4_static,INTERFACE_INCLUDE_DIRECTORIES>
  PRIVATE $<TARGET_PROPERTY:antlr-PNFC-parser,INTERFACE_INCLUDE_DIRECTORIES>
)

# Platform dependencies.
if( WIN32 )
  find_library(SHLWAPI_LIBRARY shlwapi)
  target_link_libraries(pardis
    ${SHLWAPI_LIBRARY}
  )
else()
  find_package(Threads REQUIRED)
  find_package(Curses REQUIRED)
  target_link_libraries(pardis
    ${CMAKE_THREAD_LIBS_INIT}
    ${CMAKE_DL_LIBS}
    ${CURSES_LIBRARIES}
  )
endif()

set_target_properties(pardis
  PROPERTIES
  LINKER_LANGUAGE CXX
  CXX_STANDARD 17
  CXX_STANDARD_REQUIRED ON
)

install(TARGETS pardis
  RUNTIME DESTINATION bin
)

