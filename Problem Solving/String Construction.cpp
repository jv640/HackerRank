// The main trick here is to understand the question . Question basically want you to find number of distinct alphabets in string
// Because you have to pay cost only for alphabet which are present and only once because next time it can cop as a substring

int stringConstruction(string s) {
    vector <int> alphabets (26,0);
    for(int i = 0;i<s.length();i++)
        alphabets[s[i]-'a']++;

    int count = 0;
    for( int i = 0; i<26;i++)
        if(alphabets[i]==0)count++;

    return 26-count;


}
