#pragma once

#include "Instruction.h"

class JInstruction : public Instruction {
public:
	JInstruction(std::uint_fast32_t instruction);
	virtual ~JInstruction() = default;

	// Inherited via Instruction
	virtual std::string disassemble() const override = 0;
private:
	std::uint_fast32_t _address;
};
