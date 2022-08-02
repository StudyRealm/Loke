/*	INPUT=	size
 *		array_elements
 *		target elemet
 *	OUTPUT= index
 */

#include<iostream>

int bs(int *arr, int begin, int end, int num)
{
	int mid = (begin + end)/2;

	if (arr[mid] == num){
		
		std::cout << mid << '\n';
		
		return 0;
	}
	
	if(arr[mid] > num){

		bs(arr,begin ,mid ,num);
	}
	else if(arr[mid] < num){

		bs(arr,mid,end,num);
	}
	return 1;
}

int main()
{	
	int size;

	std::cin >> size;

	int arr[size];

	for(int i=0; i<size; i++)
	{
		std::cin >> arr[i];
	}

	int num;

	std::cin >> num; 

	int beg=0;

	int end=sizeof(arr)/sizeof(arr[0]); // kinda generic !!!
					    //
	bs(arr,beg,end,num);
}
