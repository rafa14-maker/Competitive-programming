#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,counter=0;

    cin>>n;

    long long arr[n+5];

    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n;i++)
    {
       if(i!=0)
       {
           if(arr[i]<arr[i-1])
           {
               counter+=arr[i-1]-arr[i];
           }
       }
    }

    cout<<counter<<endl;
}
/*47
479793446 951468508 89486286 338446715 32648506 624498057 608503040 669251062 922459299 753303599 15471514 633954104 726178809 25774434 239818174 886000554 86565563 340322990 233160987 244152140 400122002 267331289 113220645 554372347 628491411 141545764 72472415 172718507 818323067 524691081 273905810 540908460 264978418 971408123 336064021 681508839 387880395 446312618 486187013 687624992 335098176 259987774 832741771 604233011 459307319 378796313 520655387
*/