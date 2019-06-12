/*
 [The "BSD licence"]
 Copyright (c) 2013 Sam Harwell
 All rights reserved.
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions
 are met:
 1. Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
 3. The name of the author may not be used to endorse or promote products
    derived from this software without specific prior written permission.
 THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/** C 2011 grammar built from the C11 Spec */

/* Grammar processed and transformed into PNF. */

  grammar  C ;   options {   contextSuperClass =  'antlr4::RuleContextWithAltNum' ; }

   Auto :      'auto' ;

  Break :      'break' ;

  Case :      'case' ;

  Char :      'char' ;

  Const :      'const' ;

  Continue :      'continue' ;

  Default :      'default' ;

  Do :      'do' ;

  Double :      'double' ;

  Else :      'else' ;

  Enum :      'enum' ;

  Extern :      'extern' ;

  Float :      'float' ;

  For :      'for' ;

  Goto :      'goto' ;

  If :      'if' ;

  Inline :      'inline' ;

  Int :      'int' ;

  Long :      'long' ;

  Register :      'register' ;

  Restrict :      'restrict' ;

  Return :      'return' ;

  Short :      'short' ;

  Signed :      'signed' ;

  Sizeof :      'sizeof' ;

  Static :      'static' ;

  Struct :      'struct' ;

  Switch :      'switch' ;

  Typedef :      'typedef' ;

  Union :      'union' ;

  Unsigned :      'unsigned' ;

  Void :      'void' ;

  Volatile :      'volatile' ;

  While :      'while' ;

  Alignas :      '_Alignas' ;

  Alignof :      '_Alignof' ;

  Atomic :      '_Atomic' ;

  Bool :      '_Bool' ;

  Complex :      '_Complex' ;

  Generic :      '_Generic' ;

  Imaginary :      '_Imaginary' ;

  Noreturn :      '_Noreturn' ;

  StaticAssert :      '_Static_assert' ;

  ThreadLocal :      '_Thread_local' ;

  LeftParen :      '(' ;

  RightParen :      ')' ;

  LeftBracket :      '[' ;

  RightBracket :      ']' ;

  LeftBrace :      '{' ;

  RightBrace :      '}' ;

  Less :      '<' ;

  LessEqual :      '<=' ;

  Greater :      '>' ;

  GreaterEqual :      '>=' ;

  LeftShift :      '<<' ;

  RightShift :      '>>' ;

  Plus :      '+' ;

  PlusPlus :      '++' ;

  Minus :      '-' ;

  MinusMinus :      '--' ;

  Star :      '*' ;

  Div :      '/' ;

  Mod :      '%' ;

  And :      '&' ;

  Or :      '|' ;

  AndAnd :      '&&' ;

  OrOr :      '||' ;

  Caret :      '^' ;

  Not :      '!' ;

  Tilde :      '~' ;

  Question :      '?' ;

  Colon :      ':' ;

  Semi :      ';' ;

  Comma :      ',' ;

  Assign :      '=' ;

  StarAssign :      '*=' ;

  DivAssign :      '/=' ;

  ModAssign :      '%=' ;

  PlusAssign :      '+=' ;

  MinusAssign :      '-=' ;

  LeftShiftAssign :      '<<=' ;

  RightShiftAssign :      '>>=' ;

  AndAssign :      '&=' ;

  XorAssign :      '^=' ;

  OrAssign :      '|=' ;

  Equal :      '==' ;

  NotEqual :      '!=' ;

  Arrow :      '->' ;

  Dot :      '.' ;

  Ellipsis :      '...' ;

  RealPart :      '__real__' ;

  ImaginaryPart :      '__imag__' ;

  Identifier :      IdentifierNondigit   (     IdentifierNondigit |    Digit )  * ;

  fragment IdentifierNondigit :      Nondigit |    UniversalCharacterName ;

  fragment Nondigit :      [a-zA-Z_] ;

  fragment Digit :      [0-9] ;

  fragment UniversalCharacterName :      '\\u'  HexQuad |    '\\U'  HexQuad  HexQuad ;

  fragment HexQuad :      HexadecimalDigit  HexadecimalDigit  HexadecimalDigit  HexadecimalDigit ;

  Constant :      IntegerConstant |    FloatingConstant |    CharacterConstant |    ComplexConstant ;

  fragment IntegerConstant :      DecimalConstant  IntegerSuffix  ? |    OctalConstant  IntegerSuffix  ? |    HexadecimalConstant  IntegerSuffix  ? |    BinaryConstant ;

  fragment BinaryConstant :      '0'  [bB]  [0-1]  + ;

  fragment DecimalConstant :      NonzeroDigit  Digit  * ;

  fragment OctalConstant :      '0'  OctalDigit  * ;

  fragment HexadecimalConstant :      HexadecimalPrefix  HexadecimalDigit  + ;

  fragment HexadecimalPrefix :      '0'  [xX] ;

  fragment NonzeroDigit :      [1-9] ;

  fragment OctalDigit :      [0-7] ;

  fragment HexadecimalDigit :      [0-9a-fA-F] ;

  fragment IntegerSuffix :      UnsignedSuffix  LongSuffix  ? |    UnsignedSuffix  LongLongSuffix |    LongSuffix  UnsignedSuffix  ? |    LongLongSuffix  UnsignedSuffix  ? ;

  fragment UnsignedSuffix :      [uU] ;

  fragment LongSuffix :      [lL] ;

  fragment LongLongSuffix :      'll' |    'LL' ;

  fragment FloatingConstant :      DecimalFloatingConstant |    HexadecimalFloatingConstant ;

  fragment DecimalFloatingConstant :      FractionalConstant  ExponentPart  ?  FloatingSuffix  ? |    DigitSequence  ExponentPart  FloatingSuffix  ? ;

  fragment HexadecimalFloatingConstant :      HexadecimalPrefix  HexadecimalFractionalConstant  BinaryExponentPart  FloatingSuffix  ? |    HexadecimalPrefix  HexadecimalDigitSequence  BinaryExponentPart  FloatingSuffix  ? ;

  fragment FractionalConstant :      DigitSequence  ?  '.'  DigitSequence |    DigitSequence  '.' ;

  fragment ExponentPart :      'e'  Sign  ?  DigitSequence |    'E'  Sign  ?  DigitSequence ;

  fragment Sign :      '+' |    '-' ;

  fragment DigitSequence :      Digit  + ;

  fragment HexadecimalFractionalConstant :      HexadecimalDigitSequence  ?  '.'  HexadecimalDigitSequence |    HexadecimalDigitSequence  '.' ;

  fragment BinaryExponentPart :      'p'  Sign  ?  DigitSequence |    'P'  Sign  ?  DigitSequence ;

  fragment HexadecimalDigitSequence :      HexadecimalDigit  + ;

  fragment FloatingSuffix :      'f' |    'l' |    'F' |    'L' ;

  fragment CharacterConstant :      '\''  CCharSequence  '\'' |    'L\''  CCharSequence  '\'' |    'u\''  CCharSequence  '\'' |    'U\''  CCharSequence  '\'' ;

  fragment ComplexConstant :      IntegerConstant  'i' |    FloatingConstant  'i' |    FractionalConstant  ExponentPart  ?  'i'  FloatingSuffix  ? |    DigitSequence  ExponentPart  'i'  FloatingSuffix  ? ;

  fragment CCharSequence :      CChar  + ;

  fragment CChar :      ~['\\\r\n] |    EscapeSequence ;

  fragment EscapeSequence :      SimpleEscapeSequence |    OctalEscapeSequence |    HexadecimalEscapeSequence |    UniversalCharacterName ;

  fragment SimpleEscapeSequence :      '\\'  ['"?abfnrtv\\] ;

  fragment OctalEscapeSequence :      '\\'  OctalDigit |    '\\'  OctalDigit  OctalDigit |    '\\'  OctalDigit  OctalDigit  OctalDigit ;

  fragment HexadecimalEscapeSequence :      '\\x'  HexadecimalDigit  + ;

  StringLiteral :      EncodingPrefix  ?  '"'  SCharSequence  ?  '"' ;

  fragment EncodingPrefix :      'u8' |    'u' |    'U' |    'L' ;

  fragment SCharSequence :      SChar  + ;

  fragment SChar :      ~["\\\r\n] |    EscapeSequence |    '\\\n' |    '\\\r\n' ;

  ComplexDefine :      '#'  Whitespace  ?  'define'  ~[#]  *  ->    skip ;

  LineAfterPreprocessing :      '#line'  Whitespace  *  ~[\r\n]  *  ->    skip ;

  LineDirective :      '#'  Whitespace  ?  DecimalConstant  Whitespace  ?  StringLiteral  ~[\r\n]  *  ->    skip ;

  IncludeDirective :      '#'  Whitespace  ?  'include'  Whitespace  ~[\r\n]  * ;

  PragmaDirective :      '#'  Whitespace  ?  'pragma'  Whitespace  ~[\r\n]  * ;

  Whitespace :      [ \t]  +  ->    skip ;

  Newline :       (     '\r'  '\n'  ? |    '\n' )  ->    skip ;

  BlockComment :      '/*'  .  * ?  '*/'  ->    skip ;

  LineComment :      '//'  ~[\r\n]  *  ->    skip ;

 
 abstractDeclarator
  : pointer
  | pnf_option_pointer_26 directAbstractDeclarator pnf_star_declarator_63
  ;

additiveExpression
  : multiplicativeExpression pnf_star_additiveExpression_49
  ;

alignmentSpecifier
  : '_Alignas' '(' typeName ')'
  | '_Alignas' '(' conditionalExpression ')'
  ;

argumentExpressionList_block_1
  : ',' assignmentExpression
  ;

asmName
  : 'asm'
  | '__asm'
  | '__asm__'
  ;

assignmentExpression
  : pnf_star_assignmentExpression_105 conditionalExpression
  ;

assignmentOperator
  : '='
  | '*='
  | '/='
  | '%='
  | '+='
  | '-='
  | '<<='
  | '>>='
  | '&='
  | '^='
  | '|='
  ;

atomicTypeSpecifier
  : '_Atomic' '(' typeName ')'
  ;

blockItem
  : declaration
  | statement
  | functionDefinition
  ;

castExpression
  : pnf_star_castExpression_107 unaryExpression
  | pnf_star_castExpression_107 '(' typeName ')' initializer
  ;

compilationUnit
  : pnf_option_compilationUnit_98 EOF
  ;

compoundStatement
  : '{' pnf_option_compoundStatement_87 '}'
  ;

conditionalExpression
  : pnf_option_primaryExpression_41 pnf_list_left_1 pnf_option_conditionalExpression_46
  ;

conditionalExpression_block_1
  : '?' pnf_option_conditionalExpression_block_1_34 ':' conditionalExpression
  ;

declaration
  : declarationSpecifiers pnf_option_declaration_14 ';'
  | staticAssertDeclaration
  ;

declarationSpecifier
  : storageClassSpecifier
  | typeSpecifier pnf_star_declarationSpecifiers_60
  | typeQualifier
  | functionSpecifier
  | alignmentSpecifier
  ;

declarationSpecifiers
  : pnf_star_declarationSpecifiers_59 typeSpecifier pnf_star_declarationSpecifiers_60 pnf_star_declarationSpecifiers_59
  ;

declarator
  : pnf_option_pointer_26 directDeclarator pnf_star_declarator_63
  ;

designation
  : pnf_plus_designatorList_28 '='
  | Identifier ':'
  ;

designator
  : '[' conditionalExpression pnf_option_designator_83 ']'
  | '.' Identifier
  ;

designator_block_1
  : '...' conditionalExpression
  ;

directAbstractDeclarator
  : '(' abstractDeclarator ')' pnf_star_declarator_63 pnf_star_directAbstractDeclarator_78
  | '[' pnf_option_pnf_part_directDeclarator_21_70 pnf_option_pnf_part_directDeclarator_21_71 ']' pnf_star_directAbstractDeclarator_78
  | '[' 'static' pnf_option_pnf_part_directDeclarator_21_70 assignmentExpression ']' pnf_star_directAbstractDeclarator_78
  | '[' pnf_plus_typeQualifierList_23 'static' assignmentExpression ']' pnf_star_directAbstractDeclarator_78
  | '[' '*' ']' pnf_star_directAbstractDeclarator_78
  | '(' pnf_option_directAbstractDeclarator_79 ')' pnf_star_declarator_63 pnf_star_directAbstractDeclarator_78
  ;

directDeclarator
  : Identifier pnf_star_directDeclarator_69
  | '(' declarator ')' pnf_star_directDeclarator_69
  ;

enumSpecifier
  : 'enum' pnf_option_structOrUnionSpecifier_62 '{' pnf_list_left_11 pnf_option_postfixExpression_2 '}'
  | 'enum' Identifier
  ;

enumerationConstant
  : Identifier
  ;

enumerator
  : enumerationConstant pnf_option_enumerator_20
  ;

enumeratorList_block_1
  : ',' enumerator
  ;

equalityExpression
  : relationalExpression pnf_star_equalityExpression_52
  ;

expressionStatement
  : pnf_option_conditionalExpression_block_1_34 ';'
  ;

externalDeclaration
  : IncludeDirective
  | PragmaDirective
  | functionDefinition
  | declaration
  | pnf_option_externalDeclaration_31 ';'
  ;

functionDefinition
  : pnf_option_functionDefinition_93 declarator pnf_option_functionDefinition_94 compoundStatement
  ;

functionSpecifier
  : functionSpecifier_block_1
  | gccAttributeSpecifier
  | '__declspec' '(' Identifier ')'
  ;

functionSpecifier_block_1
  : 'inline'
  | '_Noreturn'
  | '__inline__'
  | '__inline'
  | '__stdcall'
  ;

gccAttribute
  : ~(','|'('|')') pnf_option_gccAttribute_73
  ;

gccAttributeList_block_1
  : ',' pnf_option_gccAttributeList_22
  ;

gccAttributeSpecifier
  : '__attribute__' '(' '(' pnf_option_gccAttributeSpecifier_15 ')' ')'
  | '__attribute' '(' '(' pnf_option_gccAttributeSpecifier_15 ')' ')'
  ;

gccAttribute_block_1
  : '(' pnf_option_gccAttribute_block_1_36 ')'
  ;

gccDeclaratorExtension
  : asmName '(' pnf_plus_primaryExpression_40 ')'
  | gccAttributeSpecifier
  ;

genericAssocList_block_1
  : ',' genericAssociation
  ;

genericAssociation
  : typeName ':' assignmentExpression
  | 'default' ':' assignmentExpression
  ;

genericSelection
  : '_Generic' '(' assignmentExpression ',' pnf_list_left_2 ')'
  ;

identifierList_block_1
  : ',' Identifier
  ;

initDeclarator
  : declarator pnf_option_initDeclarator_17
  ;

initDeclaratorList_block_1
  : ',' initDeclarator
  ;

initializer
  : assignmentExpression
  | '{' pnf_option_initializer_82 '}'
  ;

initializerList
  : pnf_option_initializerList_block_1_38 initializer pnf_star_initializerList_80
  ;

initializerList_block_1
  : ',' pnf_option_initializerList_block_1_38 initializer
  ;

initializer_block_1
  : initializerList pnf_option_initializer_block_1_81
  ;

jumpStatement
  : 'goto' Identifier ';'
  | 'continue' ';'
  | 'break' ';'
  | 'return' pnf_option_conditionalExpression_block_1_34 ';'
  | 'goto' unaryExpression ';'
  ;

multiplicativeExpression
  : castExpression pnf_star_multiplicativeExpression_48
  ;

parameterDeclaration
  : declarationSpecifiers declarator
  | pnf_plus_declarationSpecifiers2_76 pnf_option_typeName_43
  ;

parameterList_block_1
  : ',' parameterDeclaration
  ;

parameterTypeList
  : pnf_list_left_13 pnf_option_parameterTypeList_25
  ;

pnf_list_left_0
  : Identifier pnf_star_identifierList_37
  ;

pnf_list_left_1
  : pnf_list_left_7 pnf_star_logicalOrExpression_57
  ;

pnf_list_left_10
  : structDeclarator pnf_star_structDeclaratorList_67
  ;

pnf_list_left_11
  : enumerator pnf_star_enumeratorList_68
  ;

pnf_list_left_12
  : pnf_option_gccAttributeList_22 pnf_star_gccAttributeList_74
  ;

pnf_list_left_13
  : parameterDeclaration pnf_star_parameterList_77
  ;

pnf_list_left_14
  : pnf_list_left_1 pnf_star_statement_block_3_85
  ;

pnf_list_left_15
  : pnf_list_left_1 pnf_star_statement_block_5_86
  ;

pnf_list_left_2
  : genericAssociation pnf_star_genericAssocList_44
  ;

pnf_list_left_3
  : assignmentExpression pnf_star_argumentExpressionList_47
  ;

pnf_list_left_4
  : equalityExpression pnf_star_andExpression_53
  ;

pnf_list_left_5
  : pnf_list_left_4 pnf_star_exclusiveOrExpression_54
  ;

pnf_list_left_6
  : pnf_list_left_5 pnf_star_inclusiveOrExpression_55
  ;

pnf_list_left_7
  : pnf_list_left_6 pnf_star_logicalAndExpression_56
  ;

pnf_list_left_8
  : assignmentExpression pnf_star_expression_58
  ;

pnf_list_left_9
  : initDeclarator pnf_star_initDeclaratorList_64
  ;

pnf_option_compilationUnit_98
  : pnf_plus_translationUnit_32?
  ;

pnf_option_compoundStatement_87
  : pnf_plus_blockItemList_29?
  ;

pnf_option_conditionalExpression_46
  : conditionalExpression_block_1?
  ;

pnf_option_conditionalExpression_block_1_34
  : pnf_list_left_8?
  ;

pnf_option_declaration_14
  : pnf_list_left_9?
  ;

pnf_option_designator_83
  : designator_block_1?
  ;

pnf_option_directAbstractDeclarator_79
  : parameterTypeList?
  ;

pnf_option_enumerator_20
  : pnf_part_enumerator_19?
  ;

pnf_option_externalDeclaration_31
  : pnf_part_externalDeclaration_30?
  ;

pnf_option_functionDefinition_93
  : declarationSpecifiers?
  ;

pnf_option_functionDefinition_94
  : pnf_plus_declarationList_33?
  ;

pnf_option_gccAttributeList_22
  : gccAttribute?
  ;

pnf_option_gccAttributeSpecifier_15
  : pnf_list_left_12?
  ;

pnf_option_gccAttribute_73
  : gccAttribute_block_1?
  ;

pnf_option_gccAttribute_block_1_36
  : pnf_list_left_3?
  ;

pnf_option_initDeclarator_17
  : pnf_part_initDeclarator_16?
  ;

pnf_option_initializerList_block_1_38
  : designation?
  ;

pnf_option_initializer_82
  : initializer_block_1?
  ;

pnf_option_initializer_block_1_81
  : ','?
  ;

pnf_option_parameterTypeList_25
  : pnf_part_parameterTypeList_24?
  ;

pnf_option_pnf_part_directDeclarator_21_70
  : pnf_plus_typeQualifierList_23?
  ;

pnf_option_pnf_part_directDeclarator_21_71
  : assignmentExpression?
  ;

pnf_option_pnf_part_directDeclarator_21_72
  : pnf_list_left_0?
  ;

pnf_option_pointer_26
  : pointer?
  ;

pnf_option_postfixExpression_102
  : pnf_part_postfixExpression_101?
  ;

pnf_option_postfixExpression_2
  : pnf_part_postfixExpression_1?
  ;

pnf_option_primaryExpression_41
  : '__extension__'?
  ;

pnf_option_selectionStatement_88
  : selectionStatement_block_1?
  ;

pnf_option_specifierQualifierList_65
  : specifierQualifierList?
  ;

pnf_option_statement_89
  : statement_block_1?
  ;

pnf_option_statement_90
  : 'goto'?
  ;

pnf_option_statement_91
  : pnf_list_left_14?
  ;

pnf_option_statement_block_6_39
  : pnf_list_left_15?
  ;

pnf_option_structDeclaration_18
  : pnf_list_left_10?
  ;

pnf_option_structDeclarator_66
  : declarator?
  ;

pnf_option_structOrUnionSpecifier_61
  : gccAttributeSpecifier?
  ;

pnf_option_structOrUnionSpecifier_62
  : Identifier?
  ;

pnf_option_typeName_42
  : gccDeclaratorExtension?
  ;

pnf_option_typeName_43
  : abstractDeclarator?
  ;

pnf_part_additiveExpression_4
  : '+' multiplicativeExpression
  | '-' multiplicativeExpression
  ;

pnf_part_andExpression_8
  : '&' equalityExpression
  ;

pnf_part_assignmentExpression_99
  : unaryExpression assignmentOperator
  ;

pnf_part_castExpression_103
  : pnf_option_primaryExpression_41 '(' typeName ')'
  ;

pnf_part_directAbstractDeclarator_27
  : '[' pnf_option_pnf_part_directDeclarator_21_70 pnf_option_pnf_part_directDeclarator_21_71 ']'
  | '[' 'static' pnf_option_pnf_part_directDeclarator_21_70 assignmentExpression ']'
  | '[' pnf_plus_typeQualifierList_23 'static' assignmentExpression ']'
  | '[' '*' ']'
  | '(' pnf_option_directAbstractDeclarator_79 ')' pnf_star_declarator_63
  ;

pnf_part_directDeclarator_21
  : '[' pnf_option_pnf_part_directDeclarator_21_70 pnf_option_pnf_part_directDeclarator_21_71 ']'
  | '[' 'static' pnf_option_pnf_part_directDeclarator_21_70 assignmentExpression ']'
  | '[' pnf_plus_typeQualifierList_23 'static' assignmentExpression ']'
  | '[' pnf_option_pnf_part_directDeclarator_21_70 '*' ']'
  | '(' parameterTypeList ')'
  | '(' pnf_option_pnf_part_directDeclarator_21_72 ')'
  ;

pnf_part_enumerator_19
  : '=' conditionalExpression
  ;

pnf_part_equalityExpression_7
  : '==' relationalExpression
  | '!=' relationalExpression
  ;

pnf_part_exclusiveOrExpression_9
  : '^' pnf_list_left_4
  ;

pnf_part_expression_13
  : ',' assignmentExpression
  ;

pnf_part_externalDeclaration_30
  : asmName '(' pnf_plus_primaryExpression_40 ')'
  ;

pnf_part_inclusiveOrExpression_10
  : '|' pnf_list_left_5
  ;

pnf_part_initDeclarator_16
  : '=' initializer
  ;

pnf_part_logicalAndExpression_11
  : '&&' pnf_list_left_6
  ;

pnf_part_logicalOrExpression_12
  : '||' pnf_list_left_7
  ;

pnf_part_multiplicativeExpression_3
  : '*' castExpression
  | '/' castExpression
  | '%' castExpression
  ;

pnf_part_parameterTypeList_24
  : ',' '...'
  ;

pnf_part_postfixExpression_0
  : '[' pnf_list_left_8 ']'
  | '(' pnf_option_gccAttribute_block_1_36 ')'
  | '.' Identifier
  | '->' Identifier
  | '++'
  | '--'
  ;

pnf_part_postfixExpression_1
  : ','
  ;

pnf_part_postfixExpression_101
  : '__extension__'
  ;

pnf_part_relationalExpression_6
  : '<' shiftExpression
  | '>' shiftExpression
  | '<=' shiftExpression
  | '>=' shiftExpression
  ;

pnf_part_shiftExpression_5
  : '<<' additiveExpression
  | '>>' additiveExpression
  ;

pnf_part_statement_100
  : Identifier ':'
  | 'case' conditionalExpression ':'
  | 'default' ':'
  | 'switch' '(' pnf_list_left_8 ')'
  | 'while' '(' pnf_list_left_8 ')'
  | 'for' '(' pnf_option_conditionalExpression_block_1_34 ';' pnf_option_conditionalExpression_block_1_34 ';' pnf_option_conditionalExpression_block_1_34 ')'
  | 'for' '(' declaration pnf_option_conditionalExpression_block_1_34 ';' pnf_option_conditionalExpression_block_1_34 ')'
  ;

pnf_part_unaryExpression_104
  : '++'
  | '--'
  | unaryOperator pnf_star_castExpression_107
  | 'sizeof'
  | unaryExpression_block_2
  ;

pnf_plus_blockItemList_29
  : blockItem+
  ;

pnf_plus_declarationList_33
  : declaration+
  ;

pnf_plus_declarationSpecifiers2_76
  : declarationSpecifier+
  ;

pnf_plus_designatorList_28
  : designator+
  ;

pnf_plus_primaryExpression_40
  : StringLiteral+
  ;

pnf_plus_translationUnit_32
  : externalDeclaration+
  ;

pnf_plus_typeQualifierList_23
  : typeQualifier+
  ;

pnf_star_additiveExpression_49
  : pnf_part_additiveExpression_4*
  ;

pnf_star_andExpression_53
  : pnf_part_andExpression_8*
  ;

pnf_star_argumentExpressionList_47
  : argumentExpressionList_block_1*
  ;

pnf_star_assignmentExpression_105
  : pnf_part_assignmentExpression_99*
  ;

pnf_star_castExpression_107
  : pnf_part_castExpression_103*
  ;

pnf_star_declarationSpecifiers_59
  : declarationSpecifier*
  ;

pnf_star_declarationSpecifiers_60
  : pointer*
  ;

pnf_star_declarator_63
  : gccDeclaratorExtension*
  ;

pnf_star_directAbstractDeclarator_78
  : pnf_part_directAbstractDeclarator_27*
  ;

pnf_star_directDeclarator_69
  : pnf_part_directDeclarator_21*
  ;

pnf_star_enumeratorList_68
  : enumeratorList_block_1*
  ;

pnf_star_equalityExpression_52
  : pnf_part_equalityExpression_7*
  ;

pnf_star_exclusiveOrExpression_54
  : pnf_part_exclusiveOrExpression_9*
  ;

pnf_star_expression_58
  : pnf_part_expression_13*
  ;

pnf_star_gccAttributeList_74
  : gccAttributeList_block_1*
  ;

pnf_star_genericAssocList_44
  : genericAssocList_block_1*
  ;

pnf_star_identifierList_37
  : identifierList_block_1*
  ;

pnf_star_inclusiveOrExpression_55
  : pnf_part_inclusiveOrExpression_10*
  ;

pnf_star_initDeclaratorList_64
  : initDeclaratorList_block_1*
  ;

pnf_star_initializerList_80
  : initializerList_block_1*
  ;

pnf_star_logicalAndExpression_56
  : pnf_part_logicalAndExpression_11*
  ;

pnf_star_logicalOrExpression_57
  : pnf_part_logicalOrExpression_12*
  ;

pnf_star_multiplicativeExpression_48
  : pnf_part_multiplicativeExpression_3*
  ;

pnf_star_parameterList_77
  : parameterList_block_1*
  ;

pnf_star_postfixExpression_45
  : pnf_part_postfixExpression_0*
  ;

pnf_star_relationalExpression_51
  : pnf_part_relationalExpression_6*
  ;

pnf_star_shiftExpression_50
  : pnf_part_shiftExpression_5*
  ;

pnf_star_statement_106
  : pnf_part_statement_100*
  ;

pnf_star_statement_92
  : statement_block_6*
  ;

pnf_star_statement_block_3_85
  : statement_block_2*
  ;

pnf_star_statement_block_5_86
  : statement_block_4*
  ;

pnf_star_structDeclarationList_35
  : structDeclaration*
  ;

pnf_star_structDeclaratorList_67
  : structDeclaratorList_block_1*
  ;

pnf_star_unaryExpression_108
  : pnf_part_unaryExpression_104*
  ;

pnf_start
  : compilationUnit
  ;

pointer
  : '*' pnf_option_pnf_part_directDeclarator_21_70 pnf_option_pointer_26
  | '^' pnf_option_pnf_part_directDeclarator_21_70 pnf_option_pointer_26
  ;

postfixExpression
  : primaryExpression pnf_star_postfixExpression_45
  | pnf_option_postfixExpression_102 '(' typeName ')' '{' initializerList pnf_option_postfixExpression_2 '}' pnf_star_postfixExpression_45
  ;

primaryExpression
  : Identifier
  | Constant
  | pnf_plus_primaryExpression_40
  | '(' pnf_list_left_8 ')'
  | genericSelection
  | pnf_option_primaryExpression_41 '(' compoundStatement ')'
  | '__builtin_va_arg' '(' unaryExpression ',' typeName ')'
  | '__builtin_offsetof' '(' typeName ',' unaryExpression ')'
  ;

relationalExpression
  : shiftExpression pnf_star_relationalExpression_51
  ;

selectionStatement_block_1
  : 'else' statement
  ;

shiftExpression
  : additiveExpression pnf_star_shiftExpression_50
  ;

specifierQualifierList
  : typeSpecifier pnf_option_specifierQualifierList_65
  | typeQualifier pnf_option_specifierQualifierList_65
  ;

statement
  : pnf_star_statement_106 compoundStatement
  | pnf_star_statement_106 expressionStatement
  | pnf_star_statement_106 'if' '(' pnf_list_left_8 ')' statement pnf_option_selectionStatement_88
  | pnf_star_statement_106 'do' statement 'while' '(' pnf_list_left_8 ')' ';'
  | pnf_star_statement_106 jumpStatement
  | pnf_star_statement_106 asmName pnf_option_statement_89 pnf_option_statement_90 '(' pnf_option_statement_91 pnf_star_statement_92 ')' ';'
  ;

statement_block_1
  : 'volatile'
  | '__volatile__'
  ;

statement_block_2
  : ',' pnf_list_left_1
  ;

statement_block_4
  : ',' pnf_list_left_1
  ;

statement_block_6
  : ':' pnf_option_statement_block_6_39
  ;

staticAssertDeclaration
  : '_Static_assert' '(' conditionalExpression ',' pnf_plus_primaryExpression_40 ')' ';'
  ;

storageClassSpecifier
  : 'typedef'
  | 'extern'
  | 'static'
  | '_Thread_local'
  | 'auto'
  | 'register'
  ;

structDeclaration
  : pnf_option_typeName_42 specifierQualifierList pnf_option_structDeclaration_18 ';'
  | staticAssertDeclaration
  ;

structDeclarator
  : declarator
  | pnf_option_structDeclarator_66 ':' conditionalExpression pnf_option_structOrUnionSpecifier_61
  ;

structDeclaratorList_block_1
  : ',' structDeclarator
  ;

structOrUnion
  : 'struct'
  | 'union'
  ;

structOrUnionSpecifier
  : structOrUnion pnf_option_structOrUnionSpecifier_61 pnf_option_structOrUnionSpecifier_62 '{' pnf_star_structDeclarationList_35 '}'
  | structOrUnion Identifier
  ;

typeName
  : pnf_option_typeName_42 specifierQualifierList pnf_option_typeName_43
  ;

typeQualifier
  : 'const'
  | 'restrict'
  | '__restrict'
  | 'volatile'
  | '_Atomic'
  | '__extension__'
  ;

typeSpecifier
  : typeSpecifier_block_1
  | '__extension__' '(' typeSpecifier_block_2 ')'
  | atomicTypeSpecifier
  | structOrUnionSpecifier
  | enumSpecifier
  | typedefName
  | '__typeof__' '(' conditionalExpression ')'
  | '__typeof' '(' conditionalExpression ')'
  ;

typeSpecifier_block_1
  : 'void'
  | 'char'
  | 'short'
  | 'int'
  | 'long'
  | 'float'
  | 'double'
  | 'signed'
  | 'unsigned'
  | '_Bool'
  | '_Complex'
  | Imaginary
  | '__m128'
  | '__m128d'
  | '__m128i'
  ;

typeSpecifier_block_2
  : '__m128'
  | '__m128d'
  | '__m128i'
  ;

typedefName
  : Identifier
  ;

unaryExpression
  : pnf_star_unaryExpression_108 postfixExpression
  | pnf_star_unaryExpression_108 unaryOperator pnf_star_castExpression_107 '(' typeName ')' initializer
  | pnf_star_unaryExpression_108 'sizeof' '(' typeName ')'
  | pnf_star_unaryExpression_108 unaryExpression_block_1 '(' typeName ')'
  | pnf_star_unaryExpression_108 '__builtin_types_compatible_p' '(' typeName ',' typeName ')'
  | pnf_star_unaryExpression_108 '&&' Identifier
  ;

unaryExpression_block_1
  : '_Alignof'
  | '__alignof__'
  ;

unaryExpression_block_2
  : RealPart
  | ImaginaryPart
  ;

unaryOperator
  : '&'
  | '*'
  | '+'
  | '-'
  | '~'
  | '!'
  ;

