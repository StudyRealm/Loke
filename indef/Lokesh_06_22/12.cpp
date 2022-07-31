#include<iostream>
using std::cin;
using std::cout;
int main()
{
	int size;
	cin >> size;
	int temp1 = 1 , temp2 = 1,temp3;
	for (int row=1; row<=size; row++)
	{	
				for (int col=1; col<=row ; col++)
		{
			if(row == 1)
			{
				cout << 0;
			}
			else if (row == 2)
			{
				cout << temp1 << '\t';
			}
			else
			{
				temp3 = temp1 + temp2;
				cout << temp3 << '\t';
				temp2 = temp1;
				temp1=temp3;
			}
		}
		cout << '\n';
	}
}
