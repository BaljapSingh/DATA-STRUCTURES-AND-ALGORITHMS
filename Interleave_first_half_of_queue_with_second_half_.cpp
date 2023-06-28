#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    // Write your code here.
    queue<int> newq;
    int mid = q.size()/2;
    for(int i=0;i<mid;i++)
    {
        int val = q.front();
        q.pop();
        newq.push(val);
    }

    while(!newq.empty())
    {
        int val = newq.front();
        newq.pop();
        q.push(val);
        val = q.front();
        q.pop();
        q.push(val);
    }

}