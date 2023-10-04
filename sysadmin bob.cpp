#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    if(arr[0]=='@')
    {
        cout<<"No solution"<<endl;
        return  0;
    }
    int frr[arr.size()+5];
    int k=0,b=0;

    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]=='@')
        {
            b++;
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[j]=='@')
                {
                    if(i-1>=0&&j+1<arr.size()&&j-i>2&&arr[i-1]>='a'&&arr[i-1]<='z'&&arr[j+1]>='a'&&arr[j+1]<='z')
                    {
                            frr[k]=i+1;
                            k++;
                            arr[i]='9';
                           // arr[j]='9';
                           // cout<<i<<" "<<j<<endl;
                            break;
                    }
                    else
                        {
                            cout<<"No solution"<<endl;
                            return 0;
                        }

                }
            }
        }
    }
    int p=0;

    if(b==0)
    {
        cout<<"No solution"<<endl;
                            return 0;
    }
    if(b==1)
    {
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]=='@'&&i+1>=arr.size())
            {
                cout<<"No solution"<<endl;
                            return 0;
            }
        }
    }

  //  for(int i=0;i<k;i++)cout<<frr[i]<<" ";
  //  cout<<endl;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='9')cout<<"@";
       else if(frr[p]==i&&b>=2)
       {
           cout<<arr[i]<<",";
           p++;
       }
       else
       {
           cout<<arr[i];
       }
    }
    cout<<endl;

}
