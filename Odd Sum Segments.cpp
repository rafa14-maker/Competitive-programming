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
        int arr[n+5];
         vector<int>krr;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2)krr.push_back(i+1);
        }
       if(krr.size()%2!=k%2||krr.size()<k)cout<<"NO"<<endl;
       else
       {
           cout<<"YES"<<endl;
           for(int i=0;i<k-1;i++)
           {
               cout<<krr[i]<<" ";
           }
           cout<<n<<endl;
       }

    }
}
