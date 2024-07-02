#include <bits/stdc++.h> 
int firstCircularTour(vector<int>& petrol, vector<int>& distance, int N)
{
	   long deficit = 0;
       long balance = 0;
       long start = 0;
       
       for(int i=0; i<N; i++) {
           balance += petrol[i] - distance[i];
           if(balance < 0) {
               start = i+1;
               deficit += balance;
               balance = 0;
           }
       }

       if (balance + deficit >= 0) {
           return start;
       }
        return -1;
       
    }

