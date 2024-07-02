#include<iostream>
using namespace std;

int getSum(int *arr, int size){

    //base case
    if(size == 0){
        return 0;
    }

    if(size == 1){
        return arr[0];
    }

    int remainingPart = getSum(arr + 1, size - 1);
    int ans = arr[0] + remainingPart;
    return ans;
}

int main()
{
    int arr[5]= {3,5,8,9,11};
    int size = 5;

    int ans = getSum(arr,size);

    cout<< "Sum of array is :"<< ans << endl;

    return 0;
}