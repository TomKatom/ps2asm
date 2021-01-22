#pragma once
#include <string>

class Instruction {
public:
	Instruction(unsigned int opcode);
	unsigned int getOpcode() const;
	virtual std::string disassemble() = 0;
private:
	unsigned int opcode;
};
