#include <iostream>
#include <vector>

class Solution {
private:
    void solve(std::vector<int>& nums, std::vector<std::vector<int>>& ans, int index) {
        // Base case
        if (index >= nums.size()) {
            ans.push_back(nums);
            return;
        }
        
        for (int j = index; j < nums.size(); j++) {
            std::swap(nums[index], nums[j]);
            solve(nums, ans, index + 1);
            // Backtrack
            std::swap(nums[index], nums[j]);
        }
    }    
public:
    std::vector<std::vector<int>> permute(std::vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, 2, 3};
    std::vector<std::vector<int>> result = solution.permute(nums);
    
    // Print permutations
    for (const auto& permutation : result) {
        std::cout << "[ ";
        for (int num : permutation) {
            std::cout << num << " ";
        }
        std::cout << "]" << std::endl;
    }
    
    return 0;
}
