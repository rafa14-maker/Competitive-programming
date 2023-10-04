    #include <bits/stdc++.h>

    using namespace std;

    const int N = 1e6+7;

    void computeLPSArray(char* pat, int M, int* lps);

    void KMPSearch(char* pat, char* txt)
    {
        int M = strlen(pat);
        int N = strlen(txt);
        int lps[M];
        computeLPSArray(pat, M, lps);
        vector<int>v;

        int i = 0;
        int j = 0;
        while (i < N) {
            if (pat[j] == txt[i]) {
                j++;
                i++;
            }

            if (j == M) {
             //   printf("Found pattern at index %d ", i - j);
              v.push_back(i-M+1);
                j = lps[j - 1];
            }
            else if (i < N && pat[j] != txt[i]) {

                if (j != 0)
                    j = lps[j - 1];
                else
                    i = i + 1;
            }
        }

         if (j == M) {
             //   printf("Found pattern at index %d ", i - j);
              v.push_back(i-M+1);
                j = lps[j - 1];
            }

        if(v.size()==0)printf("Not Found\n");
        else
        {
            cout<<v.size()<<endl;
            for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
        }

    }

    void computeLPSArray(char* pat, int M, int* lps)
    {
        int len = 0;
        lps[0] = 0;
        int i = 1;
        while (i < M) {
            if (pat[i] == pat[len]) {
                len++;
                lps[i] = len;
                i++;
            }
            else
            {
                if (len != 0) {
                    len = lps[len - 1];
                }
                else
                {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
    int main()
    {
      char arr[N],frr[N];

      int q;
      cin>>q;
      while(q--)
      {
         cin>>arr>>frr;
        KMPSearch(frr,arr);
        cout<<endl;
      }
        return 0;
    }
