#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n;

    int i=1;
   

    while(i<=n){
        int j=1;
        while(j<=n){
             char c= 65+i+j-2;
            cout<<c<<" ";
            
            j++;
              c++;
        }
        cout<<endl;
        
        i++;
      
    }

    return 0;
}