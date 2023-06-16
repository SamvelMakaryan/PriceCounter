#include <iostream>
#include "Calculator.hpp"
#include "Product.hpp"
#include "Sales.hpp"

int main() {
	Product arr[4] {
						{"bread", 120.0, Sales::none},
						{"milk", 350.50, Sales::two_for_one},
						{"water", 78.89, Sales::tree_for_one},
						{"meat", 470.82, Sales::four_with_20_discount}
					};
	Calculator cal;
	std::cout << "2 breads will cost " << cal.calculate(arr[0], 2) << std::endl;
	std::cout << "5l milk will cost " << cal.calculate(arr[1], 5) << std::endl;
	std::cout << "3l water will cost " << cal.calculate(arr[2], 3) << std::endl;
	std::cout << "10kg meat will cost " << cal.calculate(arr[3], 10) << std::endl;
}
