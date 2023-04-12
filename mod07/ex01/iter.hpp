template <typename array, typename func>
void	iter(array& addrArray, int length, func addrFunc)
{
	for (int i = 0; i < length; i++) {
		addrFunc(&addrArray[i]);	
	}
}
