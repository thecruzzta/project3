//
// Created by Adrian Cruz on 11/6/18.
//
#include <iostream>
#include "Artist.hpp"
#include "Pair.hpp"

Artist::Artist(){
    _artistID = 0;
    _numImages = 0;
    _realName = "";
    _name = "";
    _profile = "";
}
Artist::~Artist() {

}


std::string Artist::profile() {
    Pair * profile = pairWithAttributeName("profile");
    return profile == nullptr ? "": profile -> stringValue();
}

std::string Artist::name() {
    Pair * name = pairWithAttributeName("name");
    return name == nullptr ? "": name -> stringValue();
}

std::string Artist::realName() {
    Pair * realName = pairWithAttributeName("realName");
    return realName == nullptr ? "": realName -> stringValue();
}

unsigned Artist::artistID() {
    Pair * artistID = pairWithAttributeName("artistID");
      if(artistID == nullptr)
          return 0;
      return artistID -> numberValue();
}
unsigned Artist::numImages() {
    Pair * numImages = pairWithAttributeName("numImages");
    if(numImages == nullptr)
        return 0;
    return numImages -> numberValue();
}


void Artist::print(){
    std::cout << "name: " << name() << std::endl;
    std::cout << "realname: " << realName() <<std:: endl;
    std::cout << "numImages: " << numImages() << std::endl;
    std::cout << "ArtistID: " << artistID() << std::endl;
   std::cout << "Profile: " << profile() <<std:: endl;
}

std:: string Artist::htmlString() {
    std::string output = "\t\t\t<li><p>" + name() + "</p>\n\t\t\t\t<ul>\n" +
                         "\t\t\t\t\t<li><p>artistID: " + std::to_string(artistID()) + "</p></li>\n" +
                         "\t\t\t\t\t<li><p>numImages: " + std::to_string(numImages()) + "</p></li>\n" +
                         "\t\t\t\t\t<li><p>profile: " + profile() + "</p></li>\n" +
                         "\t\t\t\t\t<li><p>realName: " + realName() + "</p></li>\n" +
                         "\t\t\t\t</ul>\n\t\t\t</li>\n";
    return output;
}