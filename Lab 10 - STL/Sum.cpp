#include "Sum.h"

Sum sumData(Data x){
	Sum temp;
	sum s = for_each(std::begin(x.vec), std::end(x.vec), sum());
	temp.suma = s.sum;
	return temp;
    
}