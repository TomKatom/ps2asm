#pragma once
#include "Instruction.h"

class RInstruction : public Instruction {
public:
	RInstruction(std::uint_fast32_t instruction);
	virtual ~RInstruction() = default;

	// Inherited via Instruction
	virtual std::string disassemble() const override = 0;

protected:
	const std::uint_fast8_t _function;
	const std::uint_fast8_t _shamt;
	const std::uint_fast8_t _rd;
	const std::uint_fast8_t _rt;
	const std::uint_fast8_t _rs;
};
