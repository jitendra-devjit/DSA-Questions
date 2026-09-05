class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int sum = 0;
        int maxSum = arr[0];
        int n = arr.size();
        for (int i = 0; i < n; i++) {

            sum = sum + arr[i];

            maxSum = max(maxSum, sum);

            if (sum < 0)
                sum = 0;
        }
        return maxSum;
    }
};