#pragma once
#include "Instruction.h"

class IInstruction : public Instruction {
public:
	IInstruction(std::uint_fast32_t instruction);
	virtual ~IInstruction() = default;

	// Inherited via Instruction
	virtual std::string disassemble() const override = 0;

protected:
	const std::uint_fast16_t _immediate;
	const std::uint_fast8_t _rt;
	const std::uint_fast8_t _rs;
}; 
