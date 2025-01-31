class Solution {
public:
    int kthGrammar(int n, int k) {
        int left = 1;
        int right =pow(2,n-1);
        int curr=0;

        for(int i=0;i<n;i++){
            int mid = (right-left)/2 + left;
            if(k<=mid){
                right = mid;
            }
            else{
                left = mid+1;
                curr=1-curr;
            }
        }
        return curr;
    }
};