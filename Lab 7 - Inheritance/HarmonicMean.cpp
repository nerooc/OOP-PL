#include "HarmonicMean.h"

HarmonicMean* HarmonicMean::create() {
	return new HarmonicMean;
}

double HarmonicMean::result() {

	double x = 0.;

	for (size_t i = 0; i < tab.size(); i++) {
		x += 1 / tab[i];
	}

	return tab.size() / x;
}