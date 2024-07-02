#include <iostream>
#include <algorithm> // for reverse
#include <vector>    // for std::vector
using namespace std;

// Function to reverse an array
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to find the sum of two arrays
vector<int> findArraySum(int a[], int n, int b[], int m) {
    // Calculate the maximum size of the result array
    int resultSize = max(n, m) + 1;
    vector<int> result(resultSize);
    int i = n - 1;
    int j = m - 1;
    int carry = 0;

    // Traverse both arrays from right to left and add corresponding digits
    int index = 0;
    while (i >= 0 || j >= 0 || carry > 0) {
        int val1 = (i >= 0) ? a[i--] : 0;
        int val2 = (j >= 0) ? b[j--] : 0;
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        result[index++] = sum % 10;
    }

    // Reverse the result array
    reverseArray(result.data(), index);

    // Resize the result vector to remove leading zeros
    result.resize(index);

    return result;
}

int main() {
    int a[] = {9, 9, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int b[] = {1, 2, 3};
    int m = sizeof(b) / sizeof(b[0]);

    // Find the sum of the arrays
    vector<int> result = findArraySum(a, n, b, m);

    // Print the result
    cout << "Sum of arrays: ";
    for (int digit : result) {
        cout << digit;
    }
    cout << endl;

    return 0;
}
