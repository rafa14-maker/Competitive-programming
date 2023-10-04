#include<bits/stdc++.h>
using namespace std;

string arr[]={"HELLO","HOLA","BONJOUR","CIAO","ZDRAVSTVUJTE","HALLO"};
string frr[]={"ENGLISH","SPANISH","FRENCH","ITALIAN","RUSSIAN","GERMAN"};

int main()
{
    int counter=0;
    while(1)
    {
        string s;
        cin>>s;
        if(s=="#")break;
        int flag=0;
        for(int i=0;i<6;i++)
        {
            if(arr[i]==s)
            {
                printf("Case %d: ",++counter);
                cout<<frr[i]<<"\n";
                flag++;
            }
        }
        if(flag==0)
        {
             printf("Case %d: ",++counter);
                cout<<"UNKNOWN"<<"\n";
                flag++;
        }
    }
}
