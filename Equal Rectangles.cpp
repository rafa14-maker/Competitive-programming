#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int m;
        cin>>m;
        int n=m*4;
        int arr[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<long long>v;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(i!=j)
                    for(int k=j;k<n;k++)
                    {
                        if(i!=k&&arr[i]==arr[k])
                        {
                            for(int l=k
                                ;l<n;l++)
                            {
                                if(j!=l&&arr[l]==arr[j])
                                {
                                    long long sum=arr[i]*arr[j];
                                    v.push_back(sum);
                                }
                            }
                        }
                    }
                }
            }
        sort(v.begin(),v.end());
        int counter=1,flag=0;
      /*  for(int i=0;i<v.size()-1;i++)
        {
            if(i+1<v.size()&&v[i]==v[i+1])
            {
                counter++;
                if(i==v.size()-2)
                {
                    if(counter==m)
                    {
                        cout<<"YES"<<endl;
                        flag++;
                        break;
                    }
                }
            }
            else
            {
                    if(counter==m)
                    {
                        cout<<"YES"<<endl;
                        flag++;
                        break;
                    }
                counter=1;
            }
        }
        if(flag==0)cout<<"NO"<<endl;*/
            for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    }
}
