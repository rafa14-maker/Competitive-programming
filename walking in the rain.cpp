/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int arr[n+5];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int i=0,m=100000;

    while(i<n)
    {
        m=min(arr[i],m);
        if(i+1<n&&i+2<n)
        {
            if(arr[i+1]<arr[i+2])
            {
                i+=2;
            }
            else
            {
                i+=1;
            }
        }
        else if(i+2>=n)
        {
            i+=1;
        }
    }

    cout<<m<<endl;

}



