#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        int k=i;
        vector<int>v;
        int counter=0;
        while(k>0)
        {
            int r=k%10;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==r)
                {
                    counter++;
                    break;
                }
            }
            if(counter>0)break;
            else v.push_back(r);
            k/=10;
        }
        if(counter==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}
