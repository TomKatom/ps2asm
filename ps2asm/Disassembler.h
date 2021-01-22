#pragma once
#include <string>
#include <fstream>

class Disassembler {
public:
	Disassembler(const std::string& filename);
	~Disassembler();
private:
	std::ifstream _input_file;
	const std::string& _filename;
};
