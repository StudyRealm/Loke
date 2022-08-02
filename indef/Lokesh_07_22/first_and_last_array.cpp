#include<iostream>

using std::cin;
using std::cout;

int first_occur(int* ele, int target, int size){

	int beg = 0, end = size,value,mid;				

	while (beg<=end){	
		
		mid = (beg + end)/2;	

		if (ele[mid] == target){
			
			value = mid;
			end = mid -1;

		}else if(ele[mid] > target){

			end = mid - 1;

		}else if(ele[mid] < target){

			beg = mid + 1;
		}
	}
	return value;
}



int last_occur(int* ele, int target, int size){

	int beg = 0, end=size, value;

	while (beg<=end){


		int mid = (beg + end)/2;

		if (ele[mid] == target){

			value = mid;

			beg = mid + 1;

		}else if(ele[mid] > target){

			end = mid - 1;

		}else if(ele[mid] < target){

			beg = mid + 1;
 		}
	}
	return value;
}

int main(){

	int n;

	cout <<" enter number of elements";
	
	cin>>n;


	int arr[n];                    // ARRAY
	
	cout << " enter elements";
	
	for(int i = 0 ; i < n; i++){

        	cin >> arr[i];
	
	}
	
	int target;

	cin >> target;

	cout << first_occur(arr,target,n);

	cout << last_occur(arr,target,n);

}
