#include<iostream>
using namespace std;

void update(int **p2){
    //p2 = p2 + 1;
    //kuch change hoga ?? -- NOOO !!!!

    //*p2 = *p2 + 1;
    // kuch change hoga ?? -- YESSSSS !!! in the value of p

    **p2 = **p2 + 1;
    // kuch change hoga ?? -- YESSSSS !!!! in the value of i
}


int main()
{  /* 
    int i = 5;
    int*  p = &i;
    int** p2 = &p;

    cout<< endl << "Everything is fine." << endl;

    cout<< " Printing p "<< p << endl;
    //cout<< " Address of p "<< &p << endl;
    cout<< *p2 << endl;
    
    cout<< i  << endl;   //-----
    cout<< *p << endl;    //    |---- >> will give value i = 5
    cout<< **p2<< endl;  //-----
    cout<< endl;

    cout<<  &i <<endl;  //------
    cout<< p << endl;    //    |---- >> will give value i.e address of i
    cout<< *p2 << endl;  //-----
    cout<< endl;

    cout<< &p <<endl;
    cout<< p2 << endl; 


    cout<< endl << endl;

    cout<< "Before " << i << endl;
    cout<< "Before " << p << endl;
    cout<< "Before " << p2 << endl;
    update(p2);
     cout<< "after " << i << endl;
    cout<< "after " << p << endl;
    cout<< "after " << p2 << endl;
 */   

   
      int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl; 


    return 0;
}