#include "Disassembler.h"
#include <iostream>

Disassembler::Disassembler(const std::string& filename) : _filename{filename}, _input_file{_filename, std::ios::in | std::ios::binary}{
	if (!this->_input_file.is_open())
		throw std::invalid_argument("Can't Open File.");
}

Disassembler::~Disassembler() {
	if (this->_input_file.is_open())
		this->_input_file.close();
}

void Disassembler::printDisassembledCode() const {
	for (auto instruction : this->_instructions) {
		std::cout << instruction.disassemble() << "\n";
	}
	std::cout << std::endl;
}

void Disassembler::disassemble() {

}