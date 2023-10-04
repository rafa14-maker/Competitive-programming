#include<bits/stdc++.h>
using namespace std;

 vector<string>vs;
  string s;
  int n;

char c(int k)
{
      if(k==0)return '0';if(k==1)return '1';if(k==2)return '2';
      if(k==3)return '3';if(k==4)return '4';if(k==5)return '5';
      if(k==6)return '6';if(k==7)return '7';if(k==8)return '8';
      if(k==9)return '9';if(k==10)return 'A';if(k==11)return 'B';
      if(k==12)return 'C';if(k==13)return 'D';if(k==14)return 'E';
      if(k==15)return 'F';if(k==16)return 'G';if(k==17)return 'H';
      if(k==18)return 'I';if(k==19)return 'J';if(k==20)return 'K';
      if(k==21)return 'L';if(k==22)return 'M';if(k==23)return 'N';
      if(k==24)return 'O';if(k==25)return 'P';
}

char ck(char k)
{
    if(k=='0')return 'a';if(k=='1')return 'b';if(k=='2')return 'c';
    if(k=='3')return 'd';if(k=='4')return 'e';if(k=='5')return 'f';
    if(k=='6')return 'g';if(k=='7')return 'h';if(k=='8')return 'i';
    if(k=='9')return 'j';if(k=='k')return 'k';if(k=='l')return 'l';
    if(k=='C')return 'm';if(k=='D')return 'n';if(k=='E')return 'o';
    if(k=='F')return 'p';if(k=='G')return 'q';if(k=='H')return 'r';
    if(k=='I')return 's';if(k=='J')return 't';if(k=='K')return 'u';
    if(k=='L')return 'v';if(k=='M')return 'w';if(k=='N')return 'x';
    if(k=='O')return 'y';if(k=='P')return 'z';
}

void cal()
{
        for(int i=0;i<s.size();i++)
    {
        string st;
        for(int j=i;j<s.size();j++)
        {
            st += s[j];
            vs.push_back(st);
        }
    }
    sort(vs.begin(),vs.end());
}

string convert(int k)
{
   string pk ="";
   while(k>0)
   {
       int r = k % 26;
       pk+=c(r);
       k/=26;
   }
   sort(pk.begin(),pk.end());
   return pk;
}

string tot(string  k)
{
    string st;
    for(int i=0;i<k.size();i++)
    {
        st+= ck(k[i]);
    }
   // reverse(st.begin(),st.end());
    return st;
}

bool bin(string s)
{
    int l = 0;
    int r = vs.size()-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(vs[mid]==s)return true;
        else if(vs[mid]<s)l=mid+1;
        else r=mid-1;
    }
    return false;
}



void solve()
{
    vs.clear();
    cin>>n;
    cin>>s;
    cal();

    int idx = 0;

    while(idx<20)
    {
        string st = convert(idx);
      //  string st = tot(cidx);
      //  cout<<cidx<<" "<<st<<endl;
        if(bin(st))
        {
            cout<<st<<endl;
            return ;
        }
        idx++;
    }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

/*

1
10
aannttoonn

*/
