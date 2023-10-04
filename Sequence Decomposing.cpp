#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long>arr;
    while(n--)
    {
        long long k;
        cin>>k;
        int flag=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<k)
            {
                arr[i]=k;
                flag++;
                break;
            }
        }
        if(flag==0)arr.push_back(k);
    }
    cout<<arr.size()<<endl;
}
