#ifndef Translator_H
#define Translator_H

#include "Model.h"
#include <string>

//all header files needed are listed above

class Translator{ 
    public:
        Translator(); //default constructor
        ~Translator(); //default destructor

        std::string translateEnglishword(std::string word);
        std::string translateEnglishsentence(std::string sentence);

        // both functions are based on the Model class

};
#endif