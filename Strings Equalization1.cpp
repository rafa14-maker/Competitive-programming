#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string a,b;
        cin>>a>>b;
        int arr[27]={0};
        int frr[27]={0};

        int counter=0;

        for(int i=0;i<a.size();i++)
        {
            arr[a[i]-97]++;
        }
         for(int i=0;i<b.size();i++)
        {
            frr[b[i]-97]++;
        }

        for(int i=0;i<27;i++)
        {
            if(arr[i]&&frr[i])
            {
                counter++;
                break;
            }
        }

        if(counter==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}
