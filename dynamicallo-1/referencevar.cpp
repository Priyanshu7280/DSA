#include<iostream>
using namespace std;

//Bad practice to perform
int& func(int a){
  int num = a;   //local variable
  int& ans =num; //local variable
  return ans;
}

//Same bad practice
int* fun(int a){

  int* ptr = &n;
  return ptr;
}

void update2(int& n){
  n++;
}

void update1(int n){
  n++;
}

int main()
{  
  /*
   int i =4; 

    // reference variable
    int& j = i;

    cout<< i << endl;
    i++;
    cout<< i << endl;
    j++;
    cout<< i << endl;
    cout<< j << endl;
   */ 

    int n = 4;
    cout<< "before  "<< n << endl;
    update2(n);
    cout<<"after  "<< n << endl;

    //func(n);ṇ
 
     fun(n);
    
      return 0;
}
