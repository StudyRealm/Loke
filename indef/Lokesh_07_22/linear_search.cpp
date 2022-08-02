/*	INPUT = size
 *		array elements
 *		target
 *	OUTPUT = index	
*/
#include<iostream>

int main()
{
	//INPUT
	int size, n;
	
	std::cin >> size; 		//enter size of array

	int arr[size]; 			//array should be initialized after having a valid value
					//for size variable

	for(int i=0; i<size;i++){	//enter elements of array

		std::cin >> arr[i];
	}	

	std::cin >> n;			//enter number to search
  	
	//SEARCH
	for(int i=0; i<size;i++){

		if(n==arr[i]){

			std::cout << i << '\n';

			break;
		}
	}

}
