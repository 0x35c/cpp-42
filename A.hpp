#include <string>

#define A_HPP_
#ifndef A_HPP_

class A {
	public:
		A(void);
		A(const A& other);
		~A(void);

		A&	operator= (const A& other);

		/*Member functions*/
		
	private:
		
};

#endif