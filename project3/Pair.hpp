//
// Created by Adrian Cruz on 11/5/18.
//

#ifndef PROJECT3_PAIR_HPP
#define PROJECT3_PAIR_HPP

#include <string>


class Pair
{
public:
    Pair(std::string attributeName, std::string attributeValue);
    Pair(std::string attributeName, unsigned attributeNumberValue);
    bool istheNumber();
    unsigned numberValue();
    std::string stringValue();
    std::string attributeName();

private:
    std::string _attributeName, _attributeStringValue;
    int _attributeNumberValue;
    bool _istheNumber;
};






#endif //PROJECT3_PAIR_HPP
