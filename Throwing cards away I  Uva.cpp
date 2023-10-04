#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;
        deque<int>de;
        for(int i=1;i<=n;i++)de.push_back(i);
        vector<int>v;
        while(de.size()>=2)
        {
            int a=de.front();
            de.pop_front();
            v.push_back(a);
            int b=de.front();
            de.pop_front();
            de.push_back(b);
        }
        printf("Discarded cards:");
        for(int i=0;i<v.size();i++)
        {
            if(i==0)cout<<" "<<v[i];
          //  else if(i==v.size()-1)cout<<" "<<v[i];
            else cout<<","<<" "<<v[i];
        }
        cout<<endl;
        printf("Remaining card: ");
        cout<<de.front()<<endl;
    }
}
