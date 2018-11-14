//
// Created by Adrian Cruz on 11/5/18.
//

#ifndef PROJECT3_TRACK_HPP
#define PROJECT3_TRACK_HPP


#include<fstream>
#include<cstring>
#include "Pair.hpp"

class Track
{
public:
    std::string artistName();
    std::string title();
    std::string albumName();
    unsigned albumID();
    std::string duration();
    std::string position();
    void parseFromJSONstream(std::fstream &stream);
    void print();
    std::string htmlString();

private:
    std::vector<Pair *> *trackAttributes;
    Pair *pairWithAttributeName(std::string attributeName);
    std::string _name, _realName, _profile;
    unsigned _numImages, _artistID;
};



#endif //PROJECT3_TRACK_HPP
