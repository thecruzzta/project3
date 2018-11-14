//
// Created by Adrian Cruz on 9/21/18.
//

#ifndef PROJECT1_JSONTOKEN_HPP
#define PROJECT1_JSONTOKEN_HPP
#include <iostream>

class JSONToken {
public:
    JSONToken();
    bool &isCloseBrace();
    bool &isOpenBrace();
    bool &isCloseBracket();
    bool &isOpenBracket();
    bool &isColon();
    bool &isComma();
    bool &isadoublyQuote();
    bool &endOfFile();
    void makeQuoteName(std::string);
    std::string thequoteName();
    void print();

private:
    bool _isCloseBrace, _isOpenBrace,_isCloseBracket, _isOpenBracket,_isColon,
    _isComma, _isadoublyQuote, _quoteName,
        _eof = false;
    std::string _quoteName;

};


#endif //PROJECT1_JSONTOKEN_HPP
