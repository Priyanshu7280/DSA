#include<iostream>
using namespace std;

int factorial(int n){

    // base case
    if(n==0 ){
        return 1;
    }

    int small = factorial(n-1);
    int bigger = n * factorial(n-1);

    return bigger;
}

int main()
{   
    int n;
    cin >> n;

    int ans = factorial(n);

    cout<< ans << endl;

    return 0;
}