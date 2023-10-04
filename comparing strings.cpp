#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,frr;
   cin>>arr>>frr;
   int ans=0;

      for(int i=0; i<arr.size(); ++i){
if (arr[i]!=frr[i]){ans++;}
}


   sort(arr.begin(),arr.end());
   sort(frr.begin(),frr.end());


    if(frr==arr&&ans==2)
    {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
}
