#ifndef __INSTRS_HPP
#define __INSTRS_HPP

extern instruc_t Instructions[];
extern char const *insn_auto_cmts[];

enum nameNum
{
	ST8_null = 0,           // Unknown Operation

	ST8_adc,       // Add with Carry
	ST8_add,       // Addition
	ST8_addw,       // Addition Word
	ST8_and,       // Logical And
	ST8_bccm,      // Copy carry in memory bit
	ST8_bcp,       // Bit compare
	ST8_bcpl,       // Bit complement
	ST8_break,       // Software breakpoint
	ST8_bres,       // Bit Reset
	ST8_bset,       // Bit Set
	ST8_btjf,       // Jump if bit is false
	ST8_btjt,       // Jump if bit is true
	ST8_call,       // Call subroutine
	ST8_callf,       // Call subroutine far
	ST8_callr,       // Call subroutine relative
	ST8_ccf,       // Complement Carry Flag
	ST8_clr,       // Clear
	ST8_clrw,       // Clear destination index register
	ST8_cp,       // Arithmetic Compare
	ST8_cpw,       // Arithmetic Compare Word
	ST8_cpl,       // One Complement
	ST8_cplw,       // One Complement Word
	ST8_dec,       // Decrement
	ST8_decw,       // Decrement Word
	ST8_div,       // Division
	ST8_divw,       // Division Word
	ST8_exg,       // Data byte exchange
	ST8_exgw,       // Data word exchange
	ST8_halt,       // Halt
	ST8_inc,       // Increment
	ST8_incw,       // Increment Word
	ST8_int,       // Interrupt
	ST8_iret,       // Interrupt routine return
	ST8_jp,       // Absolute Jump
	ST8_jpf,       // Absolute Jump far
	ST8_jra,       // Jump relative always
	ST8_jrc,       // Jump if C = 1
	ST8_jreq,       // Jump if Z = 1 (equal)
	ST8_jrf,       // Never jump
	ST8_jrh,       // Jump if H = 1
	ST8_jrih,       // Jump if Port INT pin = 1
	ST8_jril,       // Jump if Port INT pin = 0
	ST8_jrm,       // Jump if I = 1
	ST8_jrmi,       // Jump if N = 1 (minus)
	ST8_jrnc,       // Jump if C = 0
	ST8_jrne,       // Jump if Z = 0 (not equal)
	ST8_jrnh,       // Jump if H = 0
	ST8_jrnm,       // Jump if I = 0
	ST8_jrnv,        // Jump if V = 0
	ST8_jrpl,       // Jump if N = 0 (plus)
	ST8_jrsge,
	ST8_jrsgt,
	ST8_jrsle,
	ST8_jrslt,
	ST8_jrt,       // Jump relative
	ST8_jruge,       // Jump if C = 0
	ST8_jrugt,       // Jump if (C + Z = 0)
	ST8_jrule,       // Jump if (C + Z = 1)
	ST8_jrult,       // Jump if C = 1
	ST8_jrv,        // Jump if V = 1
	ST8_ld,       // Load
	ST8_ldf,       // Load far
	ST8_ldw,       // Load word
	ST8_mov,       // Move
	ST8_mul,       // Multiply
	ST8_neg,       // Negate
	ST8_negw,       // Negate word
	ST8_nop,       // No Operation
	ST8_or,       // OR Operation
	ST8_pop,       // Pop from the Stack
	ST8_popw,       // Pop word from the Stack
	ST8_push,       // Push onto the Stack
	ST8_pushw,       // Push word onto the Stack
	ST8_rcf,       // Reset carry flag
	ST8_ret,       // Subroutine Return
	ST8_retf,       // Subroutine Return far
	ST8_rim,       // Enable Interrupts
	ST8_rlc,       // Rotate left true
	ST8_rlcw,       // Rotate left true word
	ST8_rlwa,       // Rotate left through accumulator
	ST8_rrc,       // Rotate right true
	ST8_rrcw,       // Rotate right true word
	ST8_rrwa,       // Rotate right through accumulator
	ST8_rvf,       // Reset overflow flag
	ST8_sbc,       // Subtract with Carry
	ST8_scf,       // Set carry flag
	ST8_sim,       // Disable Interrupts
	ST8_sla,       // Shift left Arithmetic
	ST8_slaw,       // Shift left Arithmetic word
	ST8_sll,       // Shift left Logic
	ST8_sllw,       // Shift left Logic word
	ST8_sra,       // Shift right Arithmetic
	ST8_sraw,       // Shift right Arithmetic word
	ST8_srl,       // Shift right Logic
	ST8_srlw,       // Shift right Logic word
	ST8_sub,       // Subtraction
	ST8_subw,       // Subtraction word
	ST8_swap,       // SWAP nibbles
	ST8_swapw,       // SWAP bytes
	ST8_tnz,       // Test for Neg & Zero
	ST8_tnzw,       // Test for Neg & Zero word
	ST8_trap,       // S/W trap
	ST8_wfe,       // Wait for Event
	ST8_wfi,       // Wait for Interrupt
	ST8_xor,       // Exclusive OR
	ST8_unknown,   // UNKNOWN 0x71 Instruction

	ST8_last
};

#endif
