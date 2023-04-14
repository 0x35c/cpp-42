#include <iostream>
#include "MutantStack.hpp"

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
