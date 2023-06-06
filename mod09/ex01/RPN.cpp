#include "RPN.hpp"

static bool isOperator(char c);
static void checkOperators(std::string input);
static int processOperation(int nb1, int nb2, char op);

static void checkOperators(std::string input) {
	int operators = 0;
	bool op = false;
	int numbers = 0;

	for (size_t i = 0; i < input.length(); ++i) {
		if (isOperator(input[i])) {
			if (op == false)
				throw (std::invalid_argument("Error: wrong number of operators/numbers\n"));
			op = false;
			++operators;
		}
		else if (std::isdigit(input[i])) {
			op = true;
			++numbers;
		}
	}
	if (numbers != operators + 1)
		throw (std::invalid_argument("Error: wrong number of operators/numbers\n"));
}

static bool isOperator(char c) {
	return (c == '*' || c == '+' || c == '/' || c == '-');
}

static int processOperation(int nb1, int nb2, char op) {
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

int calculateRPN(const char* number) {
	std::stack<unsigned int> numberStack;
	unsigned int nb1;
	unsigned int nb2;
	int result;
	
	checkOperators(number);
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
		else if (number[i] != ' ')
			throw (std::invalid_argument("Error: invalid character\n"));
	}
	result = numberStack.top();
	return (result);
}
