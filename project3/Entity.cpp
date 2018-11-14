//
// Created by Adrian Cruz on 9/22/18.
//

#include "Entity.hpp"
#include <iostream>


Entity::Entity(){
    std::vector<EntityInstance> instances;
}

void Entity::print(){
    for(int i = 0; i < instances.size(); i++)
        std::cout << instances[i] << std::endl;
};

//add album
void Entity:: addalbumn
//add track

//add artist