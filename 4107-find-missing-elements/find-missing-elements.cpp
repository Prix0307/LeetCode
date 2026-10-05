class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int min = nums[0], max = nums[0], num1, sum = 0;
        for (int i = 0; i < n; i++) {
            num1 = nums[i];
            sum = sum + nums[i];

            if (num1 >= max) {
                max = num1;
            }
            if (num1 <= min) {
                min = num1;
            }
        }
        vector<int> sort;
        int count = 0;
        for (int i = min; i <= max; i++) {
            bool found = false ;
            for (int j = 0; j < n; j++) {
                if (nums[j] == i) {
                    found = true;
                }
            }
            if (!found) {
                sort.push_back(i);
            }
        }
        return sort;
    }
};