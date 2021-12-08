#ifndef _DEFINITIONS
#define _DEFINITIONS

// type definitions for readable code
#define BOOL char
#define TRUE 1
#define FALSE 0
#define INSTRUCTION unsigned long long

// physical limitations constants
#define INSTRUCTIONS_DEPTH 4096
#define MEMORY_DEPTH 4096

#define LINE_MAX_LENGTH_IN_BYTES 500
#define LABEL_MAX_LENGTH 50

#define INSTRUCTION_SIZE_IN_BITS 48
#define INSTRUCTION_SIZE_IN_CHARS 12

#define MEMORY_SIZE_IN_BITS 32
#define MEMORY_SIZE_IN_CHARS 8

#define NUM_REGISTERS 16
#define NUM_IOREGISTERS 23

// instruction structure
#define OPCODE_BITS 8
#define	RD_BITS 4
#define RS_BITS 4
#define RT_BITS 4
#define RM_BITS 4
#define IMM1_BITS 12
#define IMM2_BITS 12

#define OPCODE_MASK 0xff0000000000
#define RD_MASK		0x00f000000000
#define RS_MASK		0x000f00000000
#define RT_MASK		0x0000f0000000
#define RM_MASK		0x00000f000000
#define IMM1_MASK	0x000000fff000
#define IMM2_MASK	0x000000000fff
#endif