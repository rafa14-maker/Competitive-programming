#include<bits/stdc++.h>
using namespace std;



bool check(char a)
{
   if(a=='a')return true;
   if(a=='e')return true;
   if(a=='i')return true;
   if(a=='o')return true;
   if(a=='u')return true;
 if(a=='y')return true;
   return false;
}

int main()
{
    int n;
    cin>>n;
    string arr;
    cin>>arr;
   // int flag=0;
    while(1)
    {
        string krr;
        int counter=0;
        for(int i=0;i<arr.size();i++)
        {
            if(check(arr[i]))
            {
                if(i+1<arr.size()&&check(arr[i+1]))
                {
                    counter++;
                    arr[i+1]='9';
                }
            }
        }
        if(counter==0)break;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!='9')krr+=arr[i];
        }
        arr=krr;
    }
    cout<<arr<<endl;
}
