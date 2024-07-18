// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file array_structTypeObjectSupport.cxx
 * Source file containing the implementation to register the TypeObject representation of the described types in the IDL file
 *
 * This file was generated by the tool fastddsgen.
 */

#include "array_structTypeObjectSupport.hpp"

#include <mutex>
#include <string>

#include <fastcdr/xcdr/external.hpp>
#include <fastcdr/xcdr/optional.hpp>
#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/log/Log.hpp>
#include <fastdds/dds/xtypes/common.hpp>
#include <fastdds/dds/xtypes/type_representation/ITypeObjectRegistry.hpp>
#include <fastdds/dds/xtypes/type_representation/TypeObject.hpp>
#include <fastdds/dds/xtypes/type_representation/TypeObjectUtils.hpp>

#include "array_struct.hpp"


using namespace eprosima::fastdds::dds::xtypes;

// TypeIdentifier is returned by reference: dependent structures/unions are registered in this same method
void register_NestedArrayElement_type_identifier(
        TypeIdentifierPair& type_ids_NestedArrayElement)
{

    ReturnCode_t return_code_NestedArrayElement {eprosima::fastdds::dds::RETCODE_OK};
    return_code_NestedArrayElement =
        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
        "NestedArrayElement", type_ids_NestedArrayElement);
    if (eprosima::fastdds::dds::RETCODE_OK != return_code_NestedArrayElement)
    {
        StructTypeFlag struct_flags_NestedArrayElement = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::APPENDABLE,
                false, false);
        QualifiedTypeName type_name_NestedArrayElement = "NestedArrayElement";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_NestedArrayElement;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_NestedArrayElement;
        CompleteTypeDetail detail_NestedArrayElement = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_NestedArrayElement, ann_custom_NestedArrayElement, type_name_NestedArrayElement.to_string());
        CompleteStructHeader header_NestedArrayElement;
        header_NestedArrayElement = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_NestedArrayElement);
        CompleteStructMemberSeq member_seq_NestedArrayElement;
        {
            TypeIdentifierPair type_ids_my_string;
            ReturnCode_t return_code_my_string {eprosima::fastdds::dds::RETCODE_OK};
            return_code_my_string =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "anonymous_string_unbounded", type_ids_my_string);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_my_string)
            {
                {
                    SBound bound = 0;
                    StringSTypeDefn string_sdefn = TypeObjectUtils::build_string_s_type_defn(bound);
                    if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                            TypeObjectUtils::build_and_register_s_string_type_identifier(string_sdefn,
                            "anonymous_string_unbounded", type_ids_my_string))
                    {
                        EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "anonymous_string_unbounded already registered in TypeObjectRegistry for a different type.");
                    }
                }
            }
            StructMemberFlag member_flags_my_string = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructFailAction::DISCARD,
                    false, false, false, false);
            MemberId member_id_my_string = 0x00000000;
            bool common_my_string_ec {false};
            CommonStructMember common_my_string {TypeObjectUtils::build_common_struct_member(member_id_my_string, member_flags_my_string, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_my_string, common_my_string_ec))};
            if (!common_my_string_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure my_string member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_my_string = "my_string";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_my_string;
            ann_custom_NestedArrayElement.reset();
            CompleteMemberDetail detail_my_string = TypeObjectUtils::build_complete_member_detail(name_my_string, member_ann_builtin_my_string, ann_custom_NestedArrayElement);
            CompleteStructMember member_my_string = TypeObjectUtils::build_complete_struct_member(common_my_string, detail_my_string);
            TypeObjectUtils::add_complete_struct_member(member_seq_NestedArrayElement, member_my_string);
        }
        CompleteStructType struct_type_NestedArrayElement = TypeObjectUtils::build_complete_struct_type(struct_flags_NestedArrayElement, header_NestedArrayElement, member_seq_NestedArrayElement);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_NestedArrayElement, type_name_NestedArrayElement.to_string(), type_ids_NestedArrayElement))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "NestedArrayElement already registered in TypeObjectRegistry for a different type.");
        }
    }
}
// TypeIdentifier is returned by reference: dependent structures/unions are registered in this same method
void register_ComplexArrayElement_type_identifier(
        TypeIdentifierPair& type_ids_ComplexArrayElement)
{

    ReturnCode_t return_code_ComplexArrayElement {eprosima::fastdds::dds::RETCODE_OK};
    return_code_ComplexArrayElement =
        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
        "ComplexArrayElement", type_ids_ComplexArrayElement);
    if (eprosima::fastdds::dds::RETCODE_OK != return_code_ComplexArrayElement)
    {
        StructTypeFlag struct_flags_ComplexArrayElement = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::APPENDABLE,
                false, false);
        QualifiedTypeName type_name_ComplexArrayElement = "ComplexArrayElement";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_ComplexArrayElement;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_ComplexArrayElement;
        CompleteTypeDetail detail_ComplexArrayElement = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_ComplexArrayElement, ann_custom_ComplexArrayElement, type_name_ComplexArrayElement.to_string());
        CompleteStructHeader header_ComplexArrayElement;
        header_ComplexArrayElement = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_ComplexArrayElement);
        CompleteStructMemberSeq member_seq_ComplexArrayElement;
        {
            TypeIdentifierPair type_ids_my_number;
            ReturnCode_t return_code_my_number {eprosima::fastdds::dds::RETCODE_OK};
            return_code_my_number =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_int32_t", type_ids_my_number);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_my_number)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "my_number Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                return;
            }
            StructMemberFlag member_flags_my_number = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructFailAction::DISCARD,
                    false, false, false, false);
            MemberId member_id_my_number = 0x00000000;
            bool common_my_number_ec {false};
            CommonStructMember common_my_number {TypeObjectUtils::build_common_struct_member(member_id_my_number, member_flags_my_number, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_my_number, common_my_number_ec))};
            if (!common_my_number_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure my_number member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_my_number = "my_number";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_my_number;
            ann_custom_ComplexArrayElement.reset();
            CompleteMemberDetail detail_my_number = TypeObjectUtils::build_complete_member_detail(name_my_number, member_ann_builtin_my_number, ann_custom_ComplexArrayElement);
            CompleteStructMember member_my_number = TypeObjectUtils::build_complete_struct_member(common_my_number, detail_my_number);
            TypeObjectUtils::add_complete_struct_member(member_seq_ComplexArrayElement, member_my_number);
        }
        {
            TypeIdentifierPair type_ids_my_boolean;
            ReturnCode_t return_code_my_boolean {eprosima::fastdds::dds::RETCODE_OK};
            return_code_my_boolean =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_bool", type_ids_my_boolean);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_my_boolean)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "my_boolean Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                return;
            }
            StructMemberFlag member_flags_my_boolean = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructFailAction::DISCARD,
                    false, false, false, false);
            MemberId member_id_my_boolean = 0x00000001;
            bool common_my_boolean_ec {false};
            CommonStructMember common_my_boolean {TypeObjectUtils::build_common_struct_member(member_id_my_boolean, member_flags_my_boolean, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_my_boolean, common_my_boolean_ec))};
            if (!common_my_boolean_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure my_boolean member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_my_boolean = "my_boolean";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_my_boolean;
            ann_custom_ComplexArrayElement.reset();
            CompleteMemberDetail detail_my_boolean = TypeObjectUtils::build_complete_member_detail(name_my_boolean, member_ann_builtin_my_boolean, ann_custom_ComplexArrayElement);
            CompleteStructMember member_my_boolean = TypeObjectUtils::build_complete_struct_member(common_my_boolean, detail_my_boolean);
            TypeObjectUtils::add_complete_struct_member(member_seq_ComplexArrayElement, member_my_boolean);
        }
        {
            TypeIdentifierPair type_ids_my_nested_element;
            ReturnCode_t return_code_my_nested_element {eprosima::fastdds::dds::RETCODE_OK};
            return_code_my_nested_element =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "NestedArrayElement", type_ids_my_nested_element);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_my_nested_element)
            {
            ::register_NestedArrayElement_type_identifier(type_ids_my_nested_element);
            }
            StructMemberFlag member_flags_my_nested_element = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructFailAction::DISCARD,
                    false, false, false, false);
            MemberId member_id_my_nested_element = 0x00000002;
            bool common_my_nested_element_ec {false};
            CommonStructMember common_my_nested_element {TypeObjectUtils::build_common_struct_member(member_id_my_nested_element, member_flags_my_nested_element, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_my_nested_element, common_my_nested_element_ec))};
            if (!common_my_nested_element_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure my_nested_element member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_my_nested_element = "my_nested_element";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_my_nested_element;
            ann_custom_ComplexArrayElement.reset();
            CompleteMemberDetail detail_my_nested_element = TypeObjectUtils::build_complete_member_detail(name_my_nested_element, member_ann_builtin_my_nested_element, ann_custom_ComplexArrayElement);
            CompleteStructMember member_my_nested_element = TypeObjectUtils::build_complete_struct_member(common_my_nested_element, detail_my_nested_element);
            TypeObjectUtils::add_complete_struct_member(member_seq_ComplexArrayElement, member_my_nested_element);
        }
        CompleteStructType struct_type_ComplexArrayElement = TypeObjectUtils::build_complete_struct_type(struct_flags_ComplexArrayElement, header_ComplexArrayElement, member_seq_ComplexArrayElement);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_ComplexArrayElement, type_name_ComplexArrayElement.to_string(), type_ids_ComplexArrayElement))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "ComplexArrayElement already registered in TypeObjectRegistry for a different type.");
        }
    }
}
// TypeIdentifier is returned by reference: dependent structures/unions are registered in this same method
void register_ArrayStruct_type_identifier(
        TypeIdentifierPair& type_ids_ArrayStruct)
{

    ReturnCode_t return_code_ArrayStruct {eprosima::fastdds::dds::RETCODE_OK};
    return_code_ArrayStruct =
        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
        "ArrayStruct", type_ids_ArrayStruct);
    if (eprosima::fastdds::dds::RETCODE_OK != return_code_ArrayStruct)
    {
        StructTypeFlag struct_flags_ArrayStruct = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::APPENDABLE,
                false, false);
        QualifiedTypeName type_name_ArrayStruct = "ArrayStruct";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_ArrayStruct;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_ArrayStruct;
        CompleteTypeDetail detail_ArrayStruct = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_ArrayStruct, ann_custom_ArrayStruct, type_name_ArrayStruct.to_string());
        CompleteStructHeader header_ArrayStruct;
        header_ArrayStruct = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_ArrayStruct);
        CompleteStructMemberSeq member_seq_ArrayStruct;
        {
            TypeIdentifierPair type_ids_my_basic_array;
            ReturnCode_t return_code_my_basic_array {eprosima::fastdds::dds::RETCODE_OK};
            return_code_my_basic_array =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "anonymous_array_int32_t_10", type_ids_my_basic_array);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_my_basic_array)
            {
                return_code_my_basic_array =
                    eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                    "_int32_t", type_ids_my_basic_array);

                if (eprosima::fastdds::dds::RETCODE_OK != return_code_my_basic_array)
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "Array element TypeIdentifier unknown to TypeObjectRegistry.");
                    return;
                }
                bool element_identifier_anonymous_array_int32_t_10_ec {false};
                TypeIdentifier* element_identifier_anonymous_array_int32_t_10 {new TypeIdentifier(TypeObjectUtils::retrieve_complete_type_identifier(type_ids_my_basic_array, element_identifier_anonymous_array_int32_t_10_ec))};
                if (!element_identifier_anonymous_array_int32_t_10_ec)
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Array element TypeIdentifier inconsistent.");
                    return;
                }
                EquivalenceKind equiv_kind_anonymous_array_int32_t_10 = EK_COMPLETE;
                if (TK_NONE == type_ids_my_basic_array.type_identifier2()._d())
                {
                    equiv_kind_anonymous_array_int32_t_10 = EK_BOTH;
                }
                CollectionElementFlag element_flags_anonymous_array_int32_t_10 = 0;
                PlainCollectionHeader header_anonymous_array_int32_t_10 = TypeObjectUtils::build_plain_collection_header(equiv_kind_anonymous_array_int32_t_10, element_flags_anonymous_array_int32_t_10);
                {
                    SBoundSeq array_bound_seq;
                        TypeObjectUtils::add_array_dimension(array_bound_seq, static_cast<SBound>(10));

                    PlainArraySElemDefn array_sdefn = TypeObjectUtils::build_plain_array_s_elem_defn(header_anonymous_array_int32_t_10, array_bound_seq,
                                eprosima::fastcdr::external<TypeIdentifier>(element_identifier_anonymous_array_int32_t_10));
                    if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                            TypeObjectUtils::build_and_register_s_array_type_identifier(array_sdefn, "anonymous_array_int32_t_10", type_ids_my_basic_array))
                    {
                        EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "anonymous_array_int32_t_10 already registered in TypeObjectRegistry for a different type.");
                    }
                }
            }
            StructMemberFlag member_flags_my_basic_array = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructFailAction::DISCARD,
                    false, false, false, false);
            MemberId member_id_my_basic_array = 0x00000000;
            bool common_my_basic_array_ec {false};
            CommonStructMember common_my_basic_array {TypeObjectUtils::build_common_struct_member(member_id_my_basic_array, member_flags_my_basic_array, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_my_basic_array, common_my_basic_array_ec))};
            if (!common_my_basic_array_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure my_basic_array member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_my_basic_array = "my_basic_array";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_my_basic_array;
            ann_custom_ArrayStruct.reset();
            CompleteMemberDetail detail_my_basic_array = TypeObjectUtils::build_complete_member_detail(name_my_basic_array, member_ann_builtin_my_basic_array, ann_custom_ArrayStruct);
            CompleteStructMember member_my_basic_array = TypeObjectUtils::build_complete_struct_member(common_my_basic_array, detail_my_basic_array);
            TypeObjectUtils::add_complete_struct_member(member_seq_ArrayStruct, member_my_basic_array);
        }
        {
            TypeIdentifierPair type_ids_my_multidimensional_array;
            ReturnCode_t return_code_my_multidimensional_array {eprosima::fastdds::dds::RETCODE_OK};
            return_code_my_multidimensional_array =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "anonymous_array_int32_t_10_10_10", type_ids_my_multidimensional_array);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_my_multidimensional_array)
            {
                return_code_my_multidimensional_array =
                    eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                    "_int32_t", type_ids_my_multidimensional_array);

                if (eprosima::fastdds::dds::RETCODE_OK != return_code_my_multidimensional_array)
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "Array element TypeIdentifier unknown to TypeObjectRegistry.");
                    return;
                }
                bool element_identifier_anonymous_array_int32_t_10_10_10_ec {false};
                TypeIdentifier* element_identifier_anonymous_array_int32_t_10_10_10 {new TypeIdentifier(TypeObjectUtils::retrieve_complete_type_identifier(type_ids_my_multidimensional_array, element_identifier_anonymous_array_int32_t_10_10_10_ec))};
                if (!element_identifier_anonymous_array_int32_t_10_10_10_ec)
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Array element TypeIdentifier inconsistent.");
                    return;
                }
                EquivalenceKind equiv_kind_anonymous_array_int32_t_10_10_10 = EK_COMPLETE;
                if (TK_NONE == type_ids_my_multidimensional_array.type_identifier2()._d())
                {
                    equiv_kind_anonymous_array_int32_t_10_10_10 = EK_BOTH;
                }
                CollectionElementFlag element_flags_anonymous_array_int32_t_10_10_10 = 0;
                PlainCollectionHeader header_anonymous_array_int32_t_10_10_10 = TypeObjectUtils::build_plain_collection_header(equiv_kind_anonymous_array_int32_t_10_10_10, element_flags_anonymous_array_int32_t_10_10_10);
                {
                    SBoundSeq array_bound_seq;
                        TypeObjectUtils::add_array_dimension(array_bound_seq, static_cast<SBound>(10));

                        TypeObjectUtils::add_array_dimension(array_bound_seq, static_cast<SBound>(10));

                        TypeObjectUtils::add_array_dimension(array_bound_seq, static_cast<SBound>(10));

                    PlainArraySElemDefn array_sdefn = TypeObjectUtils::build_plain_array_s_elem_defn(header_anonymous_array_int32_t_10_10_10, array_bound_seq,
                                eprosima::fastcdr::external<TypeIdentifier>(element_identifier_anonymous_array_int32_t_10_10_10));
                    if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                            TypeObjectUtils::build_and_register_s_array_type_identifier(array_sdefn, "anonymous_array_int32_t_10_10_10", type_ids_my_multidimensional_array))
                    {
                        EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "anonymous_array_int32_t_10_10_10 already registered in TypeObjectRegistry for a different type.");
                    }
                }
            }
            StructMemberFlag member_flags_my_multidimensional_array = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructFailAction::DISCARD,
                    false, false, false, false);
            MemberId member_id_my_multidimensional_array = 0x00000001;
            bool common_my_multidimensional_array_ec {false};
            CommonStructMember common_my_multidimensional_array {TypeObjectUtils::build_common_struct_member(member_id_my_multidimensional_array, member_flags_my_multidimensional_array, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_my_multidimensional_array, common_my_multidimensional_array_ec))};
            if (!common_my_multidimensional_array_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure my_multidimensional_array member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_my_multidimensional_array = "my_multidimensional_array";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_my_multidimensional_array;
            ann_custom_ArrayStruct.reset();
            CompleteMemberDetail detail_my_multidimensional_array = TypeObjectUtils::build_complete_member_detail(name_my_multidimensional_array, member_ann_builtin_my_multidimensional_array, ann_custom_ArrayStruct);
            CompleteStructMember member_my_multidimensional_array = TypeObjectUtils::build_complete_struct_member(common_my_multidimensional_array, detail_my_multidimensional_array);
            TypeObjectUtils::add_complete_struct_member(member_seq_ArrayStruct, member_my_multidimensional_array);
        }
        {
            TypeIdentifierPair type_ids_my_complex_array;
            ReturnCode_t return_code_my_complex_array {eprosima::fastdds::dds::RETCODE_OK};
            return_code_my_complex_array =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "anonymous_array_ComplexArrayElement_10", type_ids_my_complex_array);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_my_complex_array)
            {
                return_code_my_complex_array =
                    eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                    "ComplexArrayElement", type_ids_my_complex_array);

                if (eprosima::fastdds::dds::RETCODE_OK != return_code_my_complex_array)
                {
                ::register_ComplexArrayElement_type_identifier(type_ids_my_complex_array);
                }
                bool element_identifier_anonymous_array_ComplexArrayElement_10_ec {false};
                TypeIdentifier* element_identifier_anonymous_array_ComplexArrayElement_10 {new TypeIdentifier(TypeObjectUtils::retrieve_complete_type_identifier(type_ids_my_complex_array, element_identifier_anonymous_array_ComplexArrayElement_10_ec))};
                if (!element_identifier_anonymous_array_ComplexArrayElement_10_ec)
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Array element TypeIdentifier inconsistent.");
                    return;
                }
                EquivalenceKind equiv_kind_anonymous_array_ComplexArrayElement_10 = EK_COMPLETE;
                if (TK_NONE == type_ids_my_complex_array.type_identifier2()._d())
                {
                    equiv_kind_anonymous_array_ComplexArrayElement_10 = EK_BOTH;
                }
                CollectionElementFlag element_flags_anonymous_array_ComplexArrayElement_10 = 0;
                PlainCollectionHeader header_anonymous_array_ComplexArrayElement_10 = TypeObjectUtils::build_plain_collection_header(equiv_kind_anonymous_array_ComplexArrayElement_10, element_flags_anonymous_array_ComplexArrayElement_10);
                {
                    SBoundSeq array_bound_seq;
                        TypeObjectUtils::add_array_dimension(array_bound_seq, static_cast<SBound>(10));

                    PlainArraySElemDefn array_sdefn = TypeObjectUtils::build_plain_array_s_elem_defn(header_anonymous_array_ComplexArrayElement_10, array_bound_seq,
                                eprosima::fastcdr::external<TypeIdentifier>(element_identifier_anonymous_array_ComplexArrayElement_10));
                    if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                            TypeObjectUtils::build_and_register_s_array_type_identifier(array_sdefn, "anonymous_array_ComplexArrayElement_10", type_ids_my_complex_array))
                    {
                        EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "anonymous_array_ComplexArrayElement_10 already registered in TypeObjectRegistry for a different type.");
                    }
                }
            }
            StructMemberFlag member_flags_my_complex_array = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructFailAction::DISCARD,
                    false, false, false, false);
            MemberId member_id_my_complex_array = 0x00000002;
            bool common_my_complex_array_ec {false};
            CommonStructMember common_my_complex_array {TypeObjectUtils::build_common_struct_member(member_id_my_complex_array, member_flags_my_complex_array, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_my_complex_array, common_my_complex_array_ec))};
            if (!common_my_complex_array_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure my_complex_array member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_my_complex_array = "my_complex_array";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_my_complex_array;
            ann_custom_ArrayStruct.reset();
            CompleteMemberDetail detail_my_complex_array = TypeObjectUtils::build_complete_member_detail(name_my_complex_array, member_ann_builtin_my_complex_array, ann_custom_ArrayStruct);
            CompleteStructMember member_my_complex_array = TypeObjectUtils::build_complete_struct_member(common_my_complex_array, detail_my_complex_array);
            TypeObjectUtils::add_complete_struct_member(member_seq_ArrayStruct, member_my_complex_array);
        }
        {
            TypeIdentifierPair type_ids_my_multidimensional_complex_array;
            ReturnCode_t return_code_my_multidimensional_complex_array {eprosima::fastdds::dds::RETCODE_OK};
            return_code_my_multidimensional_complex_array =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "anonymous_array_ComplexArrayElement_10_10", type_ids_my_multidimensional_complex_array);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_my_multidimensional_complex_array)
            {
                return_code_my_multidimensional_complex_array =
                    eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                    "ComplexArrayElement", type_ids_my_multidimensional_complex_array);

                if (eprosima::fastdds::dds::RETCODE_OK != return_code_my_multidimensional_complex_array)
                {
                ::register_ComplexArrayElement_type_identifier(type_ids_my_multidimensional_complex_array);
                }
                bool element_identifier_anonymous_array_ComplexArrayElement_10_10_ec {false};
                TypeIdentifier* element_identifier_anonymous_array_ComplexArrayElement_10_10 {new TypeIdentifier(TypeObjectUtils::retrieve_complete_type_identifier(type_ids_my_multidimensional_complex_array, element_identifier_anonymous_array_ComplexArrayElement_10_10_ec))};
                if (!element_identifier_anonymous_array_ComplexArrayElement_10_10_ec)
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Array element TypeIdentifier inconsistent.");
                    return;
                }
                EquivalenceKind equiv_kind_anonymous_array_ComplexArrayElement_10_10 = EK_COMPLETE;
                if (TK_NONE == type_ids_my_multidimensional_complex_array.type_identifier2()._d())
                {
                    equiv_kind_anonymous_array_ComplexArrayElement_10_10 = EK_BOTH;
                }
                CollectionElementFlag element_flags_anonymous_array_ComplexArrayElement_10_10 = 0;
                PlainCollectionHeader header_anonymous_array_ComplexArrayElement_10_10 = TypeObjectUtils::build_plain_collection_header(equiv_kind_anonymous_array_ComplexArrayElement_10_10, element_flags_anonymous_array_ComplexArrayElement_10_10);
                {
                    SBoundSeq array_bound_seq;
                        TypeObjectUtils::add_array_dimension(array_bound_seq, static_cast<SBound>(10));

                        TypeObjectUtils::add_array_dimension(array_bound_seq, static_cast<SBound>(10));

                    PlainArraySElemDefn array_sdefn = TypeObjectUtils::build_plain_array_s_elem_defn(header_anonymous_array_ComplexArrayElement_10_10, array_bound_seq,
                                eprosima::fastcdr::external<TypeIdentifier>(element_identifier_anonymous_array_ComplexArrayElement_10_10));
                    if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                            TypeObjectUtils::build_and_register_s_array_type_identifier(array_sdefn, "anonymous_array_ComplexArrayElement_10_10", type_ids_my_multidimensional_complex_array))
                    {
                        EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "anonymous_array_ComplexArrayElement_10_10 already registered in TypeObjectRegistry for a different type.");
                    }
                }
            }
            StructMemberFlag member_flags_my_multidimensional_complex_array = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructFailAction::DISCARD,
                    false, false, false, false);
            MemberId member_id_my_multidimensional_complex_array = 0x00000003;
            bool common_my_multidimensional_complex_array_ec {false};
            CommonStructMember common_my_multidimensional_complex_array {TypeObjectUtils::build_common_struct_member(member_id_my_multidimensional_complex_array, member_flags_my_multidimensional_complex_array, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_my_multidimensional_complex_array, common_my_multidimensional_complex_array_ec))};
            if (!common_my_multidimensional_complex_array_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure my_multidimensional_complex_array member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_my_multidimensional_complex_array = "my_multidimensional_complex_array";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_my_multidimensional_complex_array;
            ann_custom_ArrayStruct.reset();
            CompleteMemberDetail detail_my_multidimensional_complex_array = TypeObjectUtils::build_complete_member_detail(name_my_multidimensional_complex_array, member_ann_builtin_my_multidimensional_complex_array, ann_custom_ArrayStruct);
            CompleteStructMember member_my_multidimensional_complex_array = TypeObjectUtils::build_complete_struct_member(common_my_multidimensional_complex_array, detail_my_multidimensional_complex_array);
            TypeObjectUtils::add_complete_struct_member(member_seq_ArrayStruct, member_my_multidimensional_complex_array);
        }
        CompleteStructType struct_type_ArrayStruct = TypeObjectUtils::build_complete_struct_type(struct_flags_ArrayStruct, header_ArrayStruct, member_seq_ArrayStruct);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_ArrayStruct, type_name_ArrayStruct.to_string(), type_ids_ArrayStruct))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "ArrayStruct already registered in TypeObjectRegistry for a different type.");
        }
    }
}
