#pragma once


class LargestProduct
{
public:

	unsigned long long get_largest_product(const std::string& number_str, size_t number_of_digits)
	{
		return get_product(number_str);
	}



private:

	unsigned long long get_product(const std::string& number_str)
	{
		size_t number_of_digits = 2;
		unsigned long long max_pr = 0, product = 1;

		for (size_t i = 0; i < number_str.length(); i++)
		{
			if (is_substring_in_range(number_str,number_of_digits,i) == true)
			{
				std::string digits = number_str.substr(i, number_of_digits);

				product = 1;

				for (char letter : number_str)
				{
					unsigned long long digit = letter - 48;
					product *= digit;
				}

				if (max_pr < product) max_pr = product;

			}
			else
			{
				break;
			}

		}

		return max_pr;


	}


	bool is_substring_in_range(const std::string& number_str, size_t number_of_digits, size_t pos)
	{
		return ((pos + number_of_digits) <= (number_str.length()) );
	}



};
