#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,t,n;
    cin>>t;
int sum=0;
   while(t--){
      //  printf("Case %d:\n",i);

        string arr;
            cin>>arr;
            if(arr=="donate")
            {
                cin>>n;
                sum+=n;
            }
            else
            {
                cout<<sum<<endl;
            }
    }
}

