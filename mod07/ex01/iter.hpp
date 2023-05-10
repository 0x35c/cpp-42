#ifndef ITER_HPP_
#define ITER_HPP_

template <typename array, typename func>
void iter(array& addrArray, int length, func addrFunc)
{
	for (int i = 0; i < length; i++) {
		addrFunc(&addrArray[i]);	
	}
}

#endif
