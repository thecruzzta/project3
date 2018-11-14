//
// Created by Adrian Cruz on 9/22/18.
//

#ifndef PROJECT1_ENTITY_HPP
#define PROJECT1_ENTITY_HPP



class Entity {
public:
    Entity();

    void addObject(EntityInstance &);
    void print();    // prints all instances of this Entity.
    // more member functions here.

private:
    std::vector<EntityInstance> instances;
};


#endif //PROJECT1_ENTITY_HPP
