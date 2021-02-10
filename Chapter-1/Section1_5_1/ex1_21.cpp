#include <iostream>
#include "Sales_item.h"


int main()
{
	Sales_item first, second;
	std::cin >> first >> second;
	
	if (compareIsbn(first, second))
	{
		std::cout << first + second << std::endl;
	}
	else
	{
		std::cout << "Different ISBNs" << std::endl;	
	}
	
	return 0;
}
