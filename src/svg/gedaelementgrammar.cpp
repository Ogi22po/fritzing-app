// This file was generated by qlalr - DO NOT EDIT!
#include "gedaelementgrammar_p.h"

const char *const GedaElementGrammar::spell [] = {
	"end of file", 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0,
#ifndef QLALR_NO_GEDAELEMENTGRAMMAR_DEBUG_INFO
	"geda_element", "element_command", "element_command_sequence", "sub_element_sequence", "sub_element_sequence_paren",
	"sub_element_sequence_bracket", "sub_element_groups", "element_command_sequence_paren", "element_command_sequence_bracket", "element_arguments", "SFlags", "description", "pcb_name", "value", "mark_x",
	"mark_y", "text_x", "text_y", "text_direction", "text_scale", "sub_element_group", "pin_element", "pad_element", "element_arc_element", "element_line_element",
	"mark_element", "attribute_element", "mark_command", "mark_sequence", "mark_paren_sequence", "mark_bracket_sequence", "mark_arguments", "x", "y", "pin_command",
	"pin_sequence", "pin_paren_sequence", "pin_bracket_sequence", "pin_arguments", "pin_arguments_1", "pin_arguments_2", "pin_arguments_3", "pin_arguments_4", "Thickness", "Clearance",
	"Mask", "DrillHole", "Name", "pin_number", "NFlags", "pad_command", "pad_sequence", "pad_paren_sequence", "pad_bracket_sequence", "pad_arguments",
	"pad_arguments_1", "pad_arguments_2", "pad_arguments_3", "x1", "y1", "x2", "y2", "pad_number", "element_line_command", "element_line_sequence",
	"element_line_paren_sequence", "element_line_bracket_sequence", "element_line_arguments", "element_arc_command", "element_arc_sequence", "element_arc_paren_sequence", "element_arc_bracket_sequence", "element_arc_arguments", "Width", "Height",
	"StartAngle", "Delta", "attribute_command", "attribute_sequence", "attribute_paren_sequence", "attribute_arguments", "string_value", "number_value", "hex_number_value", "$accept"
#endif // QLALR_NO_GEDAELEMENTGRAMMAR_DEBUG_INFO
};

const int GedaElementGrammar::lhs [] = {
	15, 18, 18, 19, 20, 17, 17, 22, 23, 24,
	21, 21, 35, 35, 35, 35, 35, 35, 40, 43,
	43, 44, 45, 46, 36, 50, 50, 51, 52, 53,
	53, 53, 53, 54, 55, 56, 57, 37, 66, 66,
	67, 68, 69, 69, 69, 70, 71, 72, 39, 79,
	79, 80, 81, 82, 38, 84, 84, 85, 86, 87,
	41, 93, 94, 95, 77, 47, 73, 75, 48, 74,
	76, 58, 59, 60, 61, 62, 63, 88, 89, 90,
	91, 25, 25, 64, 26, 27, 28, 29, 30, 31,
	32, 33, 34, 97, 98, 96, 16, 49, 65, 42,
	78, 83, 92, 99
};

const int GedaElementGrammar:: rhs[] = {
	3, 1, 1, 3, 3, 1, 1, 3, 3, 11,
	1, 2, 1, 1, 1, 1, 1, 1, 2, 1,
	1, 3, 3, 2, 2, 1, 1, 3, 3, 1,
	1, 1, 1, 9, 7, 6, 5, 2, 1, 1,
	3, 3, 1, 1, 1, 10, 8, 7, 2, 1,
	1, 3, 3, 5, 2, 1, 1, 3, 3, 7,
	2, 1, 3, 2, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 2
};


