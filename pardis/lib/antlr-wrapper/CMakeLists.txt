add_library(antlr-wrapper
  antlr-wrapper.cpp
  grammars.cpp
  cpnf.cpp
)

target_include_directories(antlr-wrapper
  INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
  PRIVATE $<TARGET_PROPERTY:antlr-wrapper,INTERFACE_INCLUDE_DIRECTORIES>
  PRIVATE $<TARGET_PROPERTY:antlr4_static,INTERFACE_INCLUDE_DIRECTORIES>
  PRIVATE $<TARGET_PROPERTY:antlr-PNFC-parser,INTERFACE_INCLUDE_DIRECTORIES>
  PRIVATE $<TARGET_PROPERTY:deltadebugging,INTERFACE_INCLUDE_DIRECTORIES>
)

