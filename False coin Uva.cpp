#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        int frr[n+5]={0};
        while(k--)
        {
            getchar();
            string str;
            getline(cin,str);
            string s;
            cin>>s;
            stringstream ss;
            int val;
            ss<<str;
            while(ss>>val)
            {
                if(s=="<"||s==">")frr[val]=0;
                else frr[val]=1;
            }

        }
          int counter=0,p=0;
            for(int i=1;i<=n;i++)
            {
                if(frr[i]==0)counter++,p=i;
            }
            if(counter==1)cout<<p<<endl;
            else cout<<0<<endl;
           //cout<<p<<endl;
            cout<<endl;
    }
}
