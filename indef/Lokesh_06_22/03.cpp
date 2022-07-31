#include<iostream>

int main()
{
	int n;
	std::cin >> n;

	for (int i=1; i<=n;i++)
	{	
		for (int j=1;j<=n-i;j++)  //spaces
		{
			std::cout<< " ";
		}
		for (int k=1; k<=i;k++)  // stars in spaces left in n x n matrix
		{
			std::cout << "*";
		}
		std::cout << '\n';

	}
}
