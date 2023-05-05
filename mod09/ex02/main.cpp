#include "PmergeMe.hpp"
#include <sys/select.h>

int	main(int ac, char **av)
{
	if (ac < 2) {
		std::cout << "Error: wrong number of arguments" << std::endl; return (EXIT_FAILURE); }
	std::vector<u_int32_t> vectorArray;
	std::deque<u_int32_t> dequeArray;
	double timeVector;
	double timeDeque;
	timeval startTime;
	timeval endTime; 

	// Add numbers to both vector and deque containers, -1 is returned
	// if the input is negative, contains not-a-digit char or is greater
	// than UINT_MAX
	if (addNumbersToVector(vectorArray, (const char**)(av + 1)) == -1)
		return (EXIT_FAILURE);
	if (addNumbersToDeque(dequeArray, (const char**)(av + 1)) == -1)
		return (EXIT_FAILURE);

	std::cout << "Before: ";
	for (int i = 0; i < ac - 1; i++) {
		std::cout << vectorArray[i] << " ";
	}
	std::cout << std::endl;

	gettimeofday(&startTime, NULL);
	sortVectorArray(vectorArray, 0, ac - 2);
	gettimeofday(&endTime, NULL);
	timeVector = endTime.tv_usec - startTime.tv_usec;
	gettimeofday(&startTime, NULL);
	sortDequeArray(dequeArray, 0, ac - 2);
	gettimeofday(&endTime, NULL);
	timeDeque = endTime.tv_usec - startTime.tv_usec;

	std::cout << "After: ";
	for (int i = 0; i < ac - 1; i++) {
		std::cout << vectorArray[i] << " ";
	}
	std::cout << std::endl;

	// Display of the time used by each algorithm to sort numbers
	std::cout << "Time to process a range of " << ac - 1
			  << " with std::deque : " << timeDeque << " micro seconds"
			  << std::endl;
	std::cout << "Time to process a range of " << ac - 1
			  << " with std::vector : " << timeVector << " micro seconds"
			  << std::endl;

	return (EXIT_SUCCESS);
}
