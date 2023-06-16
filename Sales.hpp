#ifndef SALES_HPP_
#define SALES_HPP_
#include <cmath>

enum class Sales {
	none,
	two_for_one,
	tree_for_one,
	four_with_20_discount,
};

double two_for_one(double price, int count);
double tree_for_one(double price, int count);
double four_with_20_discount(double price, int count);


#endif //SALES_HPP_


	

