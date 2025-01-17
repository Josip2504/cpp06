#include <iostream>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();

	public:
		static void	convert(std::string	input);
};
