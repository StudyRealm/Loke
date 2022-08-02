#include<iostream>
#include<cmath>
using std::cin;
using std::cout;

int main()
{
    int num;
    cin >> num;

    for(int row = 0; row < num; row ++)
    {
        for(int col = 0; col < num; col ++)
        {
            	int x = col - num/2;
            	int y = -(row - num/2);
		
		bool eq = y <= -abs(x) || y == abs(x) || y == num/2  ;

            if(eq)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }

    return 0;
}


