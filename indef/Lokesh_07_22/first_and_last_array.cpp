#include<iostream>

#include<vector>

//using std::vector,std::cin,std::cout;

using namespace std;



int first_occur(int* ele, int target, int size)

{

	int beg = 0;int end = size;int value;

	int mid = (beg + end)/2;

	

	while (beg<=end){

		if (ele[mid] == target){

			value = mid;

			end = mid -1;

		}

		else if(ele[mid] > target){

			end = mid - 1;

		}

		else if(ele[mid] < target){

			beg = mid + 1;

		}

	}

	return value;

}



int last_occur(int* ele, int target, int size)

{

	int beg = 0;int end = size;int value;



	int mid = (beg + end)/2;

	

	while (beg<=end){

		if (ele[mid] == target){

			value = mid;

			beg = mid + 1;

		}

		else if(ele[mid] > target){

			end = mid - 1;

		}

		else if(ele[mid] < target){

			beg = mid + 1;

 		}

	}

	return value;

}





int main(){
i
/*
    int n;
cout <<" enter number of elements";
    cin>>n;


    int arr[n];                    // ARRAY
cout << " enter elements";
    for(int i = 0 ; i < n; i++){

        cin >> arr[i];

    }
*/

int arr[5] = { 1, 2, 3, 3, 5};

    int data;                           //TARGET
cout << "enter target";
    cin>>data;  

    int size = sizeof(arr)/sizeof(arr[0]);
	cout << size;
    cout << first_occur(arr,data,size);
    cout << last_occur(arr,data,size);

}
