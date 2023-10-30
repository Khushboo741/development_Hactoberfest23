class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                return {left + 1, right + 1}; // Return indices, adding 1 to convert from 0-indexed to 1-indexed
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        return {-1, -1}; // Return {-1, -1} if no solution is found
    }
};
