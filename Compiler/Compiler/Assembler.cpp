#include "Assembler.h"

#include <fstream>

std::string Assemble(std::string file)
{
    // Create streams.
    std::ifstream infile{ "preprocess/" + file };
    std::ofstream ofile{ "assembly/" + file };
    
    // Read from the stream, creating a string one character at a time.
    std::string line;
    while (infile) {
        // Currently, we are in the global scope. This means we can only read class and function definitions.
        
    }
    
    return "assembly/" + file;
}

std::string to_assembly(std::string command, std::string param1, std::string param2)
{
    std::string ret;
    
    if (command == "") {
        
    } else if (command == "") {
        
    } else if (command == "") {
        
    } else if (command == "") {
        
    } else if (command == "") {
    
    } else {
        // Here the command is incorrect.
        throw std::invalid_argument(command);
    }
    
    return ret;
}