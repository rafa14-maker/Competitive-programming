#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    string arr;
    cin>>arr;

    int mn=0;

    for(int i=0;i<arr.size();i++)
    {
        int counter=1,l=k,p=-1;
        for(int j=1;j<arr.size(),l>0;j++)
        {
            if(arr[j]==arr[j+1])counter++;
            else
            {
                if(p==-1)p=i;
                l--;
                counter++;
            }
        }
        i=p;
        mn=max(mn,counter);
    }
    cout<<mn<<endl;
}
