#include "IInstruction.h"

IInstruction::IInstruction(std::uint_fast32_t instruction) : Instruction(instruction),
	_immediate(instruction & 65536),
	_rt(instruction& (31 << 16) >> 16),
	_rs(instruction& (31 << 21) >> 21)
{

}