#pragma once

#include <algorithm>
#include <vector>
#include <stdexcept>

template <typename T>
typename T::iterator	easyfind(T container, int to_find)
{
	typename T::iterator it;
	
	it = find(container.begin(), container.end(), to_find);
	if (it != container.end())
		return (it);
	else
		throw std::invalid_argument("Number not found in container");
}
