#include<iostream>
#include<cmath>
using std::cin;
using std::cout;

int main(){
	int size;
	cin >> size;

	//Creating a N X N space
	for (int row=size; row>0; row--){
		for (int col=0; col<row-1; col++){
			cout << "\t";
		}
		cout << "*";
		cout << "\n";
	}
	return 0;
}


