#include "Instruction.h"

Instruction::Instruction(unsigned int opcode) {
	this->opcode = opcode;
}

unsigned int Instruction::getOpcode() const {
	return this->opcode;
}