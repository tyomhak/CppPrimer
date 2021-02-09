#include <iostream>


int first()
{
	int sum = 0;
	for (int val = 50; val <= 100; ++val)
	{
		sum += val;
	}
	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

	return 0;	
}


int second()
{
	for (int val = 10; val >= 0; --val)
	{
		std::cout << val << std::endl;
	}

	return 0;
}


int main()
{
	second();
	return 0;
}
