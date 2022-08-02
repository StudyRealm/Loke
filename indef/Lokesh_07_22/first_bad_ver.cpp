// The API isBadVersion is defined for you.
// boisBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int beg=0,end=n,value=0;
        
        while (beg<=end){

            int mid = end-(end-beg)/2;
            
            if(isBadVersion(mid)){

                value = mid;

                end = mid - 1;

            }else{

                beg = mid + 1;
            }
        }
	
    return value;
    
    }
};
