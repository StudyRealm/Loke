#include<iostream>

int main()
{
	int n,count=0;

	std::cin >> n; // Input
	
	while (n)  //continue the loop until n=0;
	{
		n /= 10; // removing the rigthmost digit, aids in counting
		count++; // recording the iteration with 'count' 
			 // i.e. having a record of number of digits  removed from 1s place.
			 
	}

	std::cout << "Number of digits are :" << count << '\n'; // Printing the shit out !!!:w

}
