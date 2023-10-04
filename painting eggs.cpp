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

    int sa=0,sb=0,flag=0,a,b;
    string arr;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(abs((sa+a)-sb)<=500)
        {
            sa+=a;
            arr+='A';
        }
        else if(abs((sb+b)-sa)<=500)
        {
            sb+=b;
            arr+='G';
        }
        else
        {
            flag=1;
        }
    }

    if(flag!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<arr<<endl;
    }


}



