string gameOfThrones(string s) {
    int n = s.length();
    vector<int> vect (26, 0);
    for(int i = 0; i<n; i++)
        vect[s[i]-'a']++;

    bool odd = false;
    for(int i = 0; i<26; i++){
        if(vect[i]%2 == 1){
            if(!odd)
                odd = true;
            else
                return "NO";
        }
    }
    return "YES";

}
