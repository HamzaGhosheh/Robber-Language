//header guard: prevents C++ from including the same header file multiple times

#ifndef RobberLanguage_H
#define RobberLanguage_H

#include <string>

class Model{ // essential basis for all subsequent classes and header files
    public:
        Model(); //default constructor
        ~Model(); //default destructor

        std::string translateSingleConsonant(char consonant); 
        std::string translateSingleVowel(char vowel);
        //both functions are used in Model.cpp and Translator.cpp
};

#endif