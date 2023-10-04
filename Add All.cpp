#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        priority_queue<int,vector<int>,greater<int> >pq;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            pq.push(a);
        }
        long long sum=0,tot=0;
        while(pq.size()!=1)
        {
            tot=pq.top();
            pq.pop();
            tot+=pq.top();
            pq.pop();
            sum+=tot;
            pq.push(tot);
        }
        cout<<sum<<endl;
    }
}
