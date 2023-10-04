#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    vector<string>vs;
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;
        string a,b;
        cin>>a>>b;
        if(a!="right")
        {
            v.push_back(n);
            vs.push_back(b);
        }
        else
        {
            int flag=0;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]>n&&vs[i]=="low")flag++;
                else if(v[i]<n&&vs[i]=="high")flag++;
            }
            if(flag==0)cout<<"Stan may be honest"<<endl;
            else cout<<"Stan is dishonest"<<endl;
            vs.clear();
            v.clear();
        }
    }
}
