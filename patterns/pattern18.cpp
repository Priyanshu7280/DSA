#include<iostream>
using namespace std;
int main()
{  int n;
   cin>>n;

   int row=1;
   
   while(row<=n){

    int col=1;
      char c=65+n-row;
    while(col<=row){
      
        cout<<c<<" ";
       
        c++;
         col++;
    }
    cout<<endl;
    row++;

   }


   return 0;
}