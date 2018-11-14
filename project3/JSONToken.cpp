//
// Created by Adrian Cruz on 9/21/18.
//

#include "JSONToken.hpp"
#include <iomanip>
#include <iostream>


JSONToken::JSONToken():          _isOpenBrace{false},
                                 _isCloseBrace{false},
                                 _isCloseBracket{false},
                                 _isOpenBracket{false},
                                 _isColon{false},
                                 _isComma{false},
                                 _isadoublyQuote{},
                                 _quoteName{""}{}


bool &JSONToken::isOpenBrace() { return _isOpenBrace; }
bool &JSONToken::isCloseBrace() { return _isCloseBrace; }
bool &JSONToken::isCloseBracket() { return _isCloseBracket; }
bool &JSONToken::isOpenBracket() { return _isOpenBracket; }
bool &JSONToken::isColon() { return _isColon; }
bool &JSONToken::isComma() { return _isComma; }
bool &JSONToken::isadoublyQuote() { return _isadoublyQuote; }
bool &JSONToken::endOfFile()   { return _eof; }


std::string JSONToken::quoteName() { return _quoteName; }

void JSONToken::makeQuoteName(std::string name) {
    _quoteName = name;
    isadoublyQuote() = true;
}


void JSONToken::print() {

    if(isOpenBrace()) {
        std::cout << "[" << std::endl;
    } else if(isCloseBrace()){
        std::cout << "]" << std::endl;
    } else if(isOpenBracket()){
        std::cout << "{" << std::endl;
    }else if(isCloseBracket()){
        std::cout << "}" << std::endl;
    }else if(isColon()){
        std::cout << ":" << std::endl;
    }else if(isComma()){
        std::cout << "," << std::endl;
    }else if(isadoublyQuote()){
        std::cout << quoteName() << std::endl;
    }

}
