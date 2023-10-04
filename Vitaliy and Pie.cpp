#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter=0;
    int arr[30]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            arr[s[i]-'a']++;
        }
        else
        {
            if(arr[s[i]-'A']==0)counter++;
            else arr[s[i]-'A']--;
        }
    }
    cout<<counter<<endl;
}
