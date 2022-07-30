#include<iostream>

int main()

{
	int a=0, b=1, num;
	
	std::cout << "Enter last index" ;	
	std::cin >> num;
	std::cout << a << b; 

	while (num>2)
	{
		int c=a+b;
		std::cout << c;
		b = c;
		a = c-a;
		num--;	
	}
	std::cout << '\n';
}

