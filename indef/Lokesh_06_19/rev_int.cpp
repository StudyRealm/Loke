#include<iostream>
using std::cin;
using std::cout;

int rev_int(int num){
	int ans=0;
	while(num!=0){
		ans = (ans*10) + (num%10);	//Parsing out last int from the given int - num%10;
						//adding it to 'ans' by incrementing it;s prev value
						//by multiple of 10s.
		num /=10;
	}
	return ans;
}

int main()
{
	int num;
	cin >> num;	
	cout << rev_int(num)<< '\n';

}
