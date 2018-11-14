//
// Created by Adrian Cruz on 11/12/18.
//

#ifndef PROJECT3_ARTISTS_HPP
#define PROJECT3_ARTISTS_HPP

#include "Pair.hpp"
class Artists {

    public:
        void addAttribute(Pair &);
        int numAttributes();
        std::vector<std::string> &attributeNames();
        void print();   // prints this object
        // more member functions here.

    private:
        std::vector<Pair> entityAttributes;
        // more variables here.
    };

};


#endif //PROJECT3_ARTISTS_HPP
