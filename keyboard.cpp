#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,ss;
    char c;
    cin>>c>>arr;

    ss=("qwertyuiopasdfghjkl;zxcvbnm,./");

    int i;

    for(i=0;i<arr.size();i++)
    {

		if(c=='R')
			arr[i] = ss[ss.find(arr[i])-1];
		else
			arr[i] = ss[ss.find(arr[i])+1];
    }
    cout<<arr<<endl;;

}
