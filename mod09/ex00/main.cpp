#include "BitcoinExchange.hpp"

// This function will check the database format 
// which should be as following: yyyy-mm-dd,value
static map parseDatabase(std::ifstream& infile)
{
	map database;
	std::string str;
	std::string keyToken;
	std::string keyValue;

	while (std::getline(infile, str))
	{
		keyToken = getToken(str, ',', 1);
		if (checkFormatKey(keyToken) == false)
			throw std::invalid_argument("Error on the format: " + keyToken);
		keyValue = getToken(str, ',', 2);
		if (checkNumber(keyValue, true) == false)
			throw std::invalid_argument("Error on the format: " + keyValue);
		database.insert(std::pair<std::string, float>(keyToken, std::atof(keyValue.c_str())));
	}
	return (database);
}

// This function will check the input format 
// which should be as following: date | value
//
// It will then print the date and its value
// or the error message corresponding
static map printInput(std::ifstream& infile, map& database)
{
	map map;
	std::string str;
	std::string keyToken;
	std::string keySep;
	std::string keyValue;

	while (std::getline(infile, str))
	{
		keyToken = getToken(str, ' ', 1);
		keySep = getToken(str, ' ', 2);
		keyValue = getToken(str, ' ', 3);
		if (checkFormatKey(keyToken) == false)
			std::cout << "Error on date: " + str << std::endl;
		else if (keySep != "|")
			std::cout << "Error on format: " + str << std::endl;
		else if (checkNumber(keyValue, true) == false)
			std::cout << "Error on value: " + str << std::endl;
		else {
			printDate(database, keyValue, keyToken);
		}
	}
	return (map);
}

int	main(int ac, char **av)
{
	map database;
	map input;

	// Quick check of the args (number and format)
	if (ac != 2) {
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	else if (*av[1] == '\0') {
		std::cout << "Error: no input file" << std::endl;
		return (EXIT_FAILURE);
	}

	// Opening of the database
	std::ifstream dbInfile(DB_PATH);
	if (dbInfile.good() == false) {
		std::cout << "Error: couldnt open " << DB_PATH << std::endl;
		return (EXIT_FAILURE);
	}
	try {
		database = parseDatabase(dbInfile);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	// Opening of the input file
	std::ifstream inpInfile(av[1]);
	if (inpInfile.good() == false) {
		std::cout << "Error: couldnt open " << av[1] << std::endl;
		return (EXIT_FAILURE);
	}
	printInput(inpInfile, database);

	return (EXIT_SUCCESS);
}
