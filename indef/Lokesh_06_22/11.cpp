#include<iostream>

int main()
{
	int n;
	std::cin >> n;
int temp = 1;
	for (int i=1; i<=n; i++)
	{	
		for (int j=1; j<=i ; j++)
		{
			std::cout << temp << '\t';
			temp++;
		}
		std::cout << '\n';
	}
}

