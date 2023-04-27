#include "Model.h"
#include <string>

//all header files needed are listed above

Model::Model(){ // default constructor

}

Model::~Model(){ //default destructor

}

std::string Model::translateSingleConsonant(char consonant){ // function that checks consonants in a phrase and follows the format of adding o's then doubling the letter
    std::string new_word = ""; 
    switch(consonant){ // case statement checks for every possible chracter that is a consonant; capitalization is preserved
        case 'B':
        case 'C':
        case 'D':
        case 'F':
        case 'G':
        case 'H':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            new_word += consonant;
            new_word += 'o';
            new_word += tolower(consonant); // these case statements add characters to create a string, such as ToT or xox
            break;
        default:
            break; // if the condition does not satisfy the above cases, it moves to translateSingleVowel
        }
        return new_word; //returns consonant with the added o and duplication as a string
}

std::string Model::translateSingleVowel(char vowel){
    std::string new_word = "";
        switch(vowel){  // case statement checks for every possible chracter that is a vowel; capitalization is preserved
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                new_word += vowel; // empty string is added to a vowel
                //this turns new_word into a string
                break;
            default:
                if (!isalpha(vowel)){ // This if statement accounts for any non-alphabetical characters within the program, that way a punctuation mark is not doubled
                    new_word += vowel;
                }
                break; // outputs nothing if the case statement is not checked through
        }
        return new_word; //returns the vowel just as it is presented in the string
    }


