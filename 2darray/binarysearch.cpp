#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target) {
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][4];

    // Taking input row-wise
    cout << "Enter elements of the 2D array:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    // Outputting the 2D array
    cout << "Entered 2D array:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        } 
        cout << endl;
    }

    // Searching for an element
    cout << "Enter the element to search: ";
    int target;
    cin >> target;

    if(isPresent(arr, target)){
        cout << "Element found" << endl;
    }
    else{
        cout << "Not found" << endl;
    }

    return 0;
}
