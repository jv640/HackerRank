  #include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    
  for (int i = 97; i < (97 + 25); i++) {
    char c = i;
    if (s1.find(c, 0) != std::string::npos &&
        s2.find(c, 0) != std::string::npos) 
        return "YES";
  }
  return "NO";
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
