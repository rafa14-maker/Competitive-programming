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

    string arr,frr,krr,zrr,prr[10000];

    int a=0;
    cin>>arr;

    for(int i=0;i<arr.size();i++)
    {
       if(arr[i+2]==arr[i+5]&&arr[i+5]=='-'&&arr[i]>='0'&&arr[i]<='9'&&arr[i+1]>='0'&&arr[i+1]<='9'&&arr[i+3]>='0'&&arr[i+3]<='9'&&arr[i+4]>='0'&&arr[i+4]<='9'&&arr[i+6]>='0'&&arr[i+6]<='9'&&arr[i+7]>='0'&&arr[i+7]<='9'&&arr[i+8]>='0'&&arr[i+8]<='9'&&arr[i+9]>='0'&&arr[i+9]<='9')
       {
        zrr={""};
                   zrr+=arr[i];
                    zrr+=arr[i+1];
                    zrr+=arr[i+2];
                    zrr+=arr[i+3];
                    zrr+=arr[i+4];
                    zrr+=arr[i+5];
                    zrr+=arr[i+6];
                    zrr+=arr[i+7];
                    zrr+=arr[i+8];
                    zrr+=arr[i+9];
                   //cout<<zrr<<endl;
                prr[a]=zrr;
                a++;
       }
       else
       {
           continue;
       }
    }
sort(prr,prr+a);
cout<<prr[a-1]<<endl;
}




