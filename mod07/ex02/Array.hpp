#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <stdexcept>

template <typename T>
class Array {
	public:
		Array(void){
			_array = new T[1]();
			_size = 1;
		}
		Array(unsigned int n){
			_array = new T[n]();
			_size = n;
		}

		Array(const Array& other){
			_size = other._size;
			_array = new T[_size]();
			for (unsigned int i = 0; i < _size; i++) {
				_array[i] = other._array[i];	
			}
		}

		Array& operator= (const Array& other){
			delete []_array;
			_array = new T[other._size]();
			_size = other._size;
			for (unsigned int i = 0; i < _size; i++) {
				_array[i] = other._array[i];	
			}
			return (*this);
		}

		T& operator[] (unsigned int index){
			if (index >= _size || index < 0)
				throw std::out_of_range("error: index out_of_range");
			return (_array[index]);
		}

		~Array(void){
			delete [] _array;
		}

		/*Member functions*/
		unsigned int size(void) const {
			return (_size);
		}
		
	private:
		unsigned int _size;
		T* _array;
};

#endif
