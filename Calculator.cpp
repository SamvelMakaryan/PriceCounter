#include "Calculator.hpp"

Calculator::Calculator() {
	sales[Sales::none] = nullptr;
	sales[Sales::two_for_one] = two_for_one;
	sales[Sales::tree_for_one] = tree_for_one;
	sales[Sales::four_with_20_discount] = four_with_20_discount;
}

double Calculator::calculate(const Product& product, int count) {
	if (product.getSale() == Sales::none) {
		return count * product.getPrice();
	}
	return std::ceil(sales[product.getSale()](product.getPrice(), count));
}
