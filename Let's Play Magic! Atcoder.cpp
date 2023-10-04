#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;
        vector<string>arr;
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            string s,f;
            cin>>s>>f;
            arr.push_back(s);
            v.push_back(f);
        }
        string frr[n+5];
        for(int i=0;i<n;i++)frr[i]="9";
        int j=-1;
        for(int i=0;i<n;i++)
        {
            int p=v[i].size();
            while(p--)
            {
                j++;
                if(j==n)j=0;
                while(frr[j]!="9")
                {
                    j++;
                    if(j==n)j=0;
                }
            }
            frr[j]=arr[i];
            //cout<<j<<" ";
           // frr[j]=arr[i];
        }
        for(int i=0;i<n-1;i++)cout<<frr[i]<<" ";cout<<frr[n-1];
        cout<<endl;
    }
}
