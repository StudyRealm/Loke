#include <iostream>
using std::cin;
using std::cout;

int main()
{
  int num;
  cin >> num;

  for (int row = 0; row < num; row++)
  {
    int var = 1;  // for printing first column (at first row)

    for (int col = 0; col <= row; col++)
    {
      cout << var << '\t';
      var = (var * (row - col)) / (col + 1);
    }
    cout << '\n';
  }

  return 0;
}
