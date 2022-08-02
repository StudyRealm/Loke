/* TEST CODE 
int baseadd(int num1, int num2, int base){
	int sum=0,inc=0, nxtinc=0;
	int count=0; 			// counting number of digits in a number, for last nxtinc

	for(int i =0;((num1>num2?num1 : num2)!=0);i++){
		int tempsum = (num1%10) + (num2%10) + nxtinc; // adding digit + prev increments
		
		if (tempsum >= base){  		// checking whether tempsumn >= base

			while (tempsum>base){
				tempsum -= base;	// reducing tempsum
				inc++;			// saving increments
			}

			sum += tempsum*pow(10,i);  // Here increment represents prev inc
								  
			nxtinc = inc;		// Here increment is defined for next iteration.
			num1 /=10;
			num2 /=10;


		}else{
			sum += tempsum*pow(10,i);
			
			nxtinc=0; 		//NECESSARY or it will increment the next value
			num1 /=10;
			num2 /=10;
		}
		count++;
	}
	// adding the last increment
	
	if  (nxtinc!=0){
		sum += nxtinc*pow(10,++count);
	}
		
	return sum;
}
*/







/*
 *	Approach 1 :  Change every number to a single base (preferably base 10)
 *	then add those number and change the result to the prev base.
 *
 *	Approach 2 : Keep adding numbers from the rightmost digit, check whether the sum exceeds the
 *	gives base or not, if it does increment the next digite place accordingly.
 *
 *	INPUT = num1
 *		num2
 *		base
 *	OUTPUT= ans
 */

#include<iostream>
#include<cmath>
using std::cin;
using std::cout;

int baseadd(int num1, int num2, int base){
	int inc=0,sum=0;
	for(int idx=0 ; (num1 > 0 || num2 > 0 || inc > 0); idx++){
		int tempsum =(num1%10) + (num2%10) + inc;      //adding digits with corresponding inc
		inc = tempsum/base; 			       // Quotient			
		sum += tempsum%base*pow(10,i);		       // Reminder
		num1 /= 10;
		num2 /= 10;
	}
	return sum;
}

int main(){
		
	int num1,num2,base;
	cin >> num1 >> num2 >>base;

	cout << baseadd(num1,num2,base) << '\n'; 

}
