#include <iostream>
#include<cmath>

using std::cout;
using std::cin;

int main()
{
    int num;
    
    cin >> num;

    for(int row = 0; row < num; row ++)
    {
        for(int col = 0; col < num; col ++)
        {
	// Origin shifting
            int x = col - num/2;
            int y = -(row - num/2);

            bool eq =  abs(x) +abs(y) <= num/2  && x>=0 ||  y==0;
            if(eq)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
