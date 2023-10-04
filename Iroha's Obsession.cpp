#include<bits/stdc++.h>
using namespace std;

vector<int>v;
int n,k,m=-1,p=0;

void f(int sum)
{
 //   cout<<sum<<endl;

    if(sum>=n)
    {
        if(m==-1)m=sum;
        else m=min(sum,m);

        return;
    }


    for(int i=0;i<v.size();i++)
    {
        if(sum==0&&v[i]!=0){
        f(sum*10+v[i]);
        }
        else if(sum!=0)
        {
            f(sum*10+v[i]);

        }
    }
}

int main()
{
    cin>>n>>k;

    int arr[n+5];
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<=9;i++)
    {
        int flag=0;
        for(int j=0;j<k;j++)
        {
            if(arr[j]==i)
            {
                flag++;
                break;
            }
        }
        if(flag==0)v.push_back(i);
    }

  //  for(int i=0;i<v.size();i++)cout<<v[i]<<endl;
    f(0);
   // f(0,1);
    cout<<m<<endl;
}
