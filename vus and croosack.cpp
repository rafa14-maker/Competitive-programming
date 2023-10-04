#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,frr;
    cin>>arr>>frr;

    int counter=0;

    for(int i=0;i<arr.size();i++)
    {
        if(i+frr.size()-1>=arr.size())break;
        int flag=0,k=i;
        for(int j=0;j<frr.size();j++,k++)
        {
           if(arr[k]!=frr[j])flag++;
        }
        if(flag%2==0)counter++;
    }
    cout<<counter<<endl;
}
