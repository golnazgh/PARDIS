add_subdirectory(antlr-cpp-runtime)
add_subdirectory(deltadebugging)
add_subdirectory(antlr-wrapper)


function(add_antlr_parser ANTLR_TARGET_LANGUAGE GENERATED GRAMMARS)
  add_library(antlr-${ANTLR_TARGET_LANGUAGE}-parser
    ${GENERATED}
  )

  foreach(SOURCE_FILE ${GENERATED})
    set_source_files_properties(${SOURCE_FILE}
      PROPERTIES
      COMPILE_FLAGS -Wno-unused-but-set-variable
    )
  endforeach()

  target_include_directories(antlr-${ANTLR_TARGET_LANGUAGE}-parser
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
    PRIVATE $<TARGET_PROPERTY:antlr4_static,INTERFACE_INCLUDE_DIRECTORIES>
  )
endfunction(add_antlr_parser)


function(add_single_file_parser ANTLR_TARGET_LANGUAGE)
  set(GENERATED
    ${ANTLR_TARGET_LANGUAGE}Lexer.cpp 
    ${ANTLR_TARGET_LANGUAGE}Parser.cpp
    ${ANTLR_TARGET_LANGUAGE}BaseListener.cpp
    ${ANTLR_TARGET_LANGUAGE}BaseVisitor.cpp
    ${ANTLR_TARGET_LANGUAGE}Listener.cpp
    ${ANTLR_TARGET_LANGUAGE}Visitor.cpp
  )
  set(ANTLR_TARGET_LIBRARY "${ARGV1}${ANTLR_TARGET_LANGUAGE}")
  add_antlr_parser(${ANTLR_TARGET_LIBRARY}
    "${GENERATED}"
    "${ANTLR_TARGET_LANGUAGE}.g4"
  )
endfunction(add_single_file_parser)


function(add_two_file_parser ANTLR_TARGET_LANGUAGE)
  set(GENERATED
    ${ANTLR_TARGET_LANGUAGE}Lexer.cpp 
    ${ANTLR_TARGET_LANGUAGE}Parser.cpp
    ${ANTLR_TARGET_LANGUAGE}ParserBaseListener.cpp
    ${ANTLR_TARGET_LANGUAGE}ParserBaseVisitor.cpp
    ${ANTLR_TARGET_LANGUAGE}ParserListener.cpp
    ${ANTLR_TARGET_LANGUAGE}ParserVisitor.cpp
  )
  add_antlr_parser(${ANTLR_TARGET_LANGUAGE}
    "${GENERATED}"
    "${ANTLR_TARGET_LANGUAGE}Lexer.g4 ${ANTLR_TARGET_LANGUAGE}Parser.g4"
  )
endfunction(add_two_file_parser)


add_subdirectory(antlr-cpnf-parser)
