#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <climits>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <sys/time.h>

int addNumbersToDeque(std::deque<u_int32_t>& array, const char** numbers);
int addNumbersToVector(std::vector<u_int32_t>& array, const char** numbers);
void sortVectorArray(std::vector<u_int32_t>& array, int begin, int end);
void sortDequeArray(std::deque<u_int32_t>& array, int begin, int end);

#endif
