//
// Created by Adrian Cruz on 9/22/18.
//

#ifndef PROJECT1_JSONPARSER_HPP
#define PROJECT1_JSONPARSER_HPP


#include "Entity.hpp"

class JSONParser {
public:
    JSONParser(JSONTokenizer &tokenizer);

    Pair parseAPair();
    EntityInstance parseJSONObject();
    Entity parseJSONEntity();


private:
    JSONTokenizer &tokenizer;
};



#endif //PROJECT1_JSONPARSER_HPP
