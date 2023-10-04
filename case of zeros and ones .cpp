//DONT LOOK AT MY CODE ^___^
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i,j=0,k=0;
    string arr;
    cin>>a;
    cin>>arr;

    for(i=0;i<arr.size();i++)
    {
        if(arr[i]=='1')
        {
            k++;
        }
        else
        {
            j++;
        }
    }

    while(j>0&&k>0)
    {
        j--;
        k--;
    }
    cout<<j+k<<endl;
}
