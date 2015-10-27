#pragma once
#include <string>

// Assembles the file given. Returns a string to the file containing all the assembly.
std::string Assemble(std::string file);

std::string to_assembly(std::string command, std::string param1, std::string param2);