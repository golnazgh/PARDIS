
// Generated from C.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "CPNFParser.h"


namespace antlr_CPNF {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by CParser.
 */
class  CVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CParser.
   */
    virtual antlrcpp::Any visitAbstractDeclarator(CParser::AbstractDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveExpression(CParser::AdditiveExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAlignmentSpecifier(CParser::AlignmentSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitArgumentExpressionList_block_1(CParser::ArgumentExpressionList_block_1Context *context) = 0;

    virtual antlrcpp::Any visitAsmName(CParser::AsmNameContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentExpression(CParser::AssignmentExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentOperator(CParser::AssignmentOperatorContext *context) = 0;

    virtual antlrcpp::Any visitAtomicTypeSpecifier(CParser::AtomicTypeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitBlockItem(CParser::BlockItemContext *context) = 0;

    virtual antlrcpp::Any visitCastExpression(CParser::CastExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCompilationUnit(CParser::CompilationUnitContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStatement(CParser::CompoundStatementContext *context) = 0;

    virtual antlrcpp::Any visitConditionalExpression(CParser::ConditionalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitConditionalExpression_block_1(CParser::ConditionalExpression_block_1Context *context) = 0;

    virtual antlrcpp::Any visitDeclaration(CParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationSpecifier(CParser::DeclarationSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationSpecifiers(CParser::DeclarationSpecifiersContext *context) = 0;

    virtual antlrcpp::Any visitDeclarator(CParser::DeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitDesignation(CParser::DesignationContext *context) = 0;

    virtual antlrcpp::Any visitDesignator(CParser::DesignatorContext *context) = 0;

    virtual antlrcpp::Any visitDesignator_block_1(CParser::Designator_block_1Context *context) = 0;

    virtual antlrcpp::Any visitDirectAbstractDeclarator(CParser::DirectAbstractDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitDirectDeclarator(CParser::DirectDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitEnumSpecifier(CParser::EnumSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitEnumerationConstant(CParser::EnumerationConstantContext *context) = 0;

    virtual antlrcpp::Any visitEnumerator(CParser::EnumeratorContext *context) = 0;

    virtual antlrcpp::Any visitEnumeratorList_block_1(CParser::EnumeratorList_block_1Context *context) = 0;

    virtual antlrcpp::Any visitEqualityExpression(CParser::EqualityExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExpressionStatement(CParser::ExpressionStatementContext *context) = 0;

    virtual antlrcpp::Any visitExternalDeclaration(CParser::ExternalDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDefinition(CParser::FunctionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionSpecifier(CParser::FunctionSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitFunctionSpecifier_block_1(CParser::FunctionSpecifier_block_1Context *context) = 0;

    virtual antlrcpp::Any visitGccAttribute(CParser::GccAttributeContext *context) = 0;

    virtual antlrcpp::Any visitGccAttributeList_block_1(CParser::GccAttributeList_block_1Context *context) = 0;

    virtual antlrcpp::Any visitGccAttributeSpecifier(CParser::GccAttributeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitGccAttribute_block_1(CParser::GccAttribute_block_1Context *context) = 0;

    virtual antlrcpp::Any visitGccDeclaratorExtension(CParser::GccDeclaratorExtensionContext *context) = 0;

    virtual antlrcpp::Any visitGenericAssocList_block_1(CParser::GenericAssocList_block_1Context *context) = 0;

    virtual antlrcpp::Any visitGenericAssociation(CParser::GenericAssociationContext *context) = 0;

    virtual antlrcpp::Any visitGenericSelection(CParser::GenericSelectionContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierList_block_1(CParser::IdentifierList_block_1Context *context) = 0;

    virtual antlrcpp::Any visitInitDeclarator(CParser::InitDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitInitDeclaratorList_block_1(CParser::InitDeclaratorList_block_1Context *context) = 0;

    virtual antlrcpp::Any visitInitializer(CParser::InitializerContext *context) = 0;

    virtual antlrcpp::Any visitInitializerList(CParser::InitializerListContext *context) = 0;

    virtual antlrcpp::Any visitInitializerList_block_1(CParser::InitializerList_block_1Context *context) = 0;

    virtual antlrcpp::Any visitInitializer_block_1(CParser::Initializer_block_1Context *context) = 0;

    virtual antlrcpp::Any visitJumpStatement(CParser::JumpStatementContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeExpression(CParser::MultiplicativeExpressionContext *context) = 0;

    virtual antlrcpp::Any visitParameterDeclaration(CParser::ParameterDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitParameterList_block_1(CParser::ParameterList_block_1Context *context) = 0;

    virtual antlrcpp::Any visitParameterTypeList(CParser::ParameterTypeListContext *context) = 0;

    virtual antlrcpp::Any visitPnf_list_left_0(CParser::Pnf_list_left_0Context *context) = 0;

    virtual antlrcpp::Any visitPnf_list_left_1(CParser::Pnf_list_left_1Context *context) = 0;

    virtual antlrcpp::Any visitPnf_list_left_10(CParser::Pnf_list_left_10Context *context) = 0;

    virtual antlrcpp::Any visitPnf_list_left_11(CParser::Pnf_list_left_11Context *context) = 0;

    virtual antlrcpp::Any visitPnf_list_left_12(CParser::Pnf_list_left_12Context *context) = 0;

    virtual antlrcpp::Any visitPnf_list_left_13(CParser::Pnf_list_left_13Context *context) = 0;

    virtual antlrcpp::Any visitPnf_list_left_14(CParser::Pnf_list_left_14Context *context) = 0;

    virtual antlrcpp::Any visitPnf_list_left_15(CParser::Pnf_list_left_15Context *context) = 0;

    virtual antlrcpp::Any visitPnf_list_left_2(CParser::Pnf_list_left_2Context *context) = 0;

    virtual antlrcpp::Any visitPnf_list_left_3(CParser::Pnf_list_left_3Context *context) = 0;

    virtual antlrcpp::Any visitPnf_list_left_4(CParser::Pnf_list_left_4Context *context) = 0;

    virtual antlrcpp::Any visitPnf_list_left_5(CParser::Pnf_list_left_5Context *context) = 0;

    virtual antlrcpp::Any visitPnf_list_left_6(CParser::Pnf_list_left_6Context *context) = 0;

    virtual antlrcpp::Any visitPnf_list_left_7(CParser::Pnf_list_left_7Context *context) = 0;

    virtual antlrcpp::Any visitPnf_list_left_8(CParser::Pnf_list_left_8Context *context) = 0;

    virtual antlrcpp::Any visitPnf_list_left_9(CParser::Pnf_list_left_9Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_compilationUnit_98(CParser::Pnf_option_compilationUnit_98Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_compoundStatement_87(CParser::Pnf_option_compoundStatement_87Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_conditionalExpression_46(CParser::Pnf_option_conditionalExpression_46Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_conditionalExpression_block_1_34(CParser::Pnf_option_conditionalExpression_block_1_34Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_declaration_14(CParser::Pnf_option_declaration_14Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_designator_83(CParser::Pnf_option_designator_83Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_directAbstractDeclarator_79(CParser::Pnf_option_directAbstractDeclarator_79Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_enumerator_20(CParser::Pnf_option_enumerator_20Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_externalDeclaration_31(CParser::Pnf_option_externalDeclaration_31Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_functionDefinition_93(CParser::Pnf_option_functionDefinition_93Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_functionDefinition_94(CParser::Pnf_option_functionDefinition_94Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_gccAttributeList_22(CParser::Pnf_option_gccAttributeList_22Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_gccAttributeSpecifier_15(CParser::Pnf_option_gccAttributeSpecifier_15Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_gccAttribute_73(CParser::Pnf_option_gccAttribute_73Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_gccAttribute_block_1_36(CParser::Pnf_option_gccAttribute_block_1_36Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_initDeclarator_17(CParser::Pnf_option_initDeclarator_17Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_initializerList_block_1_38(CParser::Pnf_option_initializerList_block_1_38Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_initializer_82(CParser::Pnf_option_initializer_82Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_initializer_block_1_81(CParser::Pnf_option_initializer_block_1_81Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_parameterTypeList_25(CParser::Pnf_option_parameterTypeList_25Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_pnf_part_directDeclarator_21_70(CParser::Pnf_option_pnf_part_directDeclarator_21_70Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_pnf_part_directDeclarator_21_71(CParser::Pnf_option_pnf_part_directDeclarator_21_71Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_pnf_part_directDeclarator_21_72(CParser::Pnf_option_pnf_part_directDeclarator_21_72Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_pointer_26(CParser::Pnf_option_pointer_26Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_postfixExpression_102(CParser::Pnf_option_postfixExpression_102Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_postfixExpression_2(CParser::Pnf_option_postfixExpression_2Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_primaryExpression_41(CParser::Pnf_option_primaryExpression_41Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_selectionStatement_88(CParser::Pnf_option_selectionStatement_88Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_specifierQualifierList_65(CParser::Pnf_option_specifierQualifierList_65Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_statement_89(CParser::Pnf_option_statement_89Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_statement_90(CParser::Pnf_option_statement_90Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_statement_91(CParser::Pnf_option_statement_91Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_statement_block_6_39(CParser::Pnf_option_statement_block_6_39Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_structDeclaration_18(CParser::Pnf_option_structDeclaration_18Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_structDeclarator_66(CParser::Pnf_option_structDeclarator_66Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_structOrUnionSpecifier_61(CParser::Pnf_option_structOrUnionSpecifier_61Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_structOrUnionSpecifier_62(CParser::Pnf_option_structOrUnionSpecifier_62Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_typeName_42(CParser::Pnf_option_typeName_42Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_typeName_43(CParser::Pnf_option_typeName_43Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_additiveExpression_4(CParser::Pnf_part_additiveExpression_4Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_andExpression_8(CParser::Pnf_part_andExpression_8Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_assignmentExpression_99(CParser::Pnf_part_assignmentExpression_99Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_castExpression_103(CParser::Pnf_part_castExpression_103Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_directAbstractDeclarator_27(CParser::Pnf_part_directAbstractDeclarator_27Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_directDeclarator_21(CParser::Pnf_part_directDeclarator_21Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_enumerator_19(CParser::Pnf_part_enumerator_19Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_equalityExpression_7(CParser::Pnf_part_equalityExpression_7Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_exclusiveOrExpression_9(CParser::Pnf_part_exclusiveOrExpression_9Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_expression_13(CParser::Pnf_part_expression_13Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_externalDeclaration_30(CParser::Pnf_part_externalDeclaration_30Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_inclusiveOrExpression_10(CParser::Pnf_part_inclusiveOrExpression_10Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_initDeclarator_16(CParser::Pnf_part_initDeclarator_16Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_logicalAndExpression_11(CParser::Pnf_part_logicalAndExpression_11Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_logicalOrExpression_12(CParser::Pnf_part_logicalOrExpression_12Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_multiplicativeExpression_3(CParser::Pnf_part_multiplicativeExpression_3Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_parameterTypeList_24(CParser::Pnf_part_parameterTypeList_24Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_postfixExpression_0(CParser::Pnf_part_postfixExpression_0Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_postfixExpression_1(CParser::Pnf_part_postfixExpression_1Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_postfixExpression_101(CParser::Pnf_part_postfixExpression_101Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_relationalExpression_6(CParser::Pnf_part_relationalExpression_6Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_shiftExpression_5(CParser::Pnf_part_shiftExpression_5Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_statement_100(CParser::Pnf_part_statement_100Context *context) = 0;

    virtual antlrcpp::Any visitPnf_part_unaryExpression_104(CParser::Pnf_part_unaryExpression_104Context *context) = 0;

    virtual antlrcpp::Any visitPnf_plus_blockItemList_29(CParser::Pnf_plus_blockItemList_29Context *context) = 0;

    virtual antlrcpp::Any visitPnf_plus_declarationList_33(CParser::Pnf_plus_declarationList_33Context *context) = 0;

    virtual antlrcpp::Any visitPnf_plus_declarationSpecifiers2_76(CParser::Pnf_plus_declarationSpecifiers2_76Context *context) = 0;

    virtual antlrcpp::Any visitPnf_plus_designatorList_28(CParser::Pnf_plus_designatorList_28Context *context) = 0;

    virtual antlrcpp::Any visitPnf_plus_primaryExpression_40(CParser::Pnf_plus_primaryExpression_40Context *context) = 0;

    virtual antlrcpp::Any visitPnf_plus_translationUnit_32(CParser::Pnf_plus_translationUnit_32Context *context) = 0;

    virtual antlrcpp::Any visitPnf_plus_typeQualifierList_23(CParser::Pnf_plus_typeQualifierList_23Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_additiveExpression_49(CParser::Pnf_star_additiveExpression_49Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_andExpression_53(CParser::Pnf_star_andExpression_53Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_argumentExpressionList_47(CParser::Pnf_star_argumentExpressionList_47Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_assignmentExpression_105(CParser::Pnf_star_assignmentExpression_105Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_castExpression_107(CParser::Pnf_star_castExpression_107Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_declarationSpecifiers_59(CParser::Pnf_star_declarationSpecifiers_59Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_declarationSpecifiers_60(CParser::Pnf_star_declarationSpecifiers_60Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_declarator_63(CParser::Pnf_star_declarator_63Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_directAbstractDeclarator_78(CParser::Pnf_star_directAbstractDeclarator_78Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_directDeclarator_69(CParser::Pnf_star_directDeclarator_69Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_enumeratorList_68(CParser::Pnf_star_enumeratorList_68Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_equalityExpression_52(CParser::Pnf_star_equalityExpression_52Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_exclusiveOrExpression_54(CParser::Pnf_star_exclusiveOrExpression_54Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_expression_58(CParser::Pnf_star_expression_58Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_gccAttributeList_74(CParser::Pnf_star_gccAttributeList_74Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_genericAssocList_44(CParser::Pnf_star_genericAssocList_44Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_identifierList_37(CParser::Pnf_star_identifierList_37Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_inclusiveOrExpression_55(CParser::Pnf_star_inclusiveOrExpression_55Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_initDeclaratorList_64(CParser::Pnf_star_initDeclaratorList_64Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_initializerList_80(CParser::Pnf_star_initializerList_80Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_logicalAndExpression_56(CParser::Pnf_star_logicalAndExpression_56Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_logicalOrExpression_57(CParser::Pnf_star_logicalOrExpression_57Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_multiplicativeExpression_48(CParser::Pnf_star_multiplicativeExpression_48Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_parameterList_77(CParser::Pnf_star_parameterList_77Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_postfixExpression_45(CParser::Pnf_star_postfixExpression_45Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_relationalExpression_51(CParser::Pnf_star_relationalExpression_51Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_shiftExpression_50(CParser::Pnf_star_shiftExpression_50Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_statement_106(CParser::Pnf_star_statement_106Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_statement_92(CParser::Pnf_star_statement_92Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_statement_block_3_85(CParser::Pnf_star_statement_block_3_85Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_statement_block_5_86(CParser::Pnf_star_statement_block_5_86Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_structDeclarationList_35(CParser::Pnf_star_structDeclarationList_35Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_structDeclaratorList_67(CParser::Pnf_star_structDeclaratorList_67Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_unaryExpression_108(CParser::Pnf_star_unaryExpression_108Context *context) = 0;

    virtual antlrcpp::Any visitPnf_start(CParser::Pnf_startContext *context) = 0;

    virtual antlrcpp::Any visitPointer(CParser::PointerContext *context) = 0;

    virtual antlrcpp::Any visitPostfixExpression(CParser::PostfixExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExpression(CParser::PrimaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitRelationalExpression(CParser::RelationalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSelectionStatement_block_1(CParser::SelectionStatement_block_1Context *context) = 0;

    virtual antlrcpp::Any visitShiftExpression(CParser::ShiftExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSpecifierQualifierList(CParser::SpecifierQualifierListContext *context) = 0;

    virtual antlrcpp::Any visitStatement(CParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitStatement_block_1(CParser::Statement_block_1Context *context) = 0;

    virtual antlrcpp::Any visitStatement_block_2(CParser::Statement_block_2Context *context) = 0;

    virtual antlrcpp::Any visitStatement_block_4(CParser::Statement_block_4Context *context) = 0;

    virtual antlrcpp::Any visitStatement_block_6(CParser::Statement_block_6Context *context) = 0;

    virtual antlrcpp::Any visitStaticAssertDeclaration(CParser::StaticAssertDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStorageClassSpecifier(CParser::StorageClassSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitStructDeclaration(CParser::StructDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStructDeclarator(CParser::StructDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitStructDeclaratorList_block_1(CParser::StructDeclaratorList_block_1Context *context) = 0;

    virtual antlrcpp::Any visitStructOrUnion(CParser::StructOrUnionContext *context) = 0;

    virtual antlrcpp::Any visitStructOrUnionSpecifier(CParser::StructOrUnionSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeName(CParser::TypeNameContext *context) = 0;

    virtual antlrcpp::Any visitTypeQualifier(CParser::TypeQualifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeSpecifier(CParser::TypeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeSpecifier_block_1(CParser::TypeSpecifier_block_1Context *context) = 0;

    virtual antlrcpp::Any visitTypeSpecifier_block_2(CParser::TypeSpecifier_block_2Context *context) = 0;

    virtual antlrcpp::Any visitTypedefName(CParser::TypedefNameContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression(CParser::UnaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression_block_1(CParser::UnaryExpression_block_1Context *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression_block_2(CParser::UnaryExpression_block_2Context *context) = 0;

    virtual antlrcpp::Any visitUnaryOperator(CParser::UnaryOperatorContext *context) = 0;


};

}  // namespace antlr_CPNF
