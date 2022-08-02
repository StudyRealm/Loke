#include<iostream>

int main()
{
	long long int num1=0,num2=1,num;
	
	std::cin >> num;

	if (num>40)
		num=40;

	// contraint 1 <= n <= 40
	if (num==1)
		std::cout << num1;

	else if (num==2)
		std::cout << num1 << " " << num2;

	else{
		std::cout << num1 << " " << num2 << " ";
		
		while(num-2) // n-2 as 0 and 1 will be printed outside the loop;
		{
			int temp = num1 + num2;
			num1 = num2;
			num2 = temp;
			std::cout << num2 << " ";
			num--;
		}
	}
	std::cout << '\n';
}
