#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;

  int row=1;
  while(row<=n){
     
     //1st triangle
     int col=1;
     while(col<=row){
        int start=row+n-1;
        cout<<row;
        start--;
        col++;
     }

     //2nd triangle
     
     
     int star=row-1;
     while(col<=row){
        cout<<"*";
        star++;
        col++;

     }
     cout<<endl;
     row++;
  }
return 0;
}