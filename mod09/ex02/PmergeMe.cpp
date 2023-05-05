#include "PmergeMe.hpp"

bool ft_isdigit(const std::string& str) {
	return (str.find_first_not_of("0123456789") == std::string::npos);
}

int addNumbersToVector(std::vector<u_int32_t>& array, const char** numbers) {
	long nb;

	for (int i = 0; numbers[i]; i++) {
		if (ft_isdigit(numbers[i]) == false) {
			std::cerr << "Error: invalid argument" << std::endl; 
			return (-1);
		}
		else {
			nb = std::atol(numbers[i]);
			if (nb > UINT_MAX) {
				std::cerr << "Error: overflow" << std::endl; 
				return (-1);
			}
			else if (std::find(array.begin(), array.end(), nb) != array.end()) {
				std::cerr << "Error: duplicate number" << std::endl; 
				return (-1);
			}
		}
		array.push_back(nb);	
	}
	return (0);
}

int addNumbersToDeque(std::deque<u_int32_t>& array, const char** numbers) {
	long nb;

	for (int i = 0; numbers[i]; i++) {
		if (ft_isdigit(numbers[i]) == false) {
			std::cerr << "Error: invalid argument" << std::endl; 
			return (-1);
		}
		else {
			nb = std::atol(numbers[i]);
			if (nb > UINT_MAX) {
				std::cerr << "Error: overflow" << std::endl; 
				return (-1);
			}
			else if (std::find(array.begin(), array.end(), nb) != array.end()) {
				std::cerr << "Error: duplicate number" << std::endl; 
				return (-1);
			}
		}
		array.push_back(nb);	
	}
	return (0);
}

static void mergeDequeArray(std::deque<u_int32_t>& array, int begin, int mid, int end) {
	u_int32_t *mergedArray = new u_int32_t[end + 1];
	int i = begin;
	int j = mid + 1;
	int k = begin;

	while (i <= mid && j <= end) {
		if (array[i] < array[j]) {
			mergedArray[k] = array[i];
			k++;
			i++;
		}
		else {
			mergedArray[k] = array[j];
			k++;
			j++;
		}
	}
	while (i <= mid) {
		mergedArray[k] = array[i];
		k++;
		i++;
	}
	while (j <= end) {
		mergedArray[k] = array[j];
		k++;
		j++;
	}
	for (i = begin; i < k; i++) {
		array[i] = mergedArray[i];	
	}
	delete []mergedArray;
}

void sortDequeArray(std::deque<u_int32_t>& array, int begin, int end) {
	if (begin < end) {
		int mid = (begin + end) / 2;
		sortDequeArray(array, begin, mid);
		sortDequeArray(array, mid + 1, end);
		mergeDequeArray(array, begin, mid, end);
	}
}

static void mergeVectorArray(std::vector<u_int32_t>& array, int begin, int mid, int end) {
	u_int32_t *mergedArray = new u_int32_t[end + 1];
	int i = begin;
	int j = mid + 1;
	int k = begin;

	while (i <= mid && j <= end) {
		if (array[i] < array[j]) {
			mergedArray[k] = array[i];
			k++;
			i++;
		}
		else {
			mergedArray[k] = array[j];
			k++;
			j++;
		}
	}
	while (i <= mid) {
		mergedArray[k] = array[i];
		k++;
		i++;
	}
	while (j <= end) {
		mergedArray[k] = array[j];
		k++;
		j++;
	}
	for (i = begin; i < k; i++) {
		array[i] = mergedArray[i];	
	}
	delete []mergedArray;
}

void sortVectorArray(std::vector<u_int32_t>& array, int begin, int end) {
	if (begin < end) {
		int mid = (begin + end) / 2;
		sortVectorArray(array, begin, mid);
		sortVectorArray(array, mid + 1, end);
		mergeVectorArray(array, begin, mid, end);
	}
}
