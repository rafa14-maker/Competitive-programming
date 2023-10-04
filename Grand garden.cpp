#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5]={0};
    vector<pair<int,int> >v;
    int frr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>frr[i];
        v.push_back(make_pair(frr[i],i));
    }
    sort(v.begin(),v.end());

    int counter=0;
    for(int i=0;i<v.size();i++)
    {
        int a=v[i].first;
        int b=v[i].second;
        if(arr[b]<a)
        {
            int k=a-arr[b];
            counter+=k;
            for(int j=b;j<n;j++)
            {
                if(arr[j]+k<=frr[j])
                {
                   // counter++;
                    arr[j]+=k;
                }
                else
                {
                    break;
                }
            }
             for(int j=b-1;j>=0;j--)
            {
                if(arr[j]+k<=frr[j])
                {
                   // counter++;
                    arr[j]+=k;
                }
                else
                {
                    break;
                }
            }
        }
    }
   // for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<counter<<endl;
}
