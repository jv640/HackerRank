#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int m = a.length();
    int n = b.length();

    int arr[26]={0};

    for(int i=0;i<m;i++)
    {
        int j = a[i]-'a';
        arr[j]++;
    }
   
    for(int i=0;i<n;i++)
    {
        int j = b[i]-'a';
        arr[j]--;
    }
 
    int count=0;

    for(int i=0;i<26;i++)
    {
        count+=abs(arr[i]);
    }  

    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
