#include <iostream>
#include "sort.h"
int main()
{
	int input = 0;
	std::vector<int> arr(10,0);
	for (int a = 0; a < 10; a++)
	{
		std::cout << "Entry no. " << a + 1 << "/10 >";
		std::cin >> input;
		arr[a] = input;
	}
	std::cout << "The list will now be sorted." << std::endl;
	std::cin.ignore();
	arr = bubbleSort(arr);
	for (int a = 0; a < 10; a++)
	{
		std::cout << "Entry no. " << a + 1 << "/10 = " << arr[a] << std::endl;
	}
	std::cin.ignore();
	return 0;
}