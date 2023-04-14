#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	std::ifstream infile(av[1]);
	map dataBase;
	std::string str;
	std::string keyToken;
	std::string keyValue;

	try {
		while (std::getline(infile, str))
		{
			keyToken = getToken(str, ',', 1);
			if (checkFormatKey(keyToken) == false)
				throw std::invalid_argument("Error on the format: " + keyToken);
			keyValue = getToken(str, ',', 2);
			if (checkNumber(keyValue, true) == false)
				throw std::invalid_argument("Error on the format: " + keyValue);
			dataBase[keyToken] = std::atoi(keyValue.c_str());
		}
	}
	catch (std::exception& e) {
		 std::cout << e.what() << std::endl;
	}

	return (0);
}
