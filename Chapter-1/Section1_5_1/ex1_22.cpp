#include <iostream>
#include "Sales_item.h"


int main()
{
	Sales_item total_book;
	Sales_item book;
	if (std::cin >> total_book)
	{
		while (std::cin >> book)
		{
			if (compareIsbn(total_book, book)) 
				total_book += book;			
		}
	
		std::cout << total_book << std::endl;
	}
	else
		std::cout << "Exiting without any entries." << std::endl;

	return 0;
}
