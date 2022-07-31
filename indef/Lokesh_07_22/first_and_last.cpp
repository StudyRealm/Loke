/*		elements(array basically)
 *		target
 *	OUTPUT=	target.firstInndex
 *		target.lastIndex	
 */

#include<iostream>
#include<vector>
using std::vector,std::cin,std::cout;

int first_occur(vector<int>* ele, int target, int size)
{
	int beg = 0;int end = size;int value;

	int mid = (beg + end)/2;
	
	while (beg<=end){
		if (ele -> at(mid) == target){
			value = mid;
			end = mid -1;
		}
		else if(ele -> at(mid) > target){
			end = mid - 1;
		}
		else if(ele -> at(mid) < target){
			beg = mid + 1;
	 	}
	}
	return value;
}

int last_occur(vector<int>* ele, int target, int size)
{
	int beg = 0;int end = size;int value;

	int mid = (beg + end)/2;
	
	while (beg<=end){
		if (ele -> at(mid) == target){
			value = mid;
			beg = mid + 1;
		}
		else if(ele -> at(mid) > target){
			end = mid - 1;
		}
		else if(ele -> at(mid) < target){
			beg = mid + 1;
 		}
	}
	return value;
}


std::vector<int> search(vector<int>* ele, int target){
	int size = ele -> size(); // showing warnig while using dot operator ???
	vector<int> ans;
	
	ans.push_back(first_occur(ele,target,size));
	ans.push_back(last_occur(ele,target,size));

	return ans;
}

int main(){

	vector<int> ele = {1,2,3,3,5};
	int target = 3;

	cout << 


}
