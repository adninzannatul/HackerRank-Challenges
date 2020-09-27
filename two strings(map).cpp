#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
  int s1_size=s1.length();
  int s2_size=s2.length();
  string res;
  map<char,int>m;
  for(int i=0;i<s1_size;i++) m[s1[i]]=m[s1[i]]+1;
  for(int i=0;i<s2_size;i++) {
      if(m[s2[i]]>1) {
          res= "YES"; break;
      }
      else res= "NO";
   }
   return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
