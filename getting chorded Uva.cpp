#include<bits/stdc++.h>
using namespace std;

int str2int(const string &input) {
  switch (tolower(input[0])) {
    case 'a':
      if (input.size() == 1) return 1;
      return (input[1] == '#' ? 2 : 12);
    case 'b':
      return (input.size() == 1 ? 3 : 2);
    case 'c':
      return (input.size() == 2 ? 5 : 4);
    case 'd':
      if (input.size() == 1) return 6;
      return (input[1] == '#' ? 7 : 5);
    case 'e':
      return (input.size() == 1 ? 8 : 7);
    case 'f':
      return (input.size() == 2 ? 10 : 9);
    case 'g':
      if (input.size() == 1) return 11;
      return (input[1] == '#' ? 12 : 10);
  }
}
string int2str(int n)
{
    string result[12] = { "A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#" };
  return result[n-1];
}

int main()
{
  int arr[3];
  string a,b,c;
  while(cin>>a>>b>>c)
  {
      cout<<a<<" "<<b<<" "<<c;
       arr[0]=str2int(a);
       arr[1]=str2int(b);
       arr[2]=str2int(c);

       sort(arr,arr+3);

       int tr=false;
       do{
        int ak=arr[1]-arr[0];
        if(ak<0)ak+=12;
        int bk=arr[2]-arr[1];
        if(bk<0)bk+=12;

        if(ak==4&&bk==3)
        {
            tr=true;
            cout << " is a " << int2str(arr[0]) << " Major chord." << endl;
            break;
        }
        else if(ak==3&&bk==4)
        {
            tr=true;
             cout << " is a " << int2str(arr[0]) << " Minor chord." << endl;
             break;
        }

       }while(next_permutation(arr,arr+3));

       if(!tr)cout<<" is unrecognized."<<endl;
  }
}
