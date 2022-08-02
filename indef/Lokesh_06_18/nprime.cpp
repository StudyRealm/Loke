#include<iostream>

int main()
{	
	int num;
	std::cin >> num;
	
	if (num<1)
		return 1;

	else if (num == 2)
		std::cout << 2;
	
	else{
		std::cout << 2 << '\n';

		for (int idx=3; idx<num; idx++)
		{	
			int temp=1;
			for (int jdx=2; jdx<idx; jdx++)
			{

				if(idx%jdx ==0)
					temp=0;
			}
			if (temp)
			{
				std::cout << idx << '\n';
			}
		}
	}
}
