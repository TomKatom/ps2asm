#include "JInstruction.h"

JInstruction::JInstruction(std::uint_fast32_t instruction) : Instruction(instruction),
_address(instruction & 67108864)
{

}