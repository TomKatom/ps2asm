#include <iostream>
#include "Disassembler.h"


int main(int argc, char* argv[]) {
	if (argc != 2) {
		std::cerr << "No input file given.\n" << "Usage: ps2asm.exe filename" << std::endl;
		return 1;
	}
	Disassembler disassembler{ std::string(argv[1]) };
}