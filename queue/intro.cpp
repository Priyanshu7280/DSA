#include<iostream>
#include<queue>
using namespace std;
int main()
{   
    queue<int> q;

    q.push(10);
    cout<<"front of queue is "<<q.front()<<endl;
    q.push(12);
    cout<<"front of queue is "<<q.front()<<endl;
    q.push(18);
    cout<<"front of queue is "<<q.front()<<endl;

    
    cout<<"size of queue: "<<q.size()<<endl;    

    q.pop();
    q.pop();
    q.pop();


    cout<<"size of queue: "<<q.size()<<endl;

    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else
        cout<<"queue is not empty"<<endl;

    return 0;
}