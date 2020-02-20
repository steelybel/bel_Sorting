#include "sort.h"

std::vector<int> bubbleSort(std::vector<int> input)
{
	std::vector<int> the = input;
	bool sorted = false;
	int loopzBarkley = input.size() - 1;
	while (!sorted)
	{
		sorted = true;
		for (int i = 0; i < loopzBarkley; i++)
		{
			if (the[i] < the[i + 1])
			{
				std::swap(the[i], the[i + 1]);
				sorted = false;
			}
		}
		loopzBarkley--;
	}
	return the;
}