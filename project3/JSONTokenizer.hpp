//
// Created by Adrian Cruz on 9/21/18.
//

#ifndef PROJECT1_JSONTOKENIZER_HPP
#define PROJECT1_JSONTOKENIZER_HPP


#include <string>
#include <fstream>
#include "JSONToken.hpp"

class JSONTokenizer {

public:
    JSONTokenizer(std::string);
    JSONToken getToken();


    //JSONToken reverseToken(Token token);

private:

    std::string inputFileName;
    std::ifstream inputStream;
    bool JSONTokenizer::charOfInterest(char c);


};



#endif //PROJECT1_JSONTOKENIZER_HPP
