#include "SpecialInstruction.h"


SpecialInstruction::SpecialInstruction(std::uint_fast32_t instruction) : RInstruction(instruction)
{
	
}

std::string SpecialInstruction::disassemble() const
{
	return std::string();
}
