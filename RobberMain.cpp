#include "fileProcessor.h"
#include <fstream>

//all header files needed are listed above

int main(int argc, char** argv){ // parameters only needed if you want to take in command line arguments; also contains main method needed for runnning the program
    fileProcessor file;
    file.processFile("original.txt", "Translation.html");
    // only one function in this main method is called
    // each parameter in this file is dependent on all other classes
    return 0;
}