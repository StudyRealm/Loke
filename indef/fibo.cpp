#include<iostream>

int main()
{
	long long int f1=0,f2=1,n;
	
	std::cin >> n;

	if (n>40)
		n=40;

	// contraint 1 <= n <= 40
	if (n==1)
		std::cout << f1;

	else if (n==2)
		std::cout << f1 << " " << f2;

	else{
		std::cout << f1 << " " << f2 << " ";
		
		while(n-2) // n-2 as 0 and 1 will be printed outside the loop;
		{
			int temp = f1 + f2;
			f1 = f2;
			f2 = temp;
			std::cout << f2 << " ";
			n--;
		}
	}
	std::cout << '\n';
}
