
// Generated from C.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "CPNFParser.h"


namespace antlr_CPNF {

/**
 * This interface defines an abstract listener for a parse tree produced by CParser.
 */
class  CListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterAbstractDeclarator(CParser::AbstractDeclaratorContext *ctx) = 0;
  virtual void exitAbstractDeclarator(CParser::AbstractDeclaratorContext *ctx) = 0;

  virtual void enterAdditiveExpression(CParser::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(CParser::AdditiveExpressionContext *ctx) = 0;

  virtual void enterAlignmentSpecifier(CParser::AlignmentSpecifierContext *ctx) = 0;
  virtual void exitAlignmentSpecifier(CParser::AlignmentSpecifierContext *ctx) = 0;

  virtual void enterArgumentExpressionList_block_1(CParser::ArgumentExpressionList_block_1Context *ctx) = 0;
  virtual void exitArgumentExpressionList_block_1(CParser::ArgumentExpressionList_block_1Context *ctx) = 0;

  virtual void enterAsmName(CParser::AsmNameContext *ctx) = 0;
  virtual void exitAsmName(CParser::AsmNameContext *ctx) = 0;

  virtual void enterAssignmentExpression(CParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(CParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterAssignmentOperator(CParser::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(CParser::AssignmentOperatorContext *ctx) = 0;

  virtual void enterAtomicTypeSpecifier(CParser::AtomicTypeSpecifierContext *ctx) = 0;
  virtual void exitAtomicTypeSpecifier(CParser::AtomicTypeSpecifierContext *ctx) = 0;

  virtual void enterBlockItem(CParser::BlockItemContext *ctx) = 0;
  virtual void exitBlockItem(CParser::BlockItemContext *ctx) = 0;

  virtual void enterCastExpression(CParser::CastExpressionContext *ctx) = 0;
  virtual void exitCastExpression(CParser::CastExpressionContext *ctx) = 0;

  virtual void enterCompilationUnit(CParser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(CParser::CompilationUnitContext *ctx) = 0;

  virtual void enterCompoundStatement(CParser::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(CParser::CompoundStatementContext *ctx) = 0;

  virtual void enterConditionalExpression(CParser::ConditionalExpressionContext *ctx) = 0;
  virtual void exitConditionalExpression(CParser::ConditionalExpressionContext *ctx) = 0;

  virtual void enterConditionalExpression_block_1(CParser::ConditionalExpression_block_1Context *ctx) = 0;
  virtual void exitConditionalExpression_block_1(CParser::ConditionalExpression_block_1Context *ctx) = 0;

  virtual void enterDeclaration(CParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(CParser::DeclarationContext *ctx) = 0;

  virtual void enterDeclarationSpecifier(CParser::DeclarationSpecifierContext *ctx) = 0;
  virtual void exitDeclarationSpecifier(CParser::DeclarationSpecifierContext *ctx) = 0;

  virtual void enterDeclarationSpecifiers(CParser::DeclarationSpecifiersContext *ctx) = 0;
  virtual void exitDeclarationSpecifiers(CParser::DeclarationSpecifiersContext *ctx) = 0;

  virtual void enterDeclarator(CParser::DeclaratorContext *ctx) = 0;
  virtual void exitDeclarator(CParser::DeclaratorContext *ctx) = 0;

  virtual void enterDesignation(CParser::DesignationContext *ctx) = 0;
  virtual void exitDesignation(CParser::DesignationContext *ctx) = 0;

  virtual void enterDesignator(CParser::DesignatorContext *ctx) = 0;
  virtual void exitDesignator(CParser::DesignatorContext *ctx) = 0;

  virtual void enterDesignator_block_1(CParser::Designator_block_1Context *ctx) = 0;
  virtual void exitDesignator_block_1(CParser::Designator_block_1Context *ctx) = 0;

  virtual void enterDirectAbstractDeclarator(CParser::DirectAbstractDeclaratorContext *ctx) = 0;
  virtual void exitDirectAbstractDeclarator(CParser::DirectAbstractDeclaratorContext *ctx) = 0;

  virtual void enterDirectDeclarator(CParser::DirectDeclaratorContext *ctx) = 0;
  virtual void exitDirectDeclarator(CParser::DirectDeclaratorContext *ctx) = 0;

  virtual void enterEnumSpecifier(CParser::EnumSpecifierContext *ctx) = 0;
  virtual void exitEnumSpecifier(CParser::EnumSpecifierContext *ctx) = 0;

  virtual void enterEnumerationConstant(CParser::EnumerationConstantContext *ctx) = 0;
  virtual void exitEnumerationConstant(CParser::EnumerationConstantContext *ctx) = 0;

  virtual void enterEnumerator(CParser::EnumeratorContext *ctx) = 0;
  virtual void exitEnumerator(CParser::EnumeratorContext *ctx) = 0;

  virtual void enterEnumeratorList_block_1(CParser::EnumeratorList_block_1Context *ctx) = 0;
  virtual void exitEnumeratorList_block_1(CParser::EnumeratorList_block_1Context *ctx) = 0;

  virtual void enterEqualityExpression(CParser::EqualityExpressionContext *ctx) = 0;
  virtual void exitEqualityExpression(CParser::EqualityExpressionContext *ctx) = 0;

  virtual void enterExpressionStatement(CParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(CParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterExternalDeclaration(CParser::ExternalDeclarationContext *ctx) = 0;
  virtual void exitExternalDeclaration(CParser::ExternalDeclarationContext *ctx) = 0;

  virtual void enterFunctionDefinition(CParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(CParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterFunctionSpecifier(CParser::FunctionSpecifierContext *ctx) = 0;
  virtual void exitFunctionSpecifier(CParser::FunctionSpecifierContext *ctx) = 0;

  virtual void enterFunctionSpecifier_block_1(CParser::FunctionSpecifier_block_1Context *ctx) = 0;
  virtual void exitFunctionSpecifier_block_1(CParser::FunctionSpecifier_block_1Context *ctx) = 0;

  virtual void enterGccAttribute(CParser::GccAttributeContext *ctx) = 0;
  virtual void exitGccAttribute(CParser::GccAttributeContext *ctx) = 0;

  virtual void enterGccAttributeList_block_1(CParser::GccAttributeList_block_1Context *ctx) = 0;
  virtual void exitGccAttributeList_block_1(CParser::GccAttributeList_block_1Context *ctx) = 0;

  virtual void enterGccAttributeSpecifier(CParser::GccAttributeSpecifierContext *ctx) = 0;
  virtual void exitGccAttributeSpecifier(CParser::GccAttributeSpecifierContext *ctx) = 0;

  virtual void enterGccAttribute_block_1(CParser::GccAttribute_block_1Context *ctx) = 0;
  virtual void exitGccAttribute_block_1(CParser::GccAttribute_block_1Context *ctx) = 0;

  virtual void enterGccDeclaratorExtension(CParser::GccDeclaratorExtensionContext *ctx) = 0;
  virtual void exitGccDeclaratorExtension(CParser::GccDeclaratorExtensionContext *ctx) = 0;

  virtual void enterGenericAssocList_block_1(CParser::GenericAssocList_block_1Context *ctx) = 0;
  virtual void exitGenericAssocList_block_1(CParser::GenericAssocList_block_1Context *ctx) = 0;

  virtual void enterGenericAssociation(CParser::GenericAssociationContext *ctx) = 0;
  virtual void exitGenericAssociation(CParser::GenericAssociationContext *ctx) = 0;

  virtual void enterGenericSelection(CParser::GenericSelectionContext *ctx) = 0;
  virtual void exitGenericSelection(CParser::GenericSelectionContext *ctx) = 0;

  virtual void enterIdentifierList_block_1(CParser::IdentifierList_block_1Context *ctx) = 0;
  virtual void exitIdentifierList_block_1(CParser::IdentifierList_block_1Context *ctx) = 0;

  virtual void enterInitDeclarator(CParser::InitDeclaratorContext *ctx) = 0;
  virtual void exitInitDeclarator(CParser::InitDeclaratorContext *ctx) = 0;

  virtual void enterInitDeclaratorList_block_1(CParser::InitDeclaratorList_block_1Context *ctx) = 0;
  virtual void exitInitDeclaratorList_block_1(CParser::InitDeclaratorList_block_1Context *ctx) = 0;

  virtual void enterInitializer(CParser::InitializerContext *ctx) = 0;
  virtual void exitInitializer(CParser::InitializerContext *ctx) = 0;

  virtual void enterInitializerList(CParser::InitializerListContext *ctx) = 0;
  virtual void exitInitializerList(CParser::InitializerListContext *ctx) = 0;

  virtual void enterInitializerList_block_1(CParser::InitializerList_block_1Context *ctx) = 0;
  virtual void exitInitializerList_block_1(CParser::InitializerList_block_1Context *ctx) = 0;

  virtual void enterInitializer_block_1(CParser::Initializer_block_1Context *ctx) = 0;
  virtual void exitInitializer_block_1(CParser::Initializer_block_1Context *ctx) = 0;

  virtual void enterJumpStatement(CParser::JumpStatementContext *ctx) = 0;
  virtual void exitJumpStatement(CParser::JumpStatementContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(CParser::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(CParser::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterParameterDeclaration(CParser::ParameterDeclarationContext *ctx) = 0;
  virtual void exitParameterDeclaration(CParser::ParameterDeclarationContext *ctx) = 0;

  virtual void enterParameterList_block_1(CParser::ParameterList_block_1Context *ctx) = 0;
  virtual void exitParameterList_block_1(CParser::ParameterList_block_1Context *ctx) = 0;

  virtual void enterParameterTypeList(CParser::ParameterTypeListContext *ctx) = 0;
  virtual void exitParameterTypeList(CParser::ParameterTypeListContext *ctx) = 0;

  virtual void enterPnf_list_left_0(CParser::Pnf_list_left_0Context *ctx) = 0;
  virtual void exitPnf_list_left_0(CParser::Pnf_list_left_0Context *ctx) = 0;

  virtual void enterPnf_list_left_1(CParser::Pnf_list_left_1Context *ctx) = 0;
  virtual void exitPnf_list_left_1(CParser::Pnf_list_left_1Context *ctx) = 0;

  virtual void enterPnf_list_left_10(CParser::Pnf_list_left_10Context *ctx) = 0;
  virtual void exitPnf_list_left_10(CParser::Pnf_list_left_10Context *ctx) = 0;

  virtual void enterPnf_list_left_11(CParser::Pnf_list_left_11Context *ctx) = 0;
  virtual void exitPnf_list_left_11(CParser::Pnf_list_left_11Context *ctx) = 0;

  virtual void enterPnf_list_left_12(CParser::Pnf_list_left_12Context *ctx) = 0;
  virtual void exitPnf_list_left_12(CParser::Pnf_list_left_12Context *ctx) = 0;

  virtual void enterPnf_list_left_13(CParser::Pnf_list_left_13Context *ctx) = 0;
  virtual void exitPnf_list_left_13(CParser::Pnf_list_left_13Context *ctx) = 0;

  virtual void enterPnf_list_left_14(CParser::Pnf_list_left_14Context *ctx) = 0;
  virtual void exitPnf_list_left_14(CParser::Pnf_list_left_14Context *ctx) = 0;

  virtual void enterPnf_list_left_15(CParser::Pnf_list_left_15Context *ctx) = 0;
  virtual void exitPnf_list_left_15(CParser::Pnf_list_left_15Context *ctx) = 0;

  virtual void enterPnf_list_left_2(CParser::Pnf_list_left_2Context *ctx) = 0;
  virtual void exitPnf_list_left_2(CParser::Pnf_list_left_2Context *ctx) = 0;

  virtual void enterPnf_list_left_3(CParser::Pnf_list_left_3Context *ctx) = 0;
  virtual void exitPnf_list_left_3(CParser::Pnf_list_left_3Context *ctx) = 0;

  virtual void enterPnf_list_left_4(CParser::Pnf_list_left_4Context *ctx) = 0;
  virtual void exitPnf_list_left_4(CParser::Pnf_list_left_4Context *ctx) = 0;

  virtual void enterPnf_list_left_5(CParser::Pnf_list_left_5Context *ctx) = 0;
  virtual void exitPnf_list_left_5(CParser::Pnf_list_left_5Context *ctx) = 0;

  virtual void enterPnf_list_left_6(CParser::Pnf_list_left_6Context *ctx) = 0;
  virtual void exitPnf_list_left_6(CParser::Pnf_list_left_6Context *ctx) = 0;

  virtual void enterPnf_list_left_7(CParser::Pnf_list_left_7Context *ctx) = 0;
  virtual void exitPnf_list_left_7(CParser::Pnf_list_left_7Context *ctx) = 0;

  virtual void enterPnf_list_left_8(CParser::Pnf_list_left_8Context *ctx) = 0;
  virtual void exitPnf_list_left_8(CParser::Pnf_list_left_8Context *ctx) = 0;

  virtual void enterPnf_list_left_9(CParser::Pnf_list_left_9Context *ctx) = 0;
  virtual void exitPnf_list_left_9(CParser::Pnf_list_left_9Context *ctx) = 0;

  virtual void enterPnf_option_compilationUnit_98(CParser::Pnf_option_compilationUnit_98Context *ctx) = 0;
  virtual void exitPnf_option_compilationUnit_98(CParser::Pnf_option_compilationUnit_98Context *ctx) = 0;

  virtual void enterPnf_option_compoundStatement_87(CParser::Pnf_option_compoundStatement_87Context *ctx) = 0;
  virtual void exitPnf_option_compoundStatement_87(CParser::Pnf_option_compoundStatement_87Context *ctx) = 0;

  virtual void enterPnf_option_conditionalExpression_46(CParser::Pnf_option_conditionalExpression_46Context *ctx) = 0;
  virtual void exitPnf_option_conditionalExpression_46(CParser::Pnf_option_conditionalExpression_46Context *ctx) = 0;

  virtual void enterPnf_option_conditionalExpression_block_1_34(CParser::Pnf_option_conditionalExpression_block_1_34Context *ctx) = 0;
  virtual void exitPnf_option_conditionalExpression_block_1_34(CParser::Pnf_option_conditionalExpression_block_1_34Context *ctx) = 0;

  virtual void enterPnf_option_declaration_14(CParser::Pnf_option_declaration_14Context *ctx) = 0;
  virtual void exitPnf_option_declaration_14(CParser::Pnf_option_declaration_14Context *ctx) = 0;

  virtual void enterPnf_option_designator_83(CParser::Pnf_option_designator_83Context *ctx) = 0;
  virtual void exitPnf_option_designator_83(CParser::Pnf_option_designator_83Context *ctx) = 0;

  virtual void enterPnf_option_directAbstractDeclarator_79(CParser::Pnf_option_directAbstractDeclarator_79Context *ctx) = 0;
  virtual void exitPnf_option_directAbstractDeclarator_79(CParser::Pnf_option_directAbstractDeclarator_79Context *ctx) = 0;

  virtual void enterPnf_option_enumerator_20(CParser::Pnf_option_enumerator_20Context *ctx) = 0;
  virtual void exitPnf_option_enumerator_20(CParser::Pnf_option_enumerator_20Context *ctx) = 0;

  virtual void enterPnf_option_externalDeclaration_31(CParser::Pnf_option_externalDeclaration_31Context *ctx) = 0;
  virtual void exitPnf_option_externalDeclaration_31(CParser::Pnf_option_externalDeclaration_31Context *ctx) = 0;

  virtual void enterPnf_option_functionDefinition_93(CParser::Pnf_option_functionDefinition_93Context *ctx) = 0;
  virtual void exitPnf_option_functionDefinition_93(CParser::Pnf_option_functionDefinition_93Context *ctx) = 0;

  virtual void enterPnf_option_functionDefinition_94(CParser::Pnf_option_functionDefinition_94Context *ctx) = 0;
  virtual void exitPnf_option_functionDefinition_94(CParser::Pnf_option_functionDefinition_94Context *ctx) = 0;

  virtual void enterPnf_option_gccAttributeList_22(CParser::Pnf_option_gccAttributeList_22Context *ctx) = 0;
  virtual void exitPnf_option_gccAttributeList_22(CParser::Pnf_option_gccAttributeList_22Context *ctx) = 0;

  virtual void enterPnf_option_gccAttributeSpecifier_15(CParser::Pnf_option_gccAttributeSpecifier_15Context *ctx) = 0;
  virtual void exitPnf_option_gccAttributeSpecifier_15(CParser::Pnf_option_gccAttributeSpecifier_15Context *ctx) = 0;

  virtual void enterPnf_option_gccAttribute_73(CParser::Pnf_option_gccAttribute_73Context *ctx) = 0;
  virtual void exitPnf_option_gccAttribute_73(CParser::Pnf_option_gccAttribute_73Context *ctx) = 0;

  virtual void enterPnf_option_gccAttribute_block_1_36(CParser::Pnf_option_gccAttribute_block_1_36Context *ctx) = 0;
  virtual void exitPnf_option_gccAttribute_block_1_36(CParser::Pnf_option_gccAttribute_block_1_36Context *ctx) = 0;

  virtual void enterPnf_option_initDeclarator_17(CParser::Pnf_option_initDeclarator_17Context *ctx) = 0;
  virtual void exitPnf_option_initDeclarator_17(CParser::Pnf_option_initDeclarator_17Context *ctx) = 0;

  virtual void enterPnf_option_initializerList_block_1_38(CParser::Pnf_option_initializerList_block_1_38Context *ctx) = 0;
  virtual void exitPnf_option_initializerList_block_1_38(CParser::Pnf_option_initializerList_block_1_38Context *ctx) = 0;

  virtual void enterPnf_option_initializer_82(CParser::Pnf_option_initializer_82Context *ctx) = 0;
  virtual void exitPnf_option_initializer_82(CParser::Pnf_option_initializer_82Context *ctx) = 0;

  virtual void enterPnf_option_initializer_block_1_81(CParser::Pnf_option_initializer_block_1_81Context *ctx) = 0;
  virtual void exitPnf_option_initializer_block_1_81(CParser::Pnf_option_initializer_block_1_81Context *ctx) = 0;

  virtual void enterPnf_option_parameterTypeList_25(CParser::Pnf_option_parameterTypeList_25Context *ctx) = 0;
  virtual void exitPnf_option_parameterTypeList_25(CParser::Pnf_option_parameterTypeList_25Context *ctx) = 0;

  virtual void enterPnf_option_pnf_part_directDeclarator_21_70(CParser::Pnf_option_pnf_part_directDeclarator_21_70Context *ctx) = 0;
  virtual void exitPnf_option_pnf_part_directDeclarator_21_70(CParser::Pnf_option_pnf_part_directDeclarator_21_70Context *ctx) = 0;

  virtual void enterPnf_option_pnf_part_directDeclarator_21_71(CParser::Pnf_option_pnf_part_directDeclarator_21_71Context *ctx) = 0;
  virtual void exitPnf_option_pnf_part_directDeclarator_21_71(CParser::Pnf_option_pnf_part_directDeclarator_21_71Context *ctx) = 0;

  virtual void enterPnf_option_pnf_part_directDeclarator_21_72(CParser::Pnf_option_pnf_part_directDeclarator_21_72Context *ctx) = 0;
  virtual void exitPnf_option_pnf_part_directDeclarator_21_72(CParser::Pnf_option_pnf_part_directDeclarator_21_72Context *ctx) = 0;

  virtual void enterPnf_option_pointer_26(CParser::Pnf_option_pointer_26Context *ctx) = 0;
  virtual void exitPnf_option_pointer_26(CParser::Pnf_option_pointer_26Context *ctx) = 0;

  virtual void enterPnf_option_postfixExpression_102(CParser::Pnf_option_postfixExpression_102Context *ctx) = 0;
  virtual void exitPnf_option_postfixExpression_102(CParser::Pnf_option_postfixExpression_102Context *ctx) = 0;

  virtual void enterPnf_option_postfixExpression_2(CParser::Pnf_option_postfixExpression_2Context *ctx) = 0;
  virtual void exitPnf_option_postfixExpression_2(CParser::Pnf_option_postfixExpression_2Context *ctx) = 0;

  virtual void enterPnf_option_primaryExpression_41(CParser::Pnf_option_primaryExpression_41Context *ctx) = 0;
  virtual void exitPnf_option_primaryExpression_41(CParser::Pnf_option_primaryExpression_41Context *ctx) = 0;

  virtual void enterPnf_option_selectionStatement_88(CParser::Pnf_option_selectionStatement_88Context *ctx) = 0;
  virtual void exitPnf_option_selectionStatement_88(CParser::Pnf_option_selectionStatement_88Context *ctx) = 0;

  virtual void enterPnf_option_specifierQualifierList_65(CParser::Pnf_option_specifierQualifierList_65Context *ctx) = 0;
  virtual void exitPnf_option_specifierQualifierList_65(CParser::Pnf_option_specifierQualifierList_65Context *ctx) = 0;

  virtual void enterPnf_option_statement_89(CParser::Pnf_option_statement_89Context *ctx) = 0;
  virtual void exitPnf_option_statement_89(CParser::Pnf_option_statement_89Context *ctx) = 0;

  virtual void enterPnf_option_statement_90(CParser::Pnf_option_statement_90Context *ctx) = 0;
  virtual void exitPnf_option_statement_90(CParser::Pnf_option_statement_90Context *ctx) = 0;

  virtual void enterPnf_option_statement_91(CParser::Pnf_option_statement_91Context *ctx) = 0;
  virtual void exitPnf_option_statement_91(CParser::Pnf_option_statement_91Context *ctx) = 0;

  virtual void enterPnf_option_statement_block_6_39(CParser::Pnf_option_statement_block_6_39Context *ctx) = 0;
  virtual void exitPnf_option_statement_block_6_39(CParser::Pnf_option_statement_block_6_39Context *ctx) = 0;

  virtual void enterPnf_option_structDeclaration_18(CParser::Pnf_option_structDeclaration_18Context *ctx) = 0;
  virtual void exitPnf_option_structDeclaration_18(CParser::Pnf_option_structDeclaration_18Context *ctx) = 0;

  virtual void enterPnf_option_structDeclarator_66(CParser::Pnf_option_structDeclarator_66Context *ctx) = 0;
  virtual void exitPnf_option_structDeclarator_66(CParser::Pnf_option_structDeclarator_66Context *ctx) = 0;

  virtual void enterPnf_option_structOrUnionSpecifier_61(CParser::Pnf_option_structOrUnionSpecifier_61Context *ctx) = 0;
  virtual void exitPnf_option_structOrUnionSpecifier_61(CParser::Pnf_option_structOrUnionSpecifier_61Context *ctx) = 0;

  virtual void enterPnf_option_structOrUnionSpecifier_62(CParser::Pnf_option_structOrUnionSpecifier_62Context *ctx) = 0;
  virtual void exitPnf_option_structOrUnionSpecifier_62(CParser::Pnf_option_structOrUnionSpecifier_62Context *ctx) = 0;

  virtual void enterPnf_option_typeName_42(CParser::Pnf_option_typeName_42Context *ctx) = 0;
  virtual void exitPnf_option_typeName_42(CParser::Pnf_option_typeName_42Context *ctx) = 0;

  virtual void enterPnf_option_typeName_43(CParser::Pnf_option_typeName_43Context *ctx) = 0;
  virtual void exitPnf_option_typeName_43(CParser::Pnf_option_typeName_43Context *ctx) = 0;

  virtual void enterPnf_part_additiveExpression_4(CParser::Pnf_part_additiveExpression_4Context *ctx) = 0;
  virtual void exitPnf_part_additiveExpression_4(CParser::Pnf_part_additiveExpression_4Context *ctx) = 0;

  virtual void enterPnf_part_andExpression_8(CParser::Pnf_part_andExpression_8Context *ctx) = 0;
  virtual void exitPnf_part_andExpression_8(CParser::Pnf_part_andExpression_8Context *ctx) = 0;

  virtual void enterPnf_part_assignmentExpression_99(CParser::Pnf_part_assignmentExpression_99Context *ctx) = 0;
  virtual void exitPnf_part_assignmentExpression_99(CParser::Pnf_part_assignmentExpression_99Context *ctx) = 0;

  virtual void enterPnf_part_castExpression_103(CParser::Pnf_part_castExpression_103Context *ctx) = 0;
  virtual void exitPnf_part_castExpression_103(CParser::Pnf_part_castExpression_103Context *ctx) = 0;

  virtual void enterPnf_part_directAbstractDeclarator_27(CParser::Pnf_part_directAbstractDeclarator_27Context *ctx) = 0;
  virtual void exitPnf_part_directAbstractDeclarator_27(CParser::Pnf_part_directAbstractDeclarator_27Context *ctx) = 0;

  virtual void enterPnf_part_directDeclarator_21(CParser::Pnf_part_directDeclarator_21Context *ctx) = 0;
  virtual void exitPnf_part_directDeclarator_21(CParser::Pnf_part_directDeclarator_21Context *ctx) = 0;

  virtual void enterPnf_part_enumerator_19(CParser::Pnf_part_enumerator_19Context *ctx) = 0;
  virtual void exitPnf_part_enumerator_19(CParser::Pnf_part_enumerator_19Context *ctx) = 0;

  virtual void enterPnf_part_equalityExpression_7(CParser::Pnf_part_equalityExpression_7Context *ctx) = 0;
  virtual void exitPnf_part_equalityExpression_7(CParser::Pnf_part_equalityExpression_7Context *ctx) = 0;

  virtual void enterPnf_part_exclusiveOrExpression_9(CParser::Pnf_part_exclusiveOrExpression_9Context *ctx) = 0;
  virtual void exitPnf_part_exclusiveOrExpression_9(CParser::Pnf_part_exclusiveOrExpression_9Context *ctx) = 0;

  virtual void enterPnf_part_expression_13(CParser::Pnf_part_expression_13Context *ctx) = 0;
  virtual void exitPnf_part_expression_13(CParser::Pnf_part_expression_13Context *ctx) = 0;

  virtual void enterPnf_part_externalDeclaration_30(CParser::Pnf_part_externalDeclaration_30Context *ctx) = 0;
  virtual void exitPnf_part_externalDeclaration_30(CParser::Pnf_part_externalDeclaration_30Context *ctx) = 0;

  virtual void enterPnf_part_inclusiveOrExpression_10(CParser::Pnf_part_inclusiveOrExpression_10Context *ctx) = 0;
  virtual void exitPnf_part_inclusiveOrExpression_10(CParser::Pnf_part_inclusiveOrExpression_10Context *ctx) = 0;

  virtual void enterPnf_part_initDeclarator_16(CParser::Pnf_part_initDeclarator_16Context *ctx) = 0;
  virtual void exitPnf_part_initDeclarator_16(CParser::Pnf_part_initDeclarator_16Context *ctx) = 0;

  virtual void enterPnf_part_logicalAndExpression_11(CParser::Pnf_part_logicalAndExpression_11Context *ctx) = 0;
  virtual void exitPnf_part_logicalAndExpression_11(CParser::Pnf_part_logicalAndExpression_11Context *ctx) = 0;

  virtual void enterPnf_part_logicalOrExpression_12(CParser::Pnf_part_logicalOrExpression_12Context *ctx) = 0;
  virtual void exitPnf_part_logicalOrExpression_12(CParser::Pnf_part_logicalOrExpression_12Context *ctx) = 0;

  virtual void enterPnf_part_multiplicativeExpression_3(CParser::Pnf_part_multiplicativeExpression_3Context *ctx) = 0;
  virtual void exitPnf_part_multiplicativeExpression_3(CParser::Pnf_part_multiplicativeExpression_3Context *ctx) = 0;

  virtual void enterPnf_part_parameterTypeList_24(CParser::Pnf_part_parameterTypeList_24Context *ctx) = 0;
  virtual void exitPnf_part_parameterTypeList_24(CParser::Pnf_part_parameterTypeList_24Context *ctx) = 0;

  virtual void enterPnf_part_postfixExpression_0(CParser::Pnf_part_postfixExpression_0Context *ctx) = 0;
  virtual void exitPnf_part_postfixExpression_0(CParser::Pnf_part_postfixExpression_0Context *ctx) = 0;

  virtual void enterPnf_part_postfixExpression_1(CParser::Pnf_part_postfixExpression_1Context *ctx) = 0;
  virtual void exitPnf_part_postfixExpression_1(CParser::Pnf_part_postfixExpression_1Context *ctx) = 0;

  virtual void enterPnf_part_postfixExpression_101(CParser::Pnf_part_postfixExpression_101Context *ctx) = 0;
  virtual void exitPnf_part_postfixExpression_101(CParser::Pnf_part_postfixExpression_101Context *ctx) = 0;

  virtual void enterPnf_part_relationalExpression_6(CParser::Pnf_part_relationalExpression_6Context *ctx) = 0;
  virtual void exitPnf_part_relationalExpression_6(CParser::Pnf_part_relationalExpression_6Context *ctx) = 0;

  virtual void enterPnf_part_shiftExpression_5(CParser::Pnf_part_shiftExpression_5Context *ctx) = 0;
  virtual void exitPnf_part_shiftExpression_5(CParser::Pnf_part_shiftExpression_5Context *ctx) = 0;

  virtual void enterPnf_part_statement_100(CParser::Pnf_part_statement_100Context *ctx) = 0;
  virtual void exitPnf_part_statement_100(CParser::Pnf_part_statement_100Context *ctx) = 0;

  virtual void enterPnf_part_unaryExpression_104(CParser::Pnf_part_unaryExpression_104Context *ctx) = 0;
  virtual void exitPnf_part_unaryExpression_104(CParser::Pnf_part_unaryExpression_104Context *ctx) = 0;

  virtual void enterPnf_plus_blockItemList_29(CParser::Pnf_plus_blockItemList_29Context *ctx) = 0;
  virtual void exitPnf_plus_blockItemList_29(CParser::Pnf_plus_blockItemList_29Context *ctx) = 0;

  virtual void enterPnf_plus_declarationList_33(CParser::Pnf_plus_declarationList_33Context *ctx) = 0;
  virtual void exitPnf_plus_declarationList_33(CParser::Pnf_plus_declarationList_33Context *ctx) = 0;

  virtual void enterPnf_plus_declarationSpecifiers2_76(CParser::Pnf_plus_declarationSpecifiers2_76Context *ctx) = 0;
  virtual void exitPnf_plus_declarationSpecifiers2_76(CParser::Pnf_plus_declarationSpecifiers2_76Context *ctx) = 0;

  virtual void enterPnf_plus_designatorList_28(CParser::Pnf_plus_designatorList_28Context *ctx) = 0;
  virtual void exitPnf_plus_designatorList_28(CParser::Pnf_plus_designatorList_28Context *ctx) = 0;

  virtual void enterPnf_plus_primaryExpression_40(CParser::Pnf_plus_primaryExpression_40Context *ctx) = 0;
  virtual void exitPnf_plus_primaryExpression_40(CParser::Pnf_plus_primaryExpression_40Context *ctx) = 0;

  virtual void enterPnf_plus_translationUnit_32(CParser::Pnf_plus_translationUnit_32Context *ctx) = 0;
  virtual void exitPnf_plus_translationUnit_32(CParser::Pnf_plus_translationUnit_32Context *ctx) = 0;

  virtual void enterPnf_plus_typeQualifierList_23(CParser::Pnf_plus_typeQualifierList_23Context *ctx) = 0;
  virtual void exitPnf_plus_typeQualifierList_23(CParser::Pnf_plus_typeQualifierList_23Context *ctx) = 0;

  virtual void enterPnf_star_additiveExpression_49(CParser::Pnf_star_additiveExpression_49Context *ctx) = 0;
  virtual void exitPnf_star_additiveExpression_49(CParser::Pnf_star_additiveExpression_49Context *ctx) = 0;

  virtual void enterPnf_star_andExpression_53(CParser::Pnf_star_andExpression_53Context *ctx) = 0;
  virtual void exitPnf_star_andExpression_53(CParser::Pnf_star_andExpression_53Context *ctx) = 0;

  virtual void enterPnf_star_argumentExpressionList_47(CParser::Pnf_star_argumentExpressionList_47Context *ctx) = 0;
  virtual void exitPnf_star_argumentExpressionList_47(CParser::Pnf_star_argumentExpressionList_47Context *ctx) = 0;

  virtual void enterPnf_star_assignmentExpression_105(CParser::Pnf_star_assignmentExpression_105Context *ctx) = 0;
  virtual void exitPnf_star_assignmentExpression_105(CParser::Pnf_star_assignmentExpression_105Context *ctx) = 0;

  virtual void enterPnf_star_castExpression_107(CParser::Pnf_star_castExpression_107Context *ctx) = 0;
  virtual void exitPnf_star_castExpression_107(CParser::Pnf_star_castExpression_107Context *ctx) = 0;

  virtual void enterPnf_star_declarationSpecifiers_59(CParser::Pnf_star_declarationSpecifiers_59Context *ctx) = 0;
  virtual void exitPnf_star_declarationSpecifiers_59(CParser::Pnf_star_declarationSpecifiers_59Context *ctx) = 0;

  virtual void enterPnf_star_declarationSpecifiers_60(CParser::Pnf_star_declarationSpecifiers_60Context *ctx) = 0;
  virtual void exitPnf_star_declarationSpecifiers_60(CParser::Pnf_star_declarationSpecifiers_60Context *ctx) = 0;

  virtual void enterPnf_star_declarator_63(CParser::Pnf_star_declarator_63Context *ctx) = 0;
  virtual void exitPnf_star_declarator_63(CParser::Pnf_star_declarator_63Context *ctx) = 0;

  virtual void enterPnf_star_directAbstractDeclarator_78(CParser::Pnf_star_directAbstractDeclarator_78Context *ctx) = 0;
  virtual void exitPnf_star_directAbstractDeclarator_78(CParser::Pnf_star_directAbstractDeclarator_78Context *ctx) = 0;

  virtual void enterPnf_star_directDeclarator_69(CParser::Pnf_star_directDeclarator_69Context *ctx) = 0;
  virtual void exitPnf_star_directDeclarator_69(CParser::Pnf_star_directDeclarator_69Context *ctx) = 0;

  virtual void enterPnf_star_enumeratorList_68(CParser::Pnf_star_enumeratorList_68Context *ctx) = 0;
  virtual void exitPnf_star_enumeratorList_68(CParser::Pnf_star_enumeratorList_68Context *ctx) = 0;

  virtual void enterPnf_star_equalityExpression_52(CParser::Pnf_star_equalityExpression_52Context *ctx) = 0;
  virtual void exitPnf_star_equalityExpression_52(CParser::Pnf_star_equalityExpression_52Context *ctx) = 0;

  virtual void enterPnf_star_exclusiveOrExpression_54(CParser::Pnf_star_exclusiveOrExpression_54Context *ctx) = 0;
  virtual void exitPnf_star_exclusiveOrExpression_54(CParser::Pnf_star_exclusiveOrExpression_54Context *ctx) = 0;

  virtual void enterPnf_star_expression_58(CParser::Pnf_star_expression_58Context *ctx) = 0;
  virtual void exitPnf_star_expression_58(CParser::Pnf_star_expression_58Context *ctx) = 0;

  virtual void enterPnf_star_gccAttributeList_74(CParser::Pnf_star_gccAttributeList_74Context *ctx) = 0;
  virtual void exitPnf_star_gccAttributeList_74(CParser::Pnf_star_gccAttributeList_74Context *ctx) = 0;

  virtual void enterPnf_star_genericAssocList_44(CParser::Pnf_star_genericAssocList_44Context *ctx) = 0;
  virtual void exitPnf_star_genericAssocList_44(CParser::Pnf_star_genericAssocList_44Context *ctx) = 0;

  virtual void enterPnf_star_identifierList_37(CParser::Pnf_star_identifierList_37Context *ctx) = 0;
  virtual void exitPnf_star_identifierList_37(CParser::Pnf_star_identifierList_37Context *ctx) = 0;

  virtual void enterPnf_star_inclusiveOrExpression_55(CParser::Pnf_star_inclusiveOrExpression_55Context *ctx) = 0;
  virtual void exitPnf_star_inclusiveOrExpression_55(CParser::Pnf_star_inclusiveOrExpression_55Context *ctx) = 0;

  virtual void enterPnf_star_initDeclaratorList_64(CParser::Pnf_star_initDeclaratorList_64Context *ctx) = 0;
  virtual void exitPnf_star_initDeclaratorList_64(CParser::Pnf_star_initDeclaratorList_64Context *ctx) = 0;

  virtual void enterPnf_star_initializerList_80(CParser::Pnf_star_initializerList_80Context *ctx) = 0;
  virtual void exitPnf_star_initializerList_80(CParser::Pnf_star_initializerList_80Context *ctx) = 0;

  virtual void enterPnf_star_logicalAndExpression_56(CParser::Pnf_star_logicalAndExpression_56Context *ctx) = 0;
  virtual void exitPnf_star_logicalAndExpression_56(CParser::Pnf_star_logicalAndExpression_56Context *ctx) = 0;

  virtual void enterPnf_star_logicalOrExpression_57(CParser::Pnf_star_logicalOrExpression_57Context *ctx) = 0;
  virtual void exitPnf_star_logicalOrExpression_57(CParser::Pnf_star_logicalOrExpression_57Context *ctx) = 0;

  virtual void enterPnf_star_multiplicativeExpression_48(CParser::Pnf_star_multiplicativeExpression_48Context *ctx) = 0;
  virtual void exitPnf_star_multiplicativeExpression_48(CParser::Pnf_star_multiplicativeExpression_48Context *ctx) = 0;

  virtual void enterPnf_star_parameterList_77(CParser::Pnf_star_parameterList_77Context *ctx) = 0;
  virtual void exitPnf_star_parameterList_77(CParser::Pnf_star_parameterList_77Context *ctx) = 0;

  virtual void enterPnf_star_postfixExpression_45(CParser::Pnf_star_postfixExpression_45Context *ctx) = 0;
  virtual void exitPnf_star_postfixExpression_45(CParser::Pnf_star_postfixExpression_45Context *ctx) = 0;

  virtual void enterPnf_star_relationalExpression_51(CParser::Pnf_star_relationalExpression_51Context *ctx) = 0;
  virtual void exitPnf_star_relationalExpression_51(CParser::Pnf_star_relationalExpression_51Context *ctx) = 0;

  virtual void enterPnf_star_shiftExpression_50(CParser::Pnf_star_shiftExpression_50Context *ctx) = 0;
  virtual void exitPnf_star_shiftExpression_50(CParser::Pnf_star_shiftExpression_50Context *ctx) = 0;

  virtual void enterPnf_star_statement_106(CParser::Pnf_star_statement_106Context *ctx) = 0;
  virtual void exitPnf_star_statement_106(CParser::Pnf_star_statement_106Context *ctx) = 0;

  virtual void enterPnf_star_statement_92(CParser::Pnf_star_statement_92Context *ctx) = 0;
  virtual void exitPnf_star_statement_92(CParser::Pnf_star_statement_92Context *ctx) = 0;

  virtual void enterPnf_star_statement_block_3_85(CParser::Pnf_star_statement_block_3_85Context *ctx) = 0;
  virtual void exitPnf_star_statement_block_3_85(CParser::Pnf_star_statement_block_3_85Context *ctx) = 0;

  virtual void enterPnf_star_statement_block_5_86(CParser::Pnf_star_statement_block_5_86Context *ctx) = 0;
  virtual void exitPnf_star_statement_block_5_86(CParser::Pnf_star_statement_block_5_86Context *ctx) = 0;

  virtual void enterPnf_star_structDeclarationList_35(CParser::Pnf_star_structDeclarationList_35Context *ctx) = 0;
  virtual void exitPnf_star_structDeclarationList_35(CParser::Pnf_star_structDeclarationList_35Context *ctx) = 0;

  virtual void enterPnf_star_structDeclaratorList_67(CParser::Pnf_star_structDeclaratorList_67Context *ctx) = 0;
  virtual void exitPnf_star_structDeclaratorList_67(CParser::Pnf_star_structDeclaratorList_67Context *ctx) = 0;

  virtual void enterPnf_star_unaryExpression_108(CParser::Pnf_star_unaryExpression_108Context *ctx) = 0;
  virtual void exitPnf_star_unaryExpression_108(CParser::Pnf_star_unaryExpression_108Context *ctx) = 0;

  virtual void enterPnf_start(CParser::Pnf_startContext *ctx) = 0;
  virtual void exitPnf_start(CParser::Pnf_startContext *ctx) = 0;

  virtual void enterPointer(CParser::PointerContext *ctx) = 0;
  virtual void exitPointer(CParser::PointerContext *ctx) = 0;

  virtual void enterPostfixExpression(CParser::PostfixExpressionContext *ctx) = 0;
  virtual void exitPostfixExpression(CParser::PostfixExpressionContext *ctx) = 0;

  virtual void enterPrimaryExpression(CParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(CParser::PrimaryExpressionContext *ctx) = 0;

  virtual void enterRelationalExpression(CParser::RelationalExpressionContext *ctx) = 0;
  virtual void exitRelationalExpression(CParser::RelationalExpressionContext *ctx) = 0;

  virtual void enterSelectionStatement_block_1(CParser::SelectionStatement_block_1Context *ctx) = 0;
  virtual void exitSelectionStatement_block_1(CParser::SelectionStatement_block_1Context *ctx) = 0;

  virtual void enterShiftExpression(CParser::ShiftExpressionContext *ctx) = 0;
  virtual void exitShiftExpression(CParser::ShiftExpressionContext *ctx) = 0;

  virtual void enterSpecifierQualifierList(CParser::SpecifierQualifierListContext *ctx) = 0;
  virtual void exitSpecifierQualifierList(CParser::SpecifierQualifierListContext *ctx) = 0;

  virtual void enterStatement(CParser::StatementContext *ctx) = 0;
  virtual void exitStatement(CParser::StatementContext *ctx) = 0;

  virtual void enterStatement_block_1(CParser::Statement_block_1Context *ctx) = 0;
  virtual void exitStatement_block_1(CParser::Statement_block_1Context *ctx) = 0;

  virtual void enterStatement_block_2(CParser::Statement_block_2Context *ctx) = 0;
  virtual void exitStatement_block_2(CParser::Statement_block_2Context *ctx) = 0;

  virtual void enterStatement_block_4(CParser::Statement_block_4Context *ctx) = 0;
  virtual void exitStatement_block_4(CParser::Statement_block_4Context *ctx) = 0;

  virtual void enterStatement_block_6(CParser::Statement_block_6Context *ctx) = 0;
  virtual void exitStatement_block_6(CParser::Statement_block_6Context *ctx) = 0;

  virtual void enterStaticAssertDeclaration(CParser::StaticAssertDeclarationContext *ctx) = 0;
  virtual void exitStaticAssertDeclaration(CParser::StaticAssertDeclarationContext *ctx) = 0;

  virtual void enterStorageClassSpecifier(CParser::StorageClassSpecifierContext *ctx) = 0;
  virtual void exitStorageClassSpecifier(CParser::StorageClassSpecifierContext *ctx) = 0;

  virtual void enterStructDeclaration(CParser::StructDeclarationContext *ctx) = 0;
  virtual void exitStructDeclaration(CParser::StructDeclarationContext *ctx) = 0;

  virtual void enterStructDeclarator(CParser::StructDeclaratorContext *ctx) = 0;
  virtual void exitStructDeclarator(CParser::StructDeclaratorContext *ctx) = 0;

  virtual void enterStructDeclaratorList_block_1(CParser::StructDeclaratorList_block_1Context *ctx) = 0;
  virtual void exitStructDeclaratorList_block_1(CParser::StructDeclaratorList_block_1Context *ctx) = 0;

  virtual void enterStructOrUnion(CParser::StructOrUnionContext *ctx) = 0;
  virtual void exitStructOrUnion(CParser::StructOrUnionContext *ctx) = 0;

  virtual void enterStructOrUnionSpecifier(CParser::StructOrUnionSpecifierContext *ctx) = 0;
  virtual void exitStructOrUnionSpecifier(CParser::StructOrUnionSpecifierContext *ctx) = 0;

  virtual void enterTypeName(CParser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(CParser::TypeNameContext *ctx) = 0;

  virtual void enterTypeQualifier(CParser::TypeQualifierContext *ctx) = 0;
  virtual void exitTypeQualifier(CParser::TypeQualifierContext *ctx) = 0;

  virtual void enterTypeSpecifier(CParser::TypeSpecifierContext *ctx) = 0;
  virtual void exitTypeSpecifier(CParser::TypeSpecifierContext *ctx) = 0;

  virtual void enterTypeSpecifier_block_1(CParser::TypeSpecifier_block_1Context *ctx) = 0;
  virtual void exitTypeSpecifier_block_1(CParser::TypeSpecifier_block_1Context *ctx) = 0;

  virtual void enterTypeSpecifier_block_2(CParser::TypeSpecifier_block_2Context *ctx) = 0;
  virtual void exitTypeSpecifier_block_2(CParser::TypeSpecifier_block_2Context *ctx) = 0;

  virtual void enterTypedefName(CParser::TypedefNameContext *ctx) = 0;
  virtual void exitTypedefName(CParser::TypedefNameContext *ctx) = 0;

  virtual void enterUnaryExpression(CParser::UnaryExpressionContext *ctx) = 0;
  virtual void exitUnaryExpression(CParser::UnaryExpressionContext *ctx) = 0;

  virtual void enterUnaryExpression_block_1(CParser::UnaryExpression_block_1Context *ctx) = 0;
  virtual void exitUnaryExpression_block_1(CParser::UnaryExpression_block_1Context *ctx) = 0;

  virtual void enterUnaryExpression_block_2(CParser::UnaryExpression_block_2Context *ctx) = 0;
  virtual void exitUnaryExpression_block_2(CParser::UnaryExpression_block_2Context *ctx) = 0;

  virtual void enterUnaryOperator(CParser::UnaryOperatorContext *ctx) = 0;
  virtual void exitUnaryOperator(CParser::UnaryOperatorContext *ctx) = 0;


};

}  // namespace antlr_CPNF
