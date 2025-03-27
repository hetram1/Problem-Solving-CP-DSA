class Solution {
public:
    int solve(int n){
        int m=0;
        int c=0;
        while(n>0){
            int d=n%10;
            n/=10;
            m=max(m,d);
            c++;
        }
        int a=0;
        for(int i=0;i<c;i++){
            a=a*10+m;
        }
        return a;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=solve(nums[i]);
        }
        return s;
    }
};