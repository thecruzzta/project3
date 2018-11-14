//
// Created by Adrian Cruz on 9/21/18.
//

#include "JSONTokenizer.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <map>

JSONTokenizer::JSONTokenizer(std::string name):

   inputFileName{name} {inputStream.open(inputFileName, std::ios::in);  // open the input file. We will make sure that it is open in getToken.
}

bool JSONTokenizer::charOfInterest(char c) {

    if (c == '[' || c == ']' || c == '{'||'}' || ':' || ','|| ' " ' ){
        return true;// you need to replace this with code that compares c with characters like '<', '>', etc.
    } else
        return false;
}
JSONToken JSONTokenizer::getToken() {

    char c;

    if (!inputStream.is_open()) {

        std::cout << "Make sure that " << inputFileName << " exists and is readable. Terminating.";
        exit(2);
    }


    JSONToken token;
    if (inputStream.eof()) {
        token.endOfFile() = true;
        return token;
    }
    while(inputStream.get(c))
    {
        std::string name;

        if (c == '[')
        {
            token.isOpenBrace() = true;
            return token;
        }

        else if ( c == ']' ) {
            inputStream.get(c);  // discard '/'

            while(inputStream.get(c) && isalnum(c)) {
                name += c;

            }
            token.isCloseBrace() = true;
            if( ! inputStream.eof() )
                inputStream.putback(c);

            return token;
        }

        else if ( c == '{' ) {
            token.isOpenBracket() = true;
        }

        else if( c == '}' ) {
            token.isCloseBracket() = true;

            return token;
        }
        else if(c == ':'){
            token.isColon() = true;
            return token;
        }
        else if (c == ','){
            token.isComma() = true;
            return token;
        }

        else if (c == ' " ')
        {
            std:: string quote;
            while (inputStream.get(c) && c == ' " ') {
                quote += c;
            }
            std::cout<< quote << std:: endl;
            return token;
        }
        return token;
    }

}