#ifndef fileProcessor_H
#define fileProcessor_H

#include "Model.h"
#include "Translator.h"
#include <string>

//all header files needed are listed above

class fileProcessor{
    public:
        fileProcessor(); //default constructor
        ~fileProcessor(); //default destructor

    void processFile(std::string myfile, std::string HTML); // HTML function that outputs the user phrases and inputs to a txt file

};
#endif