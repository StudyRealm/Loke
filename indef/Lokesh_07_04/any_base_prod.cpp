/*
 *	Approach 1 :  Change every number to a single base (preferably base 10)
 *	then multiply those number and change the result to the prev base.
 *
 *	Approach 2 : Multiply num1 with individual digit of num2
 *
 *	INPUT = num1
 *		num2
 *		base
 *	OUTPUT= prod
 */


#include<iostream>
#include<cmath>
using std::cin;
using std::cout;

//Function to add two numbers of given base;

int baseadd(int num1, int num2, int base){
	int inc=0,sum=0;
	for(int idx=0 ; (num1 > 0 || num2 > 0 || inc > 0); idx++)
	{
		int tempsum =(num1%10) + (num2%10) + inc;      //adding digits with corresponding inc
		inc = tempsum/base; 			      // Quotient			
		sum += (tempsum%base)*pow(10,idx);	      // Adding Reminder top sum
		num1 /= 10;						
		num2 /= 10;
	}
	return sum;
}

//Function to multiple two numbers of given base

int baseprod(int num1, int num2, int base)
{
	int temp_prod1=num1*(num2%10) ,temp_prod2; //First multiplication is done in temp_prod1.
	num2 /= 10;

	for(int idx=1; num2!=0; idx++)
	{
		temp_prod2 = num1*(num2 %10);
		num2 /= 10;
		temp_prod1 = baseadd(temp_prod1,temp_prod2*pow(10,idx),base); // Adding the two products
	}

	return temp_prod1;
}

int main(){

	int num1,num2,base;			//INPUT
	cin >> num1 >> num2 >> base;

	cout << baseprod(num1,num2,base);
}
