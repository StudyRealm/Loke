#include <iostream>

int sum(int one, int two){
	return one + two;	
}

int main(){
	int first_number {13};
	int second_number {7};
		
	std::cout << sum(first_number,second_number)<< '\n';	
}
