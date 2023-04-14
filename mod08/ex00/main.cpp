#include <iostream>
#include "easyfind.hpp"
#include "easyfind.tpp"

int	main(void)
{
	std::vector<int> vector1;
	for (int i = 0; i < 5; i++) {
		vector1.push_back(i * 2);	
	}

	try {
		std::cout << *easyfind(vector1, 4) << std::endl;
		std::cout << *easyfind(vector1, 8) << std::endl;
		std::cout << *easyfind(vector1, 3) << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;	
	}
	return (0);
}
