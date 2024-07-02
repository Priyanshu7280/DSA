#include <iostream>
#include <vector>
#include <string>

void solve(std::vector<std::string>& ans, const std::string& str, std::string output, int i) {
    // Base case
    if (i >= str.length()) {
        if (!output.empty()) // Check if output is non-empty
            ans.push_back(output);
        return;
    }
    
    // Exclude
    solve(ans, str, output, i + 1);
    
    // Include
    output.push_back(str[i]);
    solve(ans, str, output, i + 1);
}

std::vector<std::string> subsequences(const std::string& str) {
    std::vector<std::string> ans;
    std::string output = "";
    solve(ans, str, output, 0);
    return ans;
}

int main() {
    std::string str = "abc";
    std::vector<std::string> result = subsequences(str);
    
    // Print subsequences
    for (const auto& subsequence : result) {
        std::cout << subsequence << std::endl;
    }
    
    return 0;
}
