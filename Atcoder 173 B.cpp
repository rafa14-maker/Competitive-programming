#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4]={0};
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s=="AC")arr[0]++;
        if(s=="WA")arr[1]++;
        if(s=="TLE")arr[2]++;
        if(s=="RE")arr[3]++;
    }
    printf("AC x %d\n",arr[0]);
    printf("WA x %d\n",arr[1]);
    printf("TLE x %d\n",arr[2]);
    printf("RE x %d\n",arr[3]);
}
