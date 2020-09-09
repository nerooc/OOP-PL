#include "Symlink.h"

Symlink::Symlink(const std::string& startName, Path* path){
    symlinkName = startName;
    ptr = path;
};


std::ostream& operator << (std::ostream& out, const Symlink& symlink){
    std::cout <<"Symlink(" << symlink.symlinkName << ")" <<std::endl;   
    return out;
}

Path* Symlink::operator -> () const{
    return ptr;
}
