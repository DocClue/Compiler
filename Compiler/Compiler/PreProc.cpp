
#include "PreProc.h"
#include <ostream>
#include "istream"
#include <fstream>

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
        for (auto i = lineInfo.cbegin(); i!= lineInfo.cend(); i++) {
            if (*i == ' ') {
                
                
            } else if (*i =='#') {
                command += *i;
                
                
            } else {
                // No preprocessor command on this line.
            }
            a++;
        }
        lineNum++;
        
        outLine =  "<" + file + " " + std::to_string(lineNum )+ ">" ;
        myfileO << outLine;
    }
    
    return "preprocess/" + file;
}