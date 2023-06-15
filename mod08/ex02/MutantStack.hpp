#pragma once

#include <stack>

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

template <typename T>
MutantStack<T>::MutantStack(void){
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other){
	*this = other;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &other){
	*this = other;
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) {
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void){
	return (this->c.end());
}

template <typename T>
MutantStack<T>::~MutantStack(void){
}
