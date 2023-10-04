#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[100],i;
	for(i=0;i<4;i++){
		cin>>arr[i];
	}
	sort(arr,arr+3);
	
 if((arr[0]+arr[1])>arr[2]){cout<<"TRIANGLE\n" ;  }
   else  if((arr[0]+arr[1])>arr[3]){cout<<"TRIANGLE\n" ;  }
    else  if((arr[1]+arr[2])>arr[3]){cout<<"TRIANGLE\n" ; }
   else  if(arr[0]+arr[1]==arr[2]){cout<<"SEGMENT\n" ;  }
   else  if(arr[0]+arr[1]==arr[3]){cout<<"SEGMENT\n" ;  }
  else   if(arr[2]+arr[1]==arr[3]){cout<<"SEGMENT\n" ;  }
    else cout<<"IMPOSSIBLE\n";
	

}
