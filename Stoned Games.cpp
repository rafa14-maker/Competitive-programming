#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    priority_queue<int>pq;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        pq.push(a);
    }

    while(!pq.empty())
    {
        int f=pq.top();
        pq.pop();
        f--;
        if(pq.empty())
        {
            cout<<"T"<<endl;
            return ;
        }
        int s=pq.top();
        pq.pop();
        s--;
        if(f>0)pq.push(f);
        if(s>0)pq.push(s);
    }
    cout<<"HL"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
