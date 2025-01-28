#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <iomanip>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();
	public:
		static void	convert(std::string input);
};

#endif