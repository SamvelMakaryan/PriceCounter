#include "Product.hpp"

Product::Product(const std::string& name, double price, Sales sale) 
	: m_name(name),
	  m_price(price),
	  m_sale(sale) {}

std::string Product::getName() const {
	return m_name;
}

double Product::getPrice() const {
	return m_price;
}

Sales Product::getSale() const {
	return m_sale;
}

void Product::setName(const std::string& name) {
	m_name = name;
}

void Product::setPrice(double price) {
	m_price = price;
}

void Product::setSale(Sales sale) {
	m_sale = sale;
}
