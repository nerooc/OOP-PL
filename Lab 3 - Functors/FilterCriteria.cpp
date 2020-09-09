#include "FilterCriteria.h"
#include <iostream>
#include <functional>
#include <vector>

void FilterCriteria::add(const std::function<bool(int)> &func){
    funcTab.push_back(func);
}

int FilterCriteria::size(){
    return funcTab.size();
}

const std::function<bool(int)> FilterCriteria::get(int x){
    return funcTab[x];
}