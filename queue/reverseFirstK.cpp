#include <bits/stdc++.h> 
void reverse(queue<int> &queue,int k)
{
    stack<int> s;

    for(int i =0; i<k; i++){
        int val = queue.front();
        queue.pop();
        s.push(val);

    }

    while(!s.empty()){
        int val = s.top();
        s.pop();
        queue.push(val);
    }

    int t = queue.size()-k;
    while(t--){
        int val = queue.front();
        queue.pop();
        queue.push(val);
    }
}