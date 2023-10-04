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
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            string a;
            cin>>a;
            v.push_back(a);
        }

        int counter=0;

        for(int i=0;i<v.size();i++)
        {
            string k;
            int flag=0;
            for(int j=0;j<v.size();j++)
            {
                if(i!=j&&v[i]==v[j])
                {
                    flag++;
                    break;
                }
            }
            if(flag==0)
            {
                k=v[i];
                flag=0;
                for(int p=0;p)
            }
        }
    }
}
