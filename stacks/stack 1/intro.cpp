#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top > 1){
            top++;
            arr[top] = element;
        }

        else{
            cout<< "stack overflow"<< endl;
        }

    }

    void pop(){
        if(top >= 0){
            top--;
        }

        else{
            cout << "stack underflow"<< endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }        
        else{
            cout<< "stack is empty"<< endl;
            return -1;
        }
    }

    void printStack() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{   
    Stack st(6);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    st.printStack();

    cout<<"Peek is "<< st.peek() << endl;

    st.pop();

    cout<<"Peek after removing one element "<< st.peek() << endl;

    st.pop();

    cout<<"Peek after removing two element "<<  st.peek() << endl;

    st.pop();

    cout<<"Peek after removing three element "<<  st.peek() << endl;

    if(st.isEmpty()){
        cout << "Stack is empty." << endl;
    }
    else{
        cout << "Stack is not empty." << endl;
    }


       /*
    //creation of stack using STL
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);

    //pop
    s.pop();

    cout << "Printing top element " << s.top() << endl;

    if(s.empty()){
        cout << "Stack is empty " << endl;
    }
    else{
        cout << "stack is not empty " << endl;
    }

    cout << "size of stack is " << s.size() << endl;

    */


    return 0;
}