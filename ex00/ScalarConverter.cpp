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

static bool isInt(const std::string& input) {
	try {
		size_t	len;
		std::stoi(input, &len);
		return	len == input.length();
	} catch (...) {
		return false;
	}
}

static bool isDouble(const std::string& input) {
	if (input == "-inf" || input == "+inf" || input == "nan") {
		return true;
	}
	try {
		size_t	len;
		std::stod(input, &len);
		return	len == input.length();
	} catch (...) {
		return false;
	}
}

static bool isFloat(const std::string& input) {
	if (input == "-inff" || input == "+inff" || input == "nanf") {
		return true;
	}
	try {
		size_t	len;
		std::stof(input, &len);
		return	len == input.length() - 1 && input.back() == 'f';
	} catch (...) {
		return false;
	}
}

static bool isChar(const std::string& input) {
	return input.length() == 1 && std::isprint(input[0]) && !std::isdigit(input[0]);
}

void	ScalarConverter::convert(std::string input) {
	if (isChar(input)) {
		char c = input[0];
		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << std::endl;
	} else if (isInt(input)) {
		int i = stoi(input);
		if (i >= 32 && i <= 126)
			std::cout << "char: " << static_cast<char>(i) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << std::endl;
	} else if (isFloat(input)) {
		float f = stof(input);
		if (f >= 32 && f <= 126)
			std::cout << "char: " << static_cast<char>(f) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if (input == "nanf")
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << (f >= std::numeric_limits<int>::min() && f <= std::numeric_limits<int>::max() ? static_cast<int>(f) : 0) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	} else if (isDouble(input)) {
		double d = stod(input);
		if (d >= 32 && d <= 126)
			std::cout << "char: " << static_cast<char>(d) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if (input == "nan")
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max() ? static_cast<int>(d) : 0) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	} else {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}
