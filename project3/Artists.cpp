//
// Created by Adrian Cruz on 11/12/18.
//

#include "Artists.hpp"

#include <iostream>

EntityInstance::EntityInstance(): _numattributes{} {};
{
std::vector<Pair> entityAttributes;
_numAttributes = 0 ;
}

void EntityInstance::addAttribute(Pair &currentPair) {
    entityAttributes.push_back(currentPair);
}

int EntityInstance::numAttributes() {
    return entityAttributes.size();
}

std::vector<std::string> &EntityInstance::attributeNames() {
    std::vector<std::string> attributeNames;
    for(int i = 0; i < numAttributes(); i++)
        attributeNames.push_back(entityAttributes[i].attributeName());
    return attributeNames;
}


}
