#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	map database;
	map input;

	// Quick check of the args (number and format)
	if (ac != 2) {
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	else if (*av[1] == '\0') {
		std::cerr << "Error: no input file" << std::endl;
		return (EXIT_FAILURE);
	}

	// Opening of the database
	std::ifstream dbInfile(DB_PATH);
	if (dbInfile.good() == false) {
		std::cerr << "Error: couldnt open " << DB_PATH << std::endl;
		return (EXIT_FAILURE);
	}
	try {
		database = parseDatabase(dbInfile);
	}
	catch (std::invalid_argument& e) {
		std::cerr << e.what() << std::endl;
		return (EXIT_FAILURE);
	}

	// Opening of the input file
	std::ifstream inpInfile(av[1]);
	if (inpInfile.good() == false) {
		std::cerr << "Error: couldnt open " << av[1] << std::endl;
		return (EXIT_FAILURE);
	}
	printInput(inpInfile, database);

	return (EXIT_SUCCESS);
}
