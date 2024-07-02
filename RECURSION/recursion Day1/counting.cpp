#include<iostream>
using namespace std;

void print(int n){

    if(n==0){
        return ;
    }
/*
    cout<< n << endl;   

    //Recursive relation
        print(n-1);             // tail recursion  output: 3 2 1

*/

    //Recursive relation
        print(n-1);             //head recursion   output: 1 2 3

    cout<< n << endl;

}

int main()
{
    int n;
    cin>> n;
    
    cout<<endl;
    
    print(n);


    return 0;
}