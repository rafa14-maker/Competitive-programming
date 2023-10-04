#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,counter=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int k;
            cin>>k;
            if(k==1)
            {
                if(i==0||i==n-1||j==0||j==m-1)
                {
                  //  cout<<2<<endl;
                    counter++;
                }
            }
        }
    }
    if(counter>0)cout<<2<<endl;
   else  cout<<4<<endl;
}
