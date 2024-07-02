#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) {
                cnt++;
            }
        }
        if (nums[nums.size() - 1] > nums[0]) {
            cnt++;
        }

        if (cnt <= 1) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    // Example usage of the Solution class
    Solution solution;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    cout << "Is the array rotated sorted with at most one rotation? ";
    if (solution.check(nums)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
