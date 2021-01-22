#pragma once
#include <string>
#include <fstream>
#include <vector>
#include "Instruction.h"

class Disassembler {
public:
	Disassembler(const std::string& filename);
	~Disassembler();
	void printDisassembledCode() const;
private:
	void disassemble();
	std::ifstream _input_file;
	const std::string& _filename;
	std::vector<Instruction> _instructions;
};
