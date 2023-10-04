#include<bits/stdc++.h>
using namespace std;
#define max1 4294967296
int main()
{
    int t;
    cin>>t;
    long long int counter=0,flag=0;
    vector<long long>arr;
    while(t--)
    {
        string s;
        cin>>s;
        if(flag==0){
        if(s=="add")
        {
            if(arr.size()==0){counter+=1;
            if(counter>=max1)
            {
               // cout<<"OVERFLOW!!!"<<endl;
                flag++;
            }
            }
            else
            {
               long long a=1;
                for(int i=0;i<arr.size();i++)
                {
                    a*=arr[i];
                    if(a>=max1)
            {
              //  cout<<"OVERFLOW!!!"<<endl;
                flag++;
            }
                }
                if(counter+a>=max1)flag++;

              counter+=a;
              if(counter>=max1)
            {
               // cout<<"OVERFLOW!!!"<<endl;
                flag++;
            }
            }
        }
        else if(s=="end")
        {
          arr.pop_back();
        }
        if(s=="for")
        {
             long long a;
             cin>>a;
             arr.push_back(a);
        }
        }
    }
 // for(int i=0;i<m;i++)cout<<arr[i]<<" ";
    if(flag==0)cout<<counter<<endl;
    else cout<<"OVERFLOW!!!"<<endl;
}
