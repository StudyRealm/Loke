	// LOGIC :	n = input ,  k = rotation constant , r = result
	//	 	since |k| > n, so we need to find a relative value of k
	// 			
	// 				; k <= n ; k /= 5 
	//		
	// Let it be k', say 3. Now the number be divided into two sets of such that (sets ~ groups)
	// rightmost set contains k' amount of numbers.
	//
	// ex- n= 24689 , k = k' =3; 
	//		     _______		
	// 		2 4 | 6 8 9 | => three elements in rightmost set.
	//		     ------- 
	//
	// Now we have to switch the position of two sets and we will get the result.

#include<iostream>
#include<cmath>

int main()
{
	int n,k,count,temp, rset=0,lset=0;
	std::cin >> n >> k;

	/*relative k'
	temp = n;
	count = 0; // total digits in 'n'
	while (temp)
	{
		count++;
		temp/=10;
	}
	int a=0;
	for (int i=0; k - a >= count ; i++)
		a = count * i;

	*/
	std::cout << k << ' ' ;
	
	// creating two sets
	rset = n%int(pow(10,abs(k)));
	lset = n/int(pow(10,abs(k)));

	if(k < 0){
		rset = lset + rset;
		lset = rset - lset;
		rset = rset - lset;		
	}
	
	temp = lset;
	count = 0;
	while (temp)
	{
		count++; // total digits in lset, to multiply rset with power of 10s.
		temp /=10;
	}

	int r = rset*pow(10,count) + lset;

	std::cout << r << '\n';	

}
