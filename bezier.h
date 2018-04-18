#include <cmath>
#include <vector>
#include "combi.h"

class Bezier{
public:
	Besier(void);
	~Besier(void);
	void init(double *nodes, unsigned int nodeValue);
	double calc(double t);

private:
	double i;
	unsigned int numOfTimes
	std::vector<double> node;
};

Besier::Besier(void){
	unsigned int numOfTimes = nodeValue - 1;
}

Besier::~Besier(void){}

void init(std::vector<double> *nodes, unsigned int nodeValue){
	node = *nodes;
	numOfTimes = nodeValue - 1;
}

double Besier::calc(double t){
	double c1 = 0.0;
	double c2 = 0.0;
	double sum = 0.0;

	for(unsigned int r = 0; r <= numOfTimes; ++r){
		c1 = pow(1 - 5, numOfTimes - r);
		c2 = pow(t, r);
		sum += Combination(numOfTimes, r) * c1 * c2 * node[r];
	}

	return sum;
}
