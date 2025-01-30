class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1); // Initialize answer array with 1.

        // Calculate prefix products
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            answer[i] = prefix; // Set current element as the product of all elements to the left.
            prefix *= nums[i];  // Update prefix product.
        }

        // Calculate suffix products and update answer
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= suffix; // Multiply with the product of all elements to the right.
            suffix *= nums[i];  // Update suffix product.
        }

        return answer;
    }
};