#ifndef PRODUCT_HPP_
#define PRODUCT_HPP_
#include <string>
#include "Sales.hpp"

class Product {
public:
	Product(const std::string&, double, Sales);
	~Product() = default;
	std::string getName() const;
	double getPrice() const;
	Sales getSale() const;	
	void setName(const std::string&);
	void setPrice(double);
	void setSale(Sales);
private:
	std::string m_name;
	double m_price;
	Sales m_sale;		
};

#endif //PRODUCT_HPP_
