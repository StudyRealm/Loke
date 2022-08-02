/*		Using the reminder by dividing the num with given base, to change the base
 *		of a given numebr.
 *
 *		INPUT =	 num
 *			 base
 *	 	OUTPUT = ans	
 */

#include<iostream>
#include<cmath>
using std::cin;
using std::cout;

int tobase(int num, int base){
	int ans=0;				//storing the reminder with correct int place
	for(int idx=0; num!=0 ;idx++){
		ans = ans +  (pow(10,idx) * (num%base));
		num /= base;
	}
	return ans;
}

int main()
{
	int num,base;		// num is in base 10
	cin >> num;
	cin >> base;

	cout << tobase(num,base) << '\n';
}
