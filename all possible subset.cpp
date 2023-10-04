#include<bits/stdc++.h>
using namespace std;

void ak(string str, int index = 0,string curr = "")
{
    int n = str.length();

    if(index==n)
    {
        cout<<curr<<endl;
        return ;
    }
     ak(str, index + 1, curr + str[index]);
    ak(str, index + 1, curr);

}


int main()
{
    string arr;
    cin>>arr;
    ak(arr);
}

