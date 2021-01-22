#pragma once
#include <string>
#include <cstddef>
#include <cstdint>

class Instruction {
public:
	Instruction(std::uint_fast32_t instruction);
	std::uint_fast8_t getOpcode() const;
	virtual std::string disassemble() const = 0;
	virtual ~Instruction() = default;
protected:
	const std::uint_fast32_t _instruction;
	const std::uint_fast8_t _opcode;

};
