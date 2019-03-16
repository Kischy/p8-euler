#pragma once


class LargestProduct
{
public:

	unsigned long long get_largest_product(const std::string& number_str, const size_t number_of_digits) const
	{
		if (is_string_to_small(number_str, number_of_digits)) return 0;

		if (!is_string_a_number(number_str)) return 0;

		return get_max_product(number_str,number_of_digits);
	}



private:

	bool is_string_a_number(const std::string& number_str) const
	{

		for (char letter : number_str)
		{
			if (!is_number(letter)) return false;
		}

		return true;
	}

	bool is_number(const char letter) const
	{
		if ((letter < '0') || (letter > '9')) return false;

		return true;
	}


	bool is_string_to_small(const std::string& number_str, const size_t number_of_digits) const
	{
		return number_of_digits > number_str.length();
	}

	unsigned long long get_max_product(const std::string& number_str, const size_t number_of_digits) const
	{
		unsigned long long max_pr = 0, pr = 1;

		for (size_t pos = 0; pos < number_str.length(); ++pos)
		{
			if (is_substring_in_range(number_str,number_of_digits,pos) == true)
			{
				pr = get_product(number_str.substr(pos, number_of_digits));

				if (max_pr < pr) max_pr = pr;

			}
			else
			{
				break;
			}

		}

		return max_pr;


	}



	unsigned long long get_product(const std::string& digits) const
	{
		unsigned long long pr = 1, digit = 1;

		for (char letter : digits)
		{
			digit = letter - '0';
			pr *= digit;
		}

		return pr;
	}


	bool is_substring_in_range(const std::string& number_str, const size_t number_of_digits, const size_t pos) const
	{
		return ((pos + number_of_digits) <= (number_str.length()) );
	}



};
