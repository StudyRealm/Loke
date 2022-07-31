/*	Base n -> Decimal -> Base m
 *
 *	INPUT = num
 *		base(num)
 *		base(ans)
 *	OUTPUT=	ans
*/
#include<iostream>
#include<cmath>
using std::cout;
using std::cin;

//Function to change any base to deci

int basetodeci(int num, int base){
	int ans=0;
	for(int i=0; num!=0 ;i++){
		ans = ans + (num%10 * pow(base,i));
		num /= 10;		// removing tha last digit after computing 

	}
	return ans;
}

///Function to change deci to any base

int decitobase(int num, int base){
	int ans=0;				//storing the reminder with correct int place
	for(int i=0; num!=0 ;i++){
		ans = ans +  (pow(10,i) * (num%base));
		num /= base;
	}
	return ans;
}


int basetobase(int num, int basen, int basem){
	return decitobase(basetodeci(num,basen),basem);
}


int main(){
	int num, base1,base2;
	cin >> num >> base1 >> base2;

	cout << basetobase(num,base1,base2) << '\n';
	return 0;
}
