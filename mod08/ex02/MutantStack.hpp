#include <stack>

#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack(void);
		MutantStack(const MutantStack& other);
		~MutantStack(void);

		MutantStack&	operator= (const MutantStack& other);
		typedef typename std::deque<T>::iterator iterator;

		/*Member functions*/
		iterator begin(void);
		iterator end(void);
};

#include "MutantStack.tpp"

#endif

