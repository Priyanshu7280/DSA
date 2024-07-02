#include <iostream>
#include <vector>

class Solution {
private:
    void solve(const std::vector<int>& nums, std::vector<int>& output, int index, std::vector<std::vector<int>>& ans) {
        // Base case
        if (index >= nums.size()) {
            ans.push_back(output);
            return;
        }
        
        // Exclude
        solve(nums, output, index + 1, ans);
        
        // Include
        output.push_back(nums[index]);
        solve(nums, output, index + 1, ans);
        output.pop_back(); // Backtrack
    }
    
public:
    std::vector<std::vector<int>> subsets(const std::vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        std::vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, 2, 3};
    std::vector<std::vector<int>> subsets = solution.subsets(nums);
    
    // Print subsets
    for (const auto& subset : subsets) {
        std::cout << "[ ";
        for (int num : subset) {
            std::cout << num << " ";
        }
        std::cout << "]" << std::endl;
    }
    
    return 0;
}
