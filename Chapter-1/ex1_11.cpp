#include <iostream>

int main()
{
	int first = 0, second = 0;
	std::cout << "Please enter two numbers" << std::endl;

	std::cin >> first >> second;

	if (second < first)
	{
		int temp = second;
		second = first;
		first = temp;
	}
	
	while (first <= second)
	{
		std::cout << first  << std::endl;
		++first;
	}

	return 0;
}
