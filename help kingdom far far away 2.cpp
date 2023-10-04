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

    string arr,frr;

    int flag=0,counter=0;

    string krr;

    cin>>krr;

    for(int i=0;i<krr.size();i++)
    {
        if(krr[i]=='-')
        {
            flag++;
        }
       else if(krr[i]=='.')
       {
           counter++;
       }
       else if(counter>0)
       {
           arr+=krr[i];
       }
       else if(counter==0)
       {
           frr+=krr[i];
       }
    }

   // cout<<frr<<" "<<arr<<endl;

    int k=frr.size()%3;

    if(flag==0)
    {
        cout<<"$";
        for(int i=0;i<frr.size();i++)
        {
            if(i==k)
            {
                if(k!=0)
                {
                    cout<<","<<frr[i];
                    k+=3;
                }
                else
                {
                    cout<<frr[i];
                    k+=3;
                }
            }
            else
            {
                cout<<frr[i];
            }
        }

        if(arr.size()>0)
                {
                    cout<<".";
                    if(arr.size()==1)cout<<arr<<0;
                    else cout<<arr[0]<<arr[1];
                }
                else
                {
                   cout<<".00";
                }
                cout<<endl;
    }

    if(flag>0)
    {
        cout<<"(";
                cout<<"$";
        for(int i=0;i<frr.size();i++)
        {
            if(i==k)
            {
                if(k!=0)
                {
                    cout<<","<<frr[i];
                    k+=3;
                }
                else
                {
                    cout<<frr[i];
                    k+=3;
                }
            }
            else
            {
                cout<<frr[i];
            }
        }

        if(arr.size()>0)
                {
                    cout<<".";
                    if(arr.size()==1)cout<<arr<<0;
                    else cout<<arr[0]<<arr[1];
                }
                else
                {
                    cout<<".00";
                }

                cout<<")"<<endl;

    }


}



