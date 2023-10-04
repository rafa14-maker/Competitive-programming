#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,frr;
    cin>>arr>>frr;

    int k=0;
    for(int i=0;i<frr.size();i++)
    {
        if(arr[k]==frr[i])
        {
            k++;
        }
    }
    cout<<k+1<<endl;
}
