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

    long long arr[100005],frr[100005];

    int n;
    cin>>n;

    long long k,l,sum=0;

    int a=0,b=0;

    for(int i=0;i<n;i++)
    {
        cin>>k;
        l=k;
        sum+=k;
        if(k>0)
        {
            arr[a]=k;
            a++;
        }
        else if(k<0)
        {
            frr[b]=(k*(-1));
            b++;
        }
    }

    if(sum>0)
    {
        cout<<"first"<<endl;
        return 0;
    }
    else if(sum<0)
    {
        cout<<"second"<<endl;
        return 0;
    }

    for(int i=0,j=0;i<a,j<b;i++,j++)
    {
        if(arr[i]>frr[j])
        {
            cout<<"first"<<endl;
            return 0;
        }
        else if(arr[i]<frr[j])
        {
            cout<<"second"<<endl;
            return 0;
        }
    }

    if(l>0)
    {
    cout<<"first"<<endl;
    }
    else if(l<0)
    {
    cout<<"second"<<endl;
    }
}



