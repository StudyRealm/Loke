#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	for (int row=n; row<=1; row--)
	{
		for (int col=row; col<=1;col--)
			std::cout << "*";

		for (int spac=0; spac=n-row;spac++)
			std::cout << " ";
		std::cout << '\n';
	}
}

