#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char f;
    cin>>n;
    string arr;
    while(n--)
    {
        cin>>f;
        arr+=f;
    }
    reverse(arr.begin(),arr.end());
    int frr[100050];
    int k=0;
    char p='0';
    for(int i=0;i<arr.size();i++)
    {
        if(i==0)
        {
            p=arr[i];
            frr[k]=1;
        }
        else if(p==arr[i])
        {
            frr[k]++;
        }
        else if(p!=arr[i])
        {
            k++;
            frr[k]=1;
            p=arr[i];
        }
    }
     int m=0;
    for(int i=0;i<k;i++)
    {
       int p=min(frr[i],frr[i+1]);

       m=max(m,p*2);
    }
    cout<<m<<endl;
}
