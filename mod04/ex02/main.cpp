/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:50:42 by ulayus            #+#    #+#             */
/*   Updated: 2023/04/06 10:21:27 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#define LEN_ARRAY 10

int main()
{
	const AAnimal*	array[LEN_ARRAY];

	for (int i = 0; i < LEN_ARRAY; i++){
		if (i % 2)
		{
			array[i] = new Dog();
			((Dog *)array[i])->setIdea(6, "Idea number 7");
		}
		else
		{
			array[i] = new Cat();
			((Cat *)array[i])->setIdea(3, "Idea number 4");
		}
		std::cout << array[i]->getType() << " " << std::endl;
		array[i]->makeSound(); //will output the cat sound!
	}
	std::cout << "Idea number 4 of the first cat: " << ((Cat *)array[0])->getIdea(3) << std::endl;
	std::cout << "Idea number 7 of the first dog: " << ((Cat *)array[1])->getIdea(6) << std::endl;

	const AAnimal*	newDog((Dog *)array[1]);
	std::cout << "Idea number 4 of the new " << ((Dog *)newDog)->getType() << ": " << ((Dog *)newDog)->getIdea(6) << std::endl;

	for (int i = 0; i < LEN_ARRAY; i++){
		delete array[i];
	}

	return 0;
}
