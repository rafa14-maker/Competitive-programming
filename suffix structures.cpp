/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;
 int krr[26];
int main()
{
    //seive();
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string arr,frr;
    cin>>arr>>frr;

    int k=0;

    for(int i=0;i<arr.size();i++)
    {
        if(k<frr.size()&&arr[i]==frr[k])
        {
            k++;
        }
        krr[arr[i]-'a']++;
    }
    if(k==frr.size())
    {
        cout<<"automaton"<<endl;
        return 0;
    }
    int f=0;
    for(int i=0;i<frr.size();i++)
    {
        if(krr[frr[i]-'a']>=1)
        {
            krr[frr[i]-'a']--;
        }
        else
            {
                f=1;
            }
    }

    if(arr.size()==frr.size()&&f==0)
    {
        cout<<"array"<<endl;
        return 0;
    }
    else if(f==0)
    {
        cout<<"both"<<endl;
        return 0;
    }
    else
    {
        cout<<"need tree"<<endl;
        return 0;
    }

}


