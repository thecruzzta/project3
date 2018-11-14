//
// Created by Adrian Cruz on 11/7/18.
//

#include "Album.hpp"
#include "Pair.hpp"
#include "JSONParser.hpp"
std::string Album::title() {
    Pair * profile = pairWithAttributeName("title");
    return profile == nullptr ? "": profile -> stringValue();
}

std::string Album::numVideos() {
    Pair * profile = pairWithAttributeName("numVideos");
    return profile == nullptr ? "": profile -> stringValue();
}

std::string Album::numImages() {
    Pair * profile = pairWithAttributeName("numImages");
    return profile == nullptr ? "": profile -> stringValue();
}

std::string Album::numTracks() {
    Pair * profile = pairWithAttributeName("numTracks");
    return profile == nullptr ? "": profile -> stringValue();
}

std::string Album::htmlString() {
    Pair * profile = pairWithAttributeName("htmlString");
    return profile == nullptr ? "": profile -> stringValue();
}

void Album::parseFromJSONstream(std::fstream &stream){
    //here you would put the code that was in Parse a pair
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

    //next you would make another class called artists
    //that would emulate the entity class, and this class emulates the parse a pair and at the end of this
    //function you would add the pairs to the vector album attributes
    //thats why album attributes is a vector of pairs
}
