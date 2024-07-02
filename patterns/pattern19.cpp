#include<iostream>
using namespace std;
int main()
{  int n;
   cin>>n;

   int row=1;
   while(row<=n){
   
    int col=1;
     char c= 65+row-1;
        while(col<=n){
            cout<<c<<" ";
            c++;
            col++;
        }
        cout<<endl;
        row++;

   } 

   return 0;
}