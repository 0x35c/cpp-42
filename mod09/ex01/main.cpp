#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 2) {
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}
