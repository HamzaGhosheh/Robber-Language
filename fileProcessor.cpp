#include "Translator.h"
#include "fileProcessor.h"
#include <fstream>

//all header files needed are listed above

fileProcessor::fileProcessor(){ //default constructor

}
fileProcessor::~fileProcessor(){ //default destructor
}

//no output needed because it is a void function
void fileProcessor::processFile(std::string myfile, std::string HTML){
    //HTML data included as an output
    //because file reading and writing is included, we use ifstream and ofstream
    std::ifstream input;
    std::ofstream result(HTML);
    input.open(myfile);
    result << "<!DOCTYPE html>"<< std::endl;
    result << "<html>"<< std::endl;
    result << "<head>"<< std::endl;
    result << "<title>" << "Robber Language Project" << "</title>"<< std::endl;
    result << "</head>"<< std::endl;
    result << "<body>"<< std::endl;

    std::string stuff;
    //this while loop includes all the strings from the original.txt file
    while (getline(input, stuff)) {
        result << "<p><b>" << stuff << "</b><br></p>"<< std::endl;
    }

    input.close();
    input.open(myfile);
    //this while loop includes all translations of the previous three strings into the Robber Language
    while (getline(input, stuff)){
        Translator Translate;
        std::string translation;
        translation = Translate.translateEnglishsentence(stuff); // uses the Translate.cpp function to loop through all characters and strings of the original.txt file
        result << "<p><i>" << translation << "</p></i><br>"<< std::endl;
        result << "</body>" << std::endl;
        result << "</html>"<< std::endl;
    }
    
    //closes both the original and translated phrases
    result.close();
    input.close();
}

