#include "RPN.hpp" 

int main(int ac, char **av)
{
	if (ac != 2) {
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	else if (*av[1] == '\0') {
		std::cerr << "Error: empty input" << std::endl;
		return (EXIT_FAILURE);
	}

	int result;

	try {
		result = calculateRPN(av[1]);
		std::cout << result << std::endl;
	}
	catch (std::invalid_argument& e) {
		std::cerr << e.what();
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}