#ifndef QLALR_NO_GEDAELEMENTGRAMMAR_DEBUG_INFO
const int GedaElementGrammar::rule_info [] = {
	15, 16, 17, 18
	, 18, 19
	, 18, 20
	, 19, 8, 21, 9
	, 20, 10, 21, 11
	, 17, 22
	, 17, 23
	, 22, 8, 24, 9
	, 23, 10, 24, 11
	, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 25
	, 21, 35
	, 21, 35, 21
	, 35, 36
	, 35, 37
	, 35, 38
	, 35, 39
	, 35, 40
	, 35, 41
	, 40, 42, 43
	, 43, 44
	, 43, 45
	, 44, 8, 46, 9
	, 45, 10, 46, 11
	, 46, 47, 48
	, 36, 49, 50
	, 50, 51
	, 50, 52
	, 51, 8, 53, 9
	, 52, 10, 53, 11
	, 53, 54
	, 53, 55
	, 53, 56
	, 53, 57
	, 54, 47, 48, 58, 59, 60, 61, 62, 63, 25
	, 55, 47, 48, 58, 61, 62, 63, 64
	, 56, 47, 48, 58, 61, 62, 64
	, 57, 47, 48, 58, 62, 64
	, 37, 65, 66
	, 66, 67
	, 66, 68
	, 67, 8, 69, 9
	, 68, 10, 69, 11
	, 69, 70
	, 69, 71
	, 69, 72
	, 70, 73, 74, 75, 76, 58, 59, 60, 62, 77, 25
	, 71, 73, 74, 75, 76, 58, 62, 77, 64
	, 72, 73, 74, 75, 76, 58, 62, 64
	, 39, 78, 79
	, 79, 80
	, 79, 81
	, 80, 8, 82, 9
	, 81, 10, 82, 11
	, 82, 73, 74, 75, 76, 58
	, 38, 83, 84
	, 84, 85
	, 84, 86
	, 85, 8, 87, 9
	, 86, 10, 87, 11
	, 87, 47, 48, 88, 89, 90, 91, 58
	, 41, 92, 93
	, 93, 94
	, 94, 8, 95, 9
	, 95, 62, 28
	, 77, 96
	, 47, 97
	, 73, 97
	, 75, 97
	, 48, 97
	, 74, 97
	, 76, 97
	, 58, 97
	, 59, 97
	, 60, 97
	, 61, 97
	, 62, 96
	, 63, 96
	, 88, 97
	, 89, 97
	, 90, 97
	, 91, 97
	, 25, 96
	, 25, 98
	, 64, 98
	, 26, 96
	, 27, 96
	, 28, 96
	, 29, 97
	, 30, 97
	, 31, 97
	, 32, 97
	, 33, 97
	, 34, 97
	, 97, 12
	, 98, 14
	, 96, 13
	, 16, 1
	, 49, 3
	, 65, 2
	, 42, 4
	, 78, 5
	, 83, 6
	, 92, 7
	, 99, 15, 0
};

const int GedaElementGrammar::rule_index [] = {
	0, 4, 6, 8, 12, 16, 18, 20, 24, 28,
	40, 42, 45, 47, 49, 51, 53, 55, 57, 60,
	62, 64, 68, 72, 75, 78, 80, 82, 86, 90,
	92, 94, 96, 98, 108, 116, 123, 129, 132, 134,
	136, 140, 144, 146, 148, 150, 161, 170, 178, 181,
	183, 185, 189, 193, 199, 202, 204, 206, 210, 214,
	222, 225, 227, 231, 234, 236, 238, 240, 242, 244,
	246, 248, 250, 252, 254, 256, 258, 260, 262, 264,
	266, 268, 270, 272, 274, 276, 278, 280, 282, 284,
	286, 288, 290, 292, 294, 296, 298, 300, 302, 304,
	306, 308, 310, 312
};
#endif // QLALR_NO_GEDAELEMENTGRAMMAR_DEBUG_INFO

