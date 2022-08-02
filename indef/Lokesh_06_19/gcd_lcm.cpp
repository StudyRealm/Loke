#include <iostream>
using std::cout;
using std::cin;

int main()
{
	long long int num1,num2,gcd=num2,lcm,tmp1,tmp2;
	cin >>  num1 >> num2;
	
	while (num1%num2 !=0)
	{
		int rem = num1 % num2;
		num1 = num2;
		num2 = rem;
	}

	tmp1 = num1;
	tmp2 = num2;
	
       	gcd = num2;
	// RELATION : LCM X GCD = n1 X n2 
	
	lcm = (tmp1 * tmp2) / gcd;

	cout << gcd << '\n'  << lcm << '\n';
}
