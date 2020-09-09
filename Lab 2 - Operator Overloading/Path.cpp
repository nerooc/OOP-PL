#include "Path.h"

Path::Path(const std::string& firstPath, char systemChar) : string{firstPath}, systemChar{'/'}{
    
}


Path Path::operator / (const std::string& sumPaths) const{
    Path temp = *this;

    if(systemChar == UNIX){
        temp.string+="/";    
    }
    else   {
        temp.string += "\\";
    }

    temp.string += sumPaths;
    return temp;

}

std::string Path::str() const{
    return string;
}


std::string Path::parent() const{
    return string.substr(0, string.find_last_of("/"));
}


std::ostream& operator << (std::ostream& out, const Path& path){
    std::cout << "Path(" << path.string << ")";
    return out;
}

void Path::reset(char changedSystem){
    systemChar = changedSystem;
    
}
