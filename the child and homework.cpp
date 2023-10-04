#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ak;
    int arr[10],a,b;
    for(int i=0;i<4;i++)
    {
        cin>>ak;
        arr[i]=ak.size()-2;
    }
    int k=0,ans;
    for(int i=0;i<4;i++)
    {
        a=0,b=0;
        for(int j=0;j<4;j++)
        {
            if(i!=j)
            {
                if(arr[i]*2<=arr[j]){
					a++;
				}
				if(arr[j]*2<=arr[i]){
					b++;
				}
            }
        }
        if(a==3||b==3)
        {
            k++;
            ans=i;
          //  break;
        }
    }

   // cout<<a<<" "<<b<<endl;

    if(k==1)
    {
        cout<<char('A'+ans)<<endl;
    }
    else
    {
        cout<<"C"<<endl;
    }
}
