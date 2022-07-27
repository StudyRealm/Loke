#include<iostream>

int main()
{
	int n;
	std::cin >> n;

	for(int i=1; i<=n; i++)
	{
		for(int j=n+1-i; j>=1; j--)
		{
			std::cout << "*";
		}
		std::cout << '\n';

	}
}
