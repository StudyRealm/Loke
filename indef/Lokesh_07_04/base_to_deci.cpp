/*	Using the product of rightmost digit with base to the power of the ith index
 *	of 10, to change the number from any base to base 10
 *
 *	INPUT = num
 *		base
 *	OUTPUT= ans	
 */

#include<iostream>
#include<cmath>
using std::cin, std::cout; // *WARNING : use of multiple declarators in a single
			    // using declaration is a c++17 extension

int todeci(int num, int base){
	int ans=0;
	for(int idx=0; num!=0 ;idx++){
		ans = ans + (num%10 * pow(base,idx));
		num /= 10;		// removing tha last digit after computing 

	}
	return ans;
}

int main()
{
	int num,base;  // number is in the given base
	cin >> num;
	cin >> base;
	cout << todeci(num,base) << '\n';
}

