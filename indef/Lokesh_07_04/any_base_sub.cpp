/*
 *	Approach 1 :  Change every number to a single base (preferably base 10)
 *	then subtract those number and change the result to the prev base.
 *
 *	Approach 2 : Keep subtracting  numbers from the rightmost digit, check whether the difference
 *	preceeds the 0 limit, if yes carry a number from the next adjacent digit
 *
 *	INPUT = num1
 *		num2
 *		base
 *	OUTPUT= diff
 */

#include<iostream>
#include<cmath>
using std::cin;
using std::cout;

int basesub(int num1, int num2, int base){
	int dec=1, diff=0;

	for(int idx=0 ; (num1 > 0 || num2 > 0); idx++){
			
		int tempdiff =(num1%10) -  (num2%10);
	   	
		if(tempdiff <0){
			diff += (tempdiff + base)*pow(10,idx); // base will be added while carrying
			num1 = (num1/10) - 1;		     // subtracting 1 from num1 for carry
			num2 /= 10;
		
		}else{
			diff += (tempdiff)*pow(10,idx);	
			num1 /= 10;
			num2 /= 10;
		}
	}
	return diff;
}

int main(){
		
	int num1,num2,base;
	cin >> num1 >> num2 >>base;

	cout << basesub(num1,num2,base) << '\n'; 

}