const int GedaElementGrammar::action_default [] = {
	0, 97, 0, 0, 0, 0, 0, 7, 6, 95,
	0, 96, 0, 83, 82, 0, 85, 0, 86, 87,
	0, 94, 0, 88, 0, 89, 90, 0, 91, 0,
	92, 0, 93, 0, 10, 9, 0, 8, 0, 0,
	1, 3, 2, 103, 102, 101, 100, 99, 98, 0,
	18, 0, 15, 0, 16, 0, 17, 0, 14, 0,
	13, 11, 0, 0, 62, 61, 0, 0, 76, 64,
	63, 0, 0, 57, 56, 55, 0, 66, 0, 59,
	69, 0, 0, 78, 0, 79, 0, 80, 0, 81,
	60, 72, 0, 58, 0, 0, 51, 50, 49, 0,
	67, 0, 53, 70, 0, 68, 0, 71, 0, 54,
	0, 52, 0, 0, 21, 20, 19, 0, 0, 23,
	24, 0, 22, 0, 0, 40, 39, 38, 0, 43,
	44, 45, 0, 42, 0, 0, 0, 0, 0, 0,
	73, 0, 74, 0, 0, 65, 46, 48, 84, 0,
	47, 0, 41, 0, 0, 27, 26, 25, 0, 30,
	31, 32, 33, 0, 29, 0, 0, 0, 0, 0,
	75, 0, 0, 75, 0, 0, 77, 34, 0, 36,
	0, 35, 37, 0, 28, 12, 5, 0, 4, 104
};

const int GedaElementGrammar::goto_default [] = {
	3, 2, 6, 40, 42, 41, 62, 8, 7, 12,
	10, 15, 17, 20, 22, 24, 27, 29, 31, 33,
	61, 60, 58, 52, 54, 56, 50, 55, 116, 115,
	114, 117, 78, 81, 59, 157, 156, 155, 158, 159,
	160, 161, 162, 90, 138, 141, 168, 66, 175, 147,
	57, 127, 126, 125, 128, 129, 130, 131, 101, 104,
	106, 108, 149, 53, 98, 97, 96, 99, 51, 75,
	74, 73, 76, 82, 84, 86, 88, 49, 65, 64,
	67, 68, 77, 13, 0
};

const int GedaElementGrammar::action_index [] = {
	38, -15, 27, 24, 20, 20, 22, -15, -15, -15,
	3, -15, 4, -15, -15, 3, -15, 3, -15, -15,
	7, -15, 7, -15, 7, -15, -15, 7, -15, 7,
	-15, 0, -15, 20, -15, -15, 5, -15, 58, 58,
	-15, -15, -15, -15, -15, -15, -15, -15, -15, 2,
	-15, 36, -15, 28, -15, 45, -15, 33, -15, 32,
	-15, 58, 6, 3, -15, -15, 3, 9, -15, -15,
	-15, 1, 1, -15, -15, -15, -4, -15, 1, -15,
	-15, 1, 16, -15, 19, -15, 19, -15, 19, -15,
	-15, -15, 14, -15, 19, 1, -15, -15, -15, 18,
	-15, 10, -15, -15, 13, -15, 13, -15, 13, -15,
	11, -15, 13, 13, -15, -15, -15, 15, 16, -15,
	-15, 12, -15, 13, 1, -15, -15, -15, -2, -15,
	-15, -15, -8, -15, -12, 1, 1, 35, 1, 20,
	-15, 3, -15, -5, 20, -15, -15, -15, -15, -9,
	-15, -3, -15, 1, 1, -15, -15, -15, -10, -15,
	-15, -15, -15, 1, -15, -8, 35, -12, 3, -9,
	-1, 1, 3, -15, 3, 20, -15, -15, 20, -15,
	-9, -15, -15, -6, -15, -15, -15, -7, -15, -15,

	-85, -85, -85, -85, -74, 22, -85, -85, -85, -85,
	-75, -85, -85, -85, -85, -80, -85, -71, -85, -85,
	-73, -85, -77, -85, -82, -85, -85, -78, -85, -59,
	-85, -68, -85, 44, -85, -85, -85, -85, -85, 10,
	-85, -85, -85, -85, -85, -85, -85, -85, -85, -85,
	-85, -85, -85, -85, -85, -85, -85, -85, -85, -85,
	-85, 73, -85, -85, -85, -85, 19, -85, -85, -85,
	-85, -85, -61, -85, -85, -85, -85, -85, -60, -85,
	-85, -58, -57, -85, -56, -85, -70, -85, -69, -85,
	-85, -85, -85, -85, -67, -34, -85, -85, -85, -85,
	-85, -64, -85, -85, -63, -85, -65, -85, -14, -85,
	-85, -85, -12, 21, -85, -85, -85, -85, 25, -85,
	-85, -85, -85, 2, 8, -85, -85, -85, -85, -85,
	-85, -85, -8, -85, -25, -23, -1, -7, -55, -36,
	-85, -26, -85, -16, 39, -85, -85, -85, -85, -5,
	-85, -85, -85, -24, 5, -85, -85, -85, -85, -85,
	-85, -85, -85, 23, -85, 7, 33, -11, -6, -10,
	-85, -18, -44, -85, -79, 20, -85, -85, 38, -85,
	-13, -85, -85, -85, -85, -85, -85, -85, -85, -85
};

