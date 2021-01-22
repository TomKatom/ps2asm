#pragma once
#include "RInstruction.h"

class SpecialInstruction : public RInstruction {
public:
	SpecialInstruction(std::uint_fast32_t instruction);
	virtual ~SpecialInstruction() = default;


	// Inherited via Instruction
	virtual std::string disassemble() const final;

};
