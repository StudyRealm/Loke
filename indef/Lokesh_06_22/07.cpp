#include<iostream>
#include<cmath>
using std::cin;
using std::cout;

int main(){
	int size;
	cin >> size;

	//Creating a N X N space
	for (int row=0; row<size; row++){
		for (int col=0; col<row; col++){
			cout << "\t";
		}
		cout << "*";
		cout << "\n";
	}
	return 0;
}

