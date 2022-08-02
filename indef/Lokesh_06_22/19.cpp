#include<iostream>
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
            int y = (row - num/2);

            bool eq = ( y == 0 || x == 0)
      	              || (row == 0 && x<0) 
                      || (row == num-1 && x > 0)
                      || (col == num-1 && y < 0)
                      || (col == 0 && y > 0);

            if(eq)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
