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

    string arr;
    cin>>arr;

    int counter=0,k=0;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='8')
        {counter++;
        }

       // if(arr[i]!='8')break;
    }

   int a=arr.size()-11;
   a/=2;

    if(counter<=a)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    int b=counter-a;

    for(int i=arr.size()-1;i>=0;i--)
    {
        if(arr[i]=='8')
        {
            b--;
            if(b==0)
            {
                if(i-a==1)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
    }

}



