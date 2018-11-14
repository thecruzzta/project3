//
// Created by Adrian Cruz on 11/6/18.
//

#ifndef PROJECT3_ARTIST_HPP
#define PROJECT3_ARTIST_HPP

#include<fstream>
#include<cstring>
#include <vector>

class Pair;

class Artist {
// vector artistAttributes is a vector of Pairs of artist attributes.
// Function, pairWithAttributeName, given an attribute name like "profile",
// returns a pointer to the pair whose key value contains string, "profile".
// Otherwise, it return nullptr. Therefore, the implementation of
// std::string Artist::profile() could be:
// std::string Artist::profile() {
//    Pair *profile = pairWithAttributeName("profile");
//    return profile == nullptr ? "" : profile->stringValue();
// }


    public:
        Artist();
        ~Artist();

        std::string profile();
        std::string name();
        std::string realName();
        unsigned    numImages();
        unsigned    artistID();
        void parseFromJSONstream(std::fstream &stream);
        void print();
        std::string htmlString();

    private:
        std::vector<Pair *> *artistAttributes;
        Pair *pairWithAttributeName(std::string attributeName);
    std::string _name, _realName, _profile;
    unsigned _numImages, _artistID;
};


#endif //PROJECT3_ARTIST_HPP
