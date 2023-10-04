#include<bits/stdc++.h>
using namespace std;

 vector<int>arr[1505];
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0;i<n;i++)
    {
        int k=s[i]-'a';
       // cout<<k<<endl;
        arr[k].push_back(i+1);
    }
    for(int i=0;i<27;i++)
    {
        arr[i].push_back(n);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int k,counter=0,j=0;
        char c;
        cin>>k>>c;
        int f=c-'a';
        if(arr[f].size()==0)
        {
            cout<<k<<endl;
        }
        else {
        vector<int>frr;
      frr.push_back(0);
        for(int i=0;i<arr[f].size()-1;i++)
        {
            int p=arr[f][i+1]-arr[f][i];
            frr.push_back(p);
        }
        if(arr[f].size()==1)frr.push_back(arr[f][0]);
      // for(int i=0;i<frr.size();i++)cout<<frr[i]<<" ";
      //  cout<<endl;
        sort(frr.begin(),frr.end());
        for(int i=0;i<frr.size();i++)
        {
            if(k>frr[i])
            {
                counter+=frr[i];
                k-=frr[i];
                j=i+1;
            }
            else
            {
                counter+=k;
                break;
                j=i+1;
            }
        }
        cout<<counter+j+1<<endl;}
    }
}
