
#include "PreProc.h"
#include <ostream>
#include "istream"
#include <fstream>
#include <vector>

class macro {
    
    
};

const inline bool hasPreProcessCommand( std::string const line)
{
    const char w = ' ';
     bool isLineCommand = false;
    for(auto i =line.cbegin();i != line.cend(); i++) {
        if(*i == w) {
            
        }else if(*i == '#') {
           
            isLineCommand = true;
            break;
        }else{
            isLineCommand = false;
        }
        
    }
    const bool ret2 = isLineCommand;
    return ret2;
    
}

std::string PreProcess(std::string file)
{
    
    std::ifstream myfileI;
    std::ofstream myfileO;
    
    std::string lineInfo;
    std::string command ;
    std::string outLine ;
    int lineNum = 0;
    int a = 0;
        
    myfileO.open (file);
    myfileI.open(file);
   
    while (myfileI) {
        
        getline(myfileI,lineInfo);
        
        outLine =  "<" + file + " " + std::to_string(lineNum )+ ">" ;
       

        if (hasPreProcessCommand(lineInfo) ) {
            
            
            
        } else {
            
        }
        lineNum++;
        myfileO << outLine;
    }
    
    return "preprocess/" + file;
}
