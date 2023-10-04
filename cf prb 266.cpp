#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;

    int n;

    cin>>n;

    cin>>arr;

    int i,ml=0,l=0,k;

    k=arr[0];

    for(i=1;i<arr.size();i++)
    {
        if(arr[i]==k)
        {
            l++;
            ml=max(ml,l);
        }
        else
        {
            l=0;
            k=arr[i];
        }
    }
    cout<<ml<<endl;

}
