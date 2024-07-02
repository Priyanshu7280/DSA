#include <bits/stdc++.h> 
vector<int> firstNegativeInteger(vector<int> &arr, int k, int n)
{
       vector<int>ans;
       deque<int>dq;
       //Processing for the first window
       for(int i=0;i<k;i++)
       {
           if(arr[i]<0)
           {
               dq.push_back(i);
           }

       }
       //Check for first negative integer and if  its index  is not present in deque push 0
       if(dq.size()>0)
       {
           ans.push_back(arr[dq.front()]);
       }
       else
       {
           ans.push_back(0);
       }

       //Processing for remaining windows:
       for(int i=k;i<n;i++)
       {
           //remove the previous index
           if(!dq.empty()&&(i-dq.front()>=k))
           {
               dq.pop_front();
           }

           //addition
           if(arr[i]<0)
           {
                dq.push_back(i);
           }

           if(dq.size()>0)
           {
               ans.push_back(arr[dq.front()]);
           }

           else
           {
               ans.push_back(0);
           }
       }
       return ans;
}