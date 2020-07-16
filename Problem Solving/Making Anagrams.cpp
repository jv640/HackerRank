int makingAnagrams(string s1, string s2) {
    int m = s1.length();
    int n = s2.length();
    vector<int> v1(26, 0),v2(26, 0);
    for(int i = 0; i<m; i++)
        v1[s1[i]-'a']++;
    for(int i = 0; i<n; i++)
        v2[s2[i]-'a']++;
    int sum = 0;
    for(int i = 0; i<26; i++)
        sum+=abs(v1[i]-v2[i]);

    return sum;
}
