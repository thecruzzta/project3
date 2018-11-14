//
// Created by Adrian Cruz on 11/5/18.
//

#include "Pair.hpp"
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

Pair:: Pair(std::string attributeName, std::string attributeValue) : _attributeName(attributeName),
                                                                     _attributeStringValue(attributeValue){}
Pair:: Pair(std::string attributeName, unsigned attributeNumbervalue) : _attributeName (attributeName), _attributeNumberValue (attributeNumbervalue),
_istheNumber{true}, _attributeStringValue{""} {}

bool Pair::istheNumber(){ return _istheNumber; }

std:: string Pair::stringValue() {return _attributeStringValue}
//    _attributeStringValue = x;
//    return _attributeStringValue;


std::string Pair ::attributeName() {
    return _attributeName;
}

