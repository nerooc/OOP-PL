#include "Mean.h"

Mean& Mean::operator<<(double x) { 
	this->tab.push_back(x);
	return *this;
}

const Mean& Mean::operator<<(double x) const { 
	std::cout << "cannot add value " << x << " to const" << std::endl;
	return *this;
}

std::ostream& operator<<(std::ostream& o, const Mean& mean) {
	return o << mean.name;
}