//
// Created by Adrian Cruz on 11/5/18.
//

#include "Track.hpp"
#include "Pair.hpp"

Track::Track(){
    _rtistID = 0;
    _numImages = 0;
    _realName = "";
    _name = "";
    _profile = "";
}
Track::~Track() {

}

std::string Track::artistName() {
    Pair * profile = pairWithAttributeName("artistName");
    return profile == nullptr ? "": profile -> stringValue();
}

std::string Track::title() {
    Pair * profile = pairWithAttributeName("title");
    return profile == nullptr ? "": profile -> stringValue();
}

std::string Track::albumName() {
    Pair * profile = pairWithAttributeName("albumName");
    return profile == nullptr ? "": profile -> stringValue();
}

std::string Track::duration() {
    Pair * profile = pairWithAttributeName("duration");
    return profile == nullptr ? "": profile -> stringValue();
}

std::string Track::position() {
    Pair * profile = pairWithAttributeName("duration");
    return profile == nullptr ? "": profile -> stringValue();
}

unsigned Track::albumID() {
    Pair * artistID = pairWithAttributeName("albumID");
    if(artistID == nullptr)
        return 0;
    return albumID -> numberValue();
}

std::string Track::htmlString() {
    Pair * profile = pairWithAttributeName("htmlString");
    return profile == nullptr ? "": profile -> stringValue();
}

void Track::print(){
    std::cout << "artistName: " << artistName() << std::endl;
    std::cout << "albumName: " << albumName() <<std:: endl;
    std::cout << "duration: " << duration() << std::endl;
    std::cout << "position: " << position() << std::endl;
    std::cout << "albumID: " << albumID() << std::endl;
}
