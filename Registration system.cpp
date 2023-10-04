#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>v;
    int n;
    cin>>n;
    int arr[n+5]={0};
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int flag=0;
        for(int j=0;j<v.size();j++)
        {
           if(v[j]==s)
           {
               arr[j]++;
               cout<<s<<arr[j]<<endl;
               flag++;
               break;
           }
        }
        if(flag==0)
        {
            cout<<"OK"<<endl;
            v.push_back(s);
        }
    }
}
