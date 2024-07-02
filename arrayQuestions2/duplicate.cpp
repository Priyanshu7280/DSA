#include <iostream>
#include <vector>

// Function definition
int findDuplicate(std::vector<int> &arr) {
    int ans = 0;

    // XOR ing all array elements
    for (int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    // XOR [1, n-1]
    for (int i = 1; i < arr.size(); i++) {
        ans = ans ^ i;
    }
    return ans;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 4, 5}; // Example array with one duplicate (4)

    int duplicate = findDuplicate(arr);

    std::cout << "Duplicate element: " << duplicate << std::endl;

    return 0;
}
