#ifndef CALCULATOR_HPP_
#define CALCULATOR_HPP_
#include <unordered_map>
#include <functional>
#include "Product.hpp"
#include "Sales.hpp"

class Calculator {
public:
	Calculator();
	~Calculator() = default;
	double calculate(const Product&, int);
private:
	std::unordered_map<Sales, std::function<double(double, int)>> sales; 
};

#endif //CALCULATOR_HPP_
