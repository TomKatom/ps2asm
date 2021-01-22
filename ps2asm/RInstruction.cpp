#include "RInstruction.h"

RInstruction::RInstruction(std::uint_fast32_t instruction) : Instruction(instruction),
	_function(instruction & 63),
	_shamt(instruction & (31 << 6) >> 6),
	_rd(instruction & (31 << 11) >> 11),
	_rt(instruction & (31 << 16) >> 16),
	_rs(instruction & (31 << 21) >> 21)
{

}