const int GedaElementGrammar::action_info [] = {
	21, 164, 188, 184, 21, 9, 152, 79, 11, 133,
	63, -73, 21, 21, 37, 35, 11, 186, 70, 21,
	111, 122, 21, 93, 189, 21, 119, 0, 21, 102,
	39, 21, 38, 11, 9, 5, 95, 4, 94, 1,
	154, 124, 153, 123, 72, 0, 71, 21, 11, 0,
	0, 0, 0, 113, 0, 112, 0, 0, 0, 0,
	47, 48, 46, 45, 44, 43, 0, 0, 0, 0,
	0, 0, 0,

	26, 18, 176, 174, 28, 25, 16, 14, 163, 23,
	19, 92, 89, 91, 32, 100, 187, 107, 103, 105,
	118, 143, 80, 30, 83, 85, 87, 142, 172, 109,
	177, 36, 69, 110, 171, 135, 181, 163, 136, 182,
	139, 178, 137, 183, 150, 145, 144, 148, 100, 146,
	166, 134, 121, 118, 34, 0, 165, 105, 120, 107,
	132, 0, 151, 0, 173, 145, 132, 0, 91, 0,
	148, 142, 0, 148, 103, 140, 0, 167, 148, 185,
	169, 91, 0, 0, 100, 0, 180, 179, 0, 91,
	100, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	19, 14, 0, 14, 0, 80, 0, 80, 0, 0,
	0, 0, 0, 0, 0, 170, 0, 0, 0, 176,
	14, 148, 0, 0, 0, 14, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0
};

const int GedaElementGrammar::action_check [] = {
	12, 11, 9, 9, 12, 14, 9, 11, 13, 11,
	8, 12, 12, 12, 9, 11, 13, 11, 9, 12,
	9, 9, 12, 9, 0, 12, 11, -1, 12, 11,
	8, 12, 10, 13, 14, 8, 8, 10, 10, 1,
	8, 8, 10, 10, 8, -1, 10, 12, 13, -1,
	-1, -1, -1, 8, -1, 10, -1, -1, -1, -1,
	2, 3, 4, 5, 6, 7, -1, -1, -1, -1,
	-1, -1, -1,

	82, 81, 81, 47, 82, 82, 81, 81, 32, 82,
	81, 72, 82, 82, 82, 82, 6, 82, 82, 82,
	32, 47, 82, 82, 82, 82, 82, 82, 46, 43,
	10, 9, 13, 67, 45, 60, 49, 32, 61, 49,
	47, 47, 43, 38, 49, 81, 62, 83, 82, 10,
	43, 59, 31, 32, 10, -1, 33, 82, 33, 82,
	58, -1, 54, -1, 82, 81, 58, -1, 82, -1,
	83, 82, -1, 83, 82, 82, -1, 44, 83, 6,
	47, 82, -1, -1, 82, -1, 48, 49, -1, 82,
	82, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	81, 81, -1, 81, -1, 82, -1, 82, -1, -1,
	-1, -1, -1, -1, -1, 82, -1, -1, -1, 81,
	81, 83, -1, -1, -1, 81, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1
};
