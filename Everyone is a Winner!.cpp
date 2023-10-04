#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        set<int>s;
        for(int i=1;i<=sqrt(n);i++)
        {
            s.insert(n/i);
          if(i<n)  s.insert(i);
        }
        set<int>::iterator it;

      int counter=s.size();

        cout<<counter+1<<endl;

        cout<<0<<" ";

         for(it=s.begin();it!=s.end();it++)
        {
        cout<<*it<<" ";
        }
        cout<<endl;
    }
}
