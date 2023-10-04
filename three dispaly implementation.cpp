#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int frr[n+5];

    for(int i=0;i<n;i++)
        cin>>frr[i];

    int krr[5]={0};

    vector<int>v;

    for(int i=n-1;i>=0;i--)
    {
        if(v.size()==0)
        {
            v.push_back(arr[i]);
            krr[0]=frr[i];
        }
            else if(v.size()==1)
            {
                if(v[0]<arr[i])
                {
                    v.push_back(arr[i]);
                    krr[1]=frr[i];
                }
                else if(v[0]>arr[i])
                {
                    v[1]=v[0];
                    krr[1]=krr[0];
                    v[0]=arr[i];
                    krr[0]=frr[i];
                }
                else if(v[0]==arr[i]&&frr[i]<krr[0])
                {
                    krr[0]=frr[i];
                }
            }
            else if(v.size()==2)
            {

            }
            else if(v.size()==0)
            {

            }
    }
}
