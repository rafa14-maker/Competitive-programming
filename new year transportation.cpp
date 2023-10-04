//Dont Copy my code ^________^
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,k,l,sum=1;
    cin>>k>>l;
    int arr[k+1];


     for(i=1;i<k;i++)
     {
         cin>>arr[i];
     }
     while(sum<l)
     {
         sum+=arr[sum];
     }
 if(l==sum)
 {
     cout<<"YES"<<endl;
 }
 else
 {
     cout<<"NO"<<endl;
 }

}
