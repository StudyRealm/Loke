#include<iostream>

int main()
{
	int a;
	std::cin >> a;

	for (int i=2; i< int(a/2) ; i++)
	{
		if (a%i == 0)
		{
			std::cout << "Is not a prime\n";
			return 0;
		}
	}

	std::cout << "Is a prime number\n";
	return 0;
}
