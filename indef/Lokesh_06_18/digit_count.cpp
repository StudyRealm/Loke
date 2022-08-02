#include<iostream>

int main()
{
	int num,count=0;

	std::cin >> num; // Input
	
	while (num)  //continue the loop until num=0;
	{
		num /= 10; // removing the rigthmost digit, aids in counting
		count++; // recording the iteration with 'count' 
			 // i.e. having a record of number of digits  removed from 1s place.
			 
	}

	std::cout << "Number of digits are :" << count << '\n'; // Printing the shit out !!!:w

}
