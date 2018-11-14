//
// Created by Adrian Cruz on 9/22/18.


#include "JSONParser.hpp"
#include <iostream>

JSONParser::JSONParser(JSONTokenizer& tokenizer):
    _tokenizer{tokenizer} {}

EntityInstance JSONParser::parseJSONObject() {
    // parseJSONObject is responsible for parsing a JSON object. As such,
    // the first token is expected to be an open brace.
    JSONToken token = tokenizer.getToken();
    if( ! token.isOpenBrace() ) {
        std::cout << "Error: JSONParser::parseJSONObject: Expected an open brace, but found" << std::endl;
        token.print();
        std::cout << "Terminating..." << std::endl;
        exit(1);
    }
    EntityInstance instance;
    do {
        Pair pair = parseAPair();
        instance.addAttribute(pair);
        token = tokenizer.getToken();
    } while( token.isComma() );  // after having read a pair, we expect a comma
    // So, we didn't find a comma. Then, it must be a close brace.
    if( ! token.isCloseBrace() ) {
        std::cout << "Error: JSONParser::parseJSONObject: Expected an close brace, but found" << std::endl;
        token.print();
        std::cout << "Terminating..." << std::endl;
        exit(1);
    }
    return instance;
}
Pair JSONParser ::parseAPair (){
    JSONToken token = tokenizer.getToken();
    if(! token.isadoublyQuote()) {
        std::cout << "Error: JSONParser::parseJSONObject: Expected quotes, but found" << std::endl;
        token.print();
        std::cout <<" Terminating..." << std::endl;
        exit(2);
    }
    JSONToken secondtoken = tokenizer.getToken();
    if(! token.isColon()) {
        std::cout << "Error: JSONParser::parseJSONObject: Expected quotes, but found" << std::endl;
        token.print();
        std::cout << " Terminating..." << std::endl;
        exit(3);
    }

    JSONToken thirdtoken = tokenizer.getToken();
    Pair pair(token.thequoteName());
    pair.attributeName() = token.thequoteName();
    if(token.istheNumber()){
        pair.isNumber() = true;
        pair.numberValue(token.numberValue());
    }else if(token.isadoublyQuote()){
        pair.stringValue(token.thequoteName());
    }else {
        std::cout << "Error: JSONParser::parseJSONObject: Expected quotes, but found" << std::endl;
        token.print();
        std::cout << " Terminating..." << std::endl;
        exit(4);
    }

}
