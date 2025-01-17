#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const& other) {
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	if (this != &other) {}
	return (*this);
}

ScalarConverter::~ScalarConverter() {}

void	ScalarConverter::convert(std::string input) {

}
