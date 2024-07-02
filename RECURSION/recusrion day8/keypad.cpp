#include <iostream>
#include <vector>
#include <string>

class Solution {
private:
    void solve(const std::string& digit, std::string output, int index, std::vector<std::string>& ans, const std::string mapping[]) {
        // Base case
        if (index >= digit.length()) {
            ans.push_back(output);
            return;
        }
        
        int number = digit[index] - '0';
        std::string value = mapping[number];
        
        for (char c : value) {
            output.push_back(c);
            solve(digit, output, index + 1, ans, mapping);
            output.pop_back();
        }
    }
public:
    std::vector<std::string> letterCombinations(const std::string& digits) {
        std::vector<std::string> ans;
        if (digits.length() == 0)
            return ans;
        std::string output;
        int index = 0;
        const std::string mapping[10] = {"", "", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
    }
};

int main() {
    Solution solution;
    std::string digits = "23";
    std::vector<std::string> result = solution.letterCombinations(digits);
    
    // Print letter combinations
    for (const auto& combination : result) {
        std::cout << combination << std::endl;
    }
    
    return 0;
}
