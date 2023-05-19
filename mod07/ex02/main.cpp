#include "Array.hpp"
#include <iostream>
#include <sstream>
#include <cstdlib>

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++) {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i]) {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try {
        numbers[-2] = 0;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    try {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = rand();
    }
    delete [] mirror;//
	{
		Array<std::string> strArray(10);
		std::ostringstream str;	

		try {
			for (unsigned int i = 0; i < strArray.size(); i++) {
				str << i;
				strArray[i] = "string " + str.str();
				str.str("");
				str.clear();
			}
			Array<std::string> cpyArray(strArray);
			Array<std::string> cpyArray2 = strArray;
			std::cout << "strArray: " << strArray[1] << std::endl;
			std::cout << "strArray: " <<strArray[9] << std::endl;
			std::cout << "cpyArray: " << cpyArray[1] << std::endl;
			std::cout << "cpyArray: " << cpyArray[9] << std::endl;
			std::cout << "cpyArray2: " << cpyArray2[1] << std::endl;
			std::cout << "cpyArray2: " << cpyArray2[9] << std::endl;
			std::cout << strArray[10] << std::endl;
		}
		catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
    return 0;
}
