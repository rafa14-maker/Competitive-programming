#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    int flag=0;
    int p=-1;
    for(int i=0;i<arr.size()-1;i++)
    {

        if(arr[i]>arr[i+1]&&(i==0&&arr[i+1]!='0'))
        {
            swap(arr[i],arr[i+1]);
            flag++;
            p=i;
            break;
        }
        else if(i!=0&&arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
            flag++;
            p=i;
            break;
        }
    }
    if(flag==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    string frr;
    for(int i=p+1;i<arr.size();i++)frr+=arr[i];
    int len = frr.size();
    sort(frr.begin(),frr.end());
    reverse(frr.begin(),frr.end());
    if(arr[0]=='0')
    {
         cout<<-1<<endl;
        return 0;
    }
    for(int i=0;i<=p;i++)cout<<arr[i];
    for(int j=0;j<frr.size();j++)cout<<frr[j];cout<<endl;
}
