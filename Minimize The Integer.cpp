#include<bits/stdc++.h>
using namespace std;

int check(int c)
{
    int k=c-48;
    return k%2;
}


int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string arr,frr;
        cin>>arr;
         while(1)
         {
             int counter=0;
             for(int i=0;i<arr.size();i++)
             {
                 if(i+1<arr.size()&&arr[i+1]<arr[i]&&check(arr[i])!=check(arr[i+1]))
                 {
                     swap(arr[i],arr[i+1]);
                     counter++;
                     i=0;
                 }
             }
             if(counter==0)break;
         }
         cout<<arr<<endl;
    }
}
