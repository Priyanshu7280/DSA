#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

bool isPresent(int arr[][3], int target) {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (arr[row][col] == target) {
                return true;
            }
        }
    }
    return false;
}

void printColSum(int arr[][3]) {
    cout << "Printing Column Sum:" << endl;
    for (int col = 0; col < 3; col++) {
        int sum = 0;
        for (int row = 0; row < 3; row++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void printSum(int arr[][3]) {
    cout << "Printing Row Sum:" << endl;
    for (int row = 0; row < 3; row++) {
        int sum = 0;
        for (int col = 0; col < 3; col++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRowSum(int arr[][3]) {
    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int row = 0; row < 3; row++) {
        int sum = 0;
        for (int col = 0; col < 3; col++) {
            sum += arr[row][col];
        }
        if (sum > maxi) {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum row sum is " << maxi << endl;
    return rowIndex;
}

int main() {
    int arr[3][3];

    cout << "Enter the elements:" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cin >> arr[row][col];
        }
    }

    cout << "Printing the array:" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    int ansIndex = largestRowSum(arr);
    cout << "Max row is at index " << ansIndex << endl;

    return 0;
}
