#include <string>
#include <vector>

typedef std::vector<int>::iterator const iterator;

#ifndef SPAN_HPP_
#define SPAN_HPP_

class Span {
	public:
		Span(unsigned int N);
		Span(const Span& other);
		~Span(void);

		Span& operator= (const Span& other);

		/*Member functions*/
		std::vector<int>& getVector(void);
		void addNumber(int nb);
		void addMultipleNumber(const std::vector<int>& vector);
		int shortestSpan(void);
		int longestSpan(void);
		
	private:
		Span(void);
		std::vector<int> _vector;
		unsigned int _size;
		unsigned int _pos;
};

#endif
