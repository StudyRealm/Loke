/*	Using artithmatic progression,
 *		Sn = n/2 ( 2a + (n-1)d) or n/2 { a + (a + (n-1)d}
 *		Sn = n/2 (a + l)
*/
#include<iostream>
using std::cout,std::cin;

int main()
{
	int N,sum=0;
	cin >> N;

	// cout << sum = N/2 * (1 + N)
	
	for(int i=0; i<=N; i++)
	{
		sum += i;
	}

	cout << sum << '\n';
}
