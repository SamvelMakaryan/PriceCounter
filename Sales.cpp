#include "Sales.hpp"

double two_for_one(double price, int count) {
	int least = count % 2;
	return (least) * price + (count - least) / 2 * price;
}

double tree_for_one(double price, int count) {
	int least = count % 3;
	return (least) * price + (count - least) / 3 * price;
}

double four_with_20_discount(double price, int count) {
	if (count < 4) {
		return count * price;
	}
	return (count * price) - (count * price * 0.2);
}

