#include "Translator.h"
#include "Model.h"
#include <string>
#include <iostream>

//all header files needed are listed above

Translator::Translator(){ //default constructor

}
Translator::~Translator(){ //default destructor

}


// This function below represents
// A boolean determining the outcome of whether the character is a letter or not. Each case represents all possible scenarios for a chracter.
//Capitalization is preserved throughout

bool checkLetter(char a){
    switch(a){
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
            return true;
        break;
    }
    return false;
}

bool checkConsonant(char consonant){ // boolean case statement checks for every possible chracter that is a consonant; capitalization is preserved 
    switch(consonant){
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
            return true;
        break;
    }
    return false;
}


bool checkVowel(char vowel){
    switch(vowel){  // boolean case statement checks for every possible chracter that is a vowel; capitalization is preserved
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
        default:
            return true;
        break;
    }
    return false;
}


std::string Translator::translateEnglishword(std::string myString){
    // This method is a template of using Model files in translateSingleConsonant and translateSingleVowel
    Model foundation;
    std::string output_val = "";
    // Iterate over string through a character i, and checks character type
    for(int i = 0; i < myString.size(); ++i){
        char a = myString.at(i);
        // Determines if the character is a consonant
        if(checkConsonant(a)){
            // This statement adds a translated consonant to the new string
            output_val += foundation.translateSingleConsonant(a);
        }
        else{
            // Determines if the character is vowel 
            if(checkVowel(a)){
                // This statement adds a vowel to the newly created string
                output_val += foundation.translateSingleVowel(a);
            }
            else{
                // This else statement accounts for characters that are not alphabetical letters
                std::string my_word(1, a);
                output_val += my_word;
            }
        }
    }
    // returns the translated word
    return output_val;
}

std::string Translator::translateEnglishsentence(std::string my_sentence){
    std::string word_output = "";
    std::string sentence = "";
    // The previous function iterates a single string
    // Here, it is a string of strings (a sentence)
    for(int i = 0; i < my_sentence.size(); ++i){
        char a = my_sentence.at(i);
        // Determines character type
        if(checkLetter(a)){
            // Add string of character to word_output
            std::string my_word(1, a);
            word_output += my_word;
            // outputs a whole translated string after cycling through the strings characters
        }
        else{
            sentence += translateEnglishword(word_output);
            // Convert special character to string and add to sentence without translation or duplication
            std::string my_word(1, a);
            sentence += my_word;
            // Clear word_output string for next character
            word_output = "";
        }
    }
    // apply the checkLetter function to see if some characters are not alphabetical letters
    if(checkLetter(my_sentence.at(my_sentence.size()-1))){
        // Accounts for all punctiation or spaces
        // Each special character is subsequently added
        sentence += translateEnglishword(word_output);
    }
    return sentence;
    // returns fully translated sentence 
}
