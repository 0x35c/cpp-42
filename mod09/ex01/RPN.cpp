#include "RPN.hpp"

/* bool ft_isdigit(const std::string& str) { */
/* 	return (str.find_first_not_of("0123456789") == std::string::npos); */
/* } */

static bool isOperator(char c) {
	return (c == '*' || c == '+' || c == '/' || c == '-');
}

static unsigned int processOperation(unsigned int nb1, unsigned int nb2, char op) {
	switch (op) {
		case '*':
			return (nb1 * nb2);
			break;
		case '/':
			{
				if (nb2 == 0) {
					std::cerr << "Error: division by zero" << std::endl;
					std::exit(EXIT_FAILURE);
				}
				return (nb1 / nb2);
			}
			break;
		case '-':
			return (nb1 - nb2);
			break;
		case '+':
			return (nb1 + nb2);
			break;
		default:
			return (0);
	}
}

unsigned int calculateRPN(const char* number) {
	std::stack<unsigned int> numberStack;
	unsigned int nb1;
	unsigned int nb2;
	unsigned int result;
	
	for (int i = 0; number[i]; i++) {

		if (std::isdigit(number[i]))
			numberStack.push(std::atoi(&(number[i])));
		else if (isOperator(number[i])) {
			nb2 = numberStack.top();
			numberStack.pop();
			nb1 = numberStack.top();
			numberStack.pop();
			result = processOperation(nb1, nb2, number[i]);
			numberStack.push(result);
			if (number[i + 1])
				i++;
		}
		else if (number[i] != ' ') {
			std::cerr << "Error: invalid character" << std::endl;
			std::exit(EXIT_FAILURE);
		}
	}
	result = numberStack.top();
	return (result);
}
