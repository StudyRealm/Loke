#include<iostream>

int main()
{
	int num;
	std::cin >> num;

	for (int idx=2; idx< int(num/2) ; idx++)
	{
		if (num%idx == 0)
		{
			std::cout << "Is not a prime\n";
			return 0;
		}
	}

	std::cout << "Is a prime number\n";
	return 0;
}
