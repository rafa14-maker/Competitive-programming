#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string arr[n+5];
    int frr[n+5];
    for(int i=0;i<n;i++)frr[i]=0;
    for(int i=0;i<n;i++)cin>>arr[i];

    int cnt=0;

    for(int i=0;i<n;i++)
    {
        if(frr[i]==0)
        {
            string s=arr[i];
            for(int k=0;k<s.size();k++)
            {
                string fk;
                int cnt=0;
                for(int a=k;;a++)
                {
                    if(a>=s.size())a=0;
                    if(a==k)cnt++;
                    if(cnt>=2)break;
                    fk+=s[a];
                }
                bool tr=false;
                for(int c=0;c<n;c++)
                {
                    if(arr[c]==fk)
                    {
                        if(c!=i)
                        {
                            tr=true;
                            frr[c]=1;
                        }
                    }
                }
               // if(tr)cnt--;

            }
        }
    }


    for(int i=0;i<n;i++)if(frr[i]==0)
    {
      //  cout<<i<<endl;
        cnt++;
    }

    cout<<cnt<<endl;

}

int main()
{
    solve();
}
