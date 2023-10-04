#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    int frr[27];
    if(arr.size()>26)
    {
        cout<<-1<<endl;
        return 0;
    }

    for(int i=0;i<27;i++)frr[i]=0;

    for(int i=0;i<arr.size();i++)
    {
        frr[arr[i]-'a']++;
    }

    int sum=0;

     for(int i=0;i<27;i++)
    {
        if(frr[i]!=0)
        {
            sum+=abs(frr[i]-1);
        }
    }

    cout<<sum<<endl;
}
