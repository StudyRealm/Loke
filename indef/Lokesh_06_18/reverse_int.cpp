#include<iostream>

int main()
{
	long long int num,rev=0,temp;
	std::cin >> num;
	temp = num;
	
	// If 0 comes to the rightmost  position, we have to store the count beforehand.
	int count=0;
	while(num)
	{
		num/=10;
	       	count++;
	}

	// By the end of first loop, n=0, use a temp variable to store it's value initially.
	// And use that value for further iterations
	
	for(; count >0 ;count--)
	{
		//printf("%d", count); ignore :)
		rev = (rev*10) + (temp%10);
		temp /= 10;
	}	

	std::cout << rev << '\n';

}

