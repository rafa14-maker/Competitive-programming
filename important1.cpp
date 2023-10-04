  #include<bits/stdc++.h>
    using namespace std;
     
     int main()
     {
     	string s, n;
     	cin >> s;
     
     	for (int i=0; i < s.size(); i++) {
     		char c = tolower(s[i]);
     		switch (c) {
     			case 'a':
     			case 'o':
     			case 'y':
     			case 'u':
     			case 'e':
     			case 'i':
     			break;
     			default:
     			n += '.';
     			n += c;
     		}
     	}
     	cout << n << endl;
     
     	return 0; 
     }
