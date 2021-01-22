#include "Instruction.h"

Instruction::Instruction(std::uint_fast32_t instruction) : _instruction(instruction), _opcode(this->_instruction >> 26) {

}

std::uint_fast8_t Instruction::getOpcode() const {
	return this->_opcode;
}