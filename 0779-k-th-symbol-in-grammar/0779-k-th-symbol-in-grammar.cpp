class Solution {
public:
    int kthGrammar(int n, int k) {
        int curr = 0;
        
        while (n > 1) {
            int mid = (1 << (n - 2));
            if (k > mid) {
                k -= mid;
                curr = 1 - curr;
            }
            n--;
        }
        
        return curr;
    }
};
