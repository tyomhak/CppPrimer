// Identical to Ex. 1.23
// I had implemented the solution for 1.23 in a way that it satisfies the requirements for the Ex. 1.25

// not perfect implementation, as the output order might be a bit confusing.
// might change it later (probably nevel will).


#include <iostream>
#include "Sales_item.h"


int main()
{
	Sales_item total_book;
	Sales_item book;
	size_t count = 0;
	if (std::cin >> total_book)
	{
		count = 1;
		while (std::cin >> book)
		{
			if (compareIsbn(total_book, book)) 
			{
				total_book += book;			
				++count;
			}
			else
			{
				std::cout << total_book << std::endl;
				std::cout << "Transactions: " << count << std::endl;
				total_book = book;	
			}
		}
	
		std::cout << total_book << std::endl;
		std::cout << "Transactions: " << count << std::endl;


	}
	else
		std::cout << "Exiting without any entries." << std::endl;

	return 0;
}
