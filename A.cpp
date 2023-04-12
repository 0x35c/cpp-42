#include "A.hpp"
#include <iostream>

A::A(void){
	std::cout << "Default constructor called" << std::endl;
}

A::A(const A& fixed){
	std::cout << "Copy constructor called" << std::endl;
}

A&	A::operator=(const A &fixed){
	return (*this);
}

A::~A(void){
	std::cout << "Destructor called" << std::endl;
}
