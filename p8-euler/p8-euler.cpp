#include <iostream>


#include "constants.h"
#include "LargestProduct.h"



int main(int argc, char **argv)
{
	unsigned long long p8_answ = 0;

	LargestProduct largestproduct;
	
	p8_answ = largestproduct.get_largest_product(constants::the_number, 13);


	std::cout << "The answer to the 8. problem of ProjectEuler.Net is " << p8_answ << ".\n";


	return 0;
}