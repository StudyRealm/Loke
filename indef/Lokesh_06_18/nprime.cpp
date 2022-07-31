#include<iostream>

int main()
{	
	int n;
	std::cin >> n;
	
	if (n<1)
		return 1;

	else if (n == 2)
		std::cout << 2;
	
	else{
		std::cout << 2 << '\n';

		for (int i=3; i<n; i++)
		{	

			int temp=1;
			for (int j=2; j<i; j++)
			{

				if(i%j ==0)
					temp=0;
			}

			if (temp)
			{
				std::cout << i << '\n';
			}
		}
	}
}
