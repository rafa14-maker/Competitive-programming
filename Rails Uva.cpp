#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;
        while(1)
        {
            int p=0;
            int arr[n+5];
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
                if(i==0&&arr[i]==0)
                {
                    p++;
                    break;
                }
            }
            if(p>0)
            {
                cout<<endl;
                break;
            }
            int idx=0;
            vector<int>v;
            for(int i=1;i<=n;i++)
            {
                v.push_back(i);
                while(v.back()==arr[idx])
                {
                    v.pop_back();
                    idx++;
                }
            }
            if(v.size()==0)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}
