#pragma once
#include <iostream>
#include "Path.h"

class Symlink{

friend std::ostream& operator << (std::ostream& out, const Symlink& symlink); //deklaracja przyjaźni z przeciążeniem operatora "<<"

public:
    Symlink(const std::string& startName, Path* path); //konstruktor klasy symlink, podłącza wskaźnik do path i swoją nazwę std::string
    Path* operator -> () const;  //przeciazenie operatora -> który wskazuje na podlaczony path 

private:
    Path* ptr;
    std::string symlinkName; 
    
};

std::ostream& operator << (std::ostream& out, const Symlink& symlink); //funkcja przeciazajaca operator "<<" tak by wypisywal w poprawny sposob symlinka
