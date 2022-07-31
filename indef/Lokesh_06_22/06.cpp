#include<iostream>
#include<cmath>
using std::cin;
using std::cout;

int main(){
	int size;
	cin >> size;

	//Creating a N X N space
	for (int row=0; row<size; row++){

		for (int col=0; col<size; col++){
			
			int x = col - size/2;
			int y = -(row - size/2);

			//Equation 
			bool eq = abs(x) + abs(y) > size/2;

			//Printing astrisk
			if (eq){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << '\n'; 
	}
	return 0;
}

