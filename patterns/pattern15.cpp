#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n;

    int row = 1;
    char c=65;
    
    while(row<=n){

        int col = 1;
    
        while(col<=row){
            
            cout<<c<<" ";
            col++;
        }
        cout<<endl;
        row++;
        c++;
    }

    return 0;
}