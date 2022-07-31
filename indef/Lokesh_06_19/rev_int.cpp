#include<iostream>
using std::cin,std::cout;

int rev_int(int x){
	int ans=0;
	while(x!=0){
		ans = (ans*10) + (x%10);	//Parsing out last int from the given int - x%10;
						//adding it to 'ans' by incrementing it;s prev value
						//by multiple of 10s.
		x /=10;
	}
	return ans;
}

int main()
{
	int num;
	cin >> num;	
	cout << rev_int(num)<< '\n';

}
