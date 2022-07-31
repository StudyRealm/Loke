/*
 *	 Deducing Algorithm
 *
 */


#include<iostream>
#include<cmath>

using std::cin;
using std::cout;
int main()
{
	int num,key;
	cin >> num >> key;

	int count=0,temp=num;

	while(temp!=0)
	{
		temp /=10;
		count++;
	}	
	
	int first, last,rotate,div;
       	
	if (key > 0)
	{
	        div = int(pow(10,abs(key)));
		first = num/div;	// count - key = no of digits in first.
		last= num%div;	// key = num of digits in last	
		rotate = (last*pow(10,count - key)) + first;


	}
	else if( key < 0)
	{
		div = int(pow(10,count -abs(key)));
		first = num/div;	// num of digit = key 
		last = num%div;		// num of digit = count - key
		rotate = last*pow(10,abs(key)) + first;
	}

	
	cout << rotate << '\n';
	
}
