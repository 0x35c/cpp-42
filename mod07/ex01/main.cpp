#include "iter.hpp"
#include <iostream>
#define LEN_TAB 4

static void addToInt(int& value) {
	value += 10;
}

static void addToStr(std::string& str) {
	str += "_modified";
}

int	main(void)
{
	std::string strArray[LEN_TAB] = { "element1", "element2", "element3", "element4" };
	int intArray[LEN_TAB] = { 1, 2, 3, 4 };

	std::cout << "Arrays before iteration: " << std::endl;
	for (int i = 0; i < LEN_TAB; i++) {
		std::cout << strArray[i] << std::endl;
	}
	for (int i = 0; i < LEN_TAB; i++) {
		std::cout << intArray[i] << std::endl;
	}
	std::cout << "------------------------" << std::endl;

	iter(strArray, LEN_TAB, &addToStr);
	iter(intArray, LEN_TAB, &addToInt);

	std::cout << "Arrays after iteration: " << std::endl;
	for (int i = 0; i < LEN_TAB; i++) {
		std::cout << strArray[i] << std::endl;
	}
	for (int i = 0; i < LEN_TAB; i++) {
		std::cout << intArray[i] << std::endl;
	}

	return (0);
}
