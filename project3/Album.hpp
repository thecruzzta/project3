//
// Created by Adrian Cruz on 11/7/18.
//

#ifndef PROJECT3_ALBUM_HPP
#define PROJECT3_ALBUM_HPP


#include<fstream>
#include<cstring>

class Pair;

class Album
{
public:
    Album();
    ~Album();

    std::string title();
    unsigned albumID();
    unsigned numVideos();
    unsigned numImages();
    unsigned numTracks();
    unsigned year();
    void print();
    void parseFromJSONstream(std::fstream &stream);
    std::string htmlString();

private:
    std::vector<Pair *> *albumAttributes;
    Pair *pairWithAttributeName(std::string attributeName);
};


#endif //PROJECT3_ALBUM_HPP
