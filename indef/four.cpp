#include<iostream>

int main()
{
	int n;
	std::cin >> n;

	for(int row=n; row>=1; row--) //row count
	{
		for (int col=row; col>=1; col--)  // print * 
			std::cout << "*";
		
		for (int spac=n-row; spac>0; spac--)
			std::cout << " ";
		
	std::cout << '\n';
	}
}
