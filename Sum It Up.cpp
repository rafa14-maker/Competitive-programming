#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int k;
        cin>>k;
        int n;
        cin>>n;
        if(n==0&&k==0)break;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        printf("Sums of %d:\n",k);
        int flag=0;
        set<string>st;
         for(int i=1;i<=pow(2,n);i++)
        {
        vector<int>v;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                v.push_back(arr[j]);
            }
        }
        long long sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        if(sum==k)
        {
            flag++;
            string s;
         //   sort(v.begin(),v.end());
          //  reverse(v.begin(),v.end());
            for(int i=0;i<v.size();i++)
            {
               int a=v[i];
               string r;
               while(a>0)
               {
                   r+=(char)((a%10)+'0');
                   a/=10;
               }
              reverse(r.begin(),r.end());
              s+=r;
             if(i!=v.size()-1) s+='+';

            }
               st.insert(s);
          //  cout<<endl;
        }
       //cout<<endl;
    }
   // reverse(st.begin(),st.end());
    if(st.size()==0)cout<<"NONE"<<endl;
    else
    {
        vector<string>v;
        for(auto it=st.begin();it!=st.end();it++)
        {
            v.push_back(*it);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<endl;
        }
        //cout<<endl;
    }
    }
}
