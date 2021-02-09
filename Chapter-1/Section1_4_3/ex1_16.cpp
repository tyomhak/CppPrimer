#include <iostream>

int main()
{
	int sum = 0;
	int num = 0;
	for (;std::cin >> num;)
	{
		sum += num;
	}
	
	std::cout << "Sum is : " << sum << std::endl;
	
	return 0;
}
