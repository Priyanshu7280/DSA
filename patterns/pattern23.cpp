#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int row=1;
    while(row<=n){

        //space wala triangle
        int space= n-row;
        while(space){
            cout<<" ";
            space--;
        }

        // 1st triangle
        int col=1;
        while(col<=row){
           cout<<col;
           col++;
        }

        // 2nd triangle
        int start=row-1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        row++;
    }
return 0;
}