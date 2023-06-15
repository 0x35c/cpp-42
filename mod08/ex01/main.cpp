#include <iostream>
#include "Span.hpp"

int	main(void)
{
	{
		Span sp = Span(5);
		Span sp2 = Span(50);

		try {
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;

			sp2.addMultipleNumbers(sp.getVector());
			sp2.addNumber(170);
			sp2.addNumber(-3);

			std::cout << sp2.shortestSpan() << std::endl;
			std::cout << sp2.longestSpan() << std::endl;
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;	
		}
	}
	return (0);
}
