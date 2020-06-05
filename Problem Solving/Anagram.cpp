int anagram(string s) {
    int n = s.length();
    if(n%2!=0) return -1;
    int changes = 0;
    vector <int> count_letter1 (26,0),count_letter2 (26,0);
    for(int i = 0;i<n/2;i++)count_letter1[s[i]-'a']++;
    for(int i = n/2;i<n;i++)count_letter2[s[i]-'a']++;
    
    for(int i = 0;i<26;i++)
        if(count_letter1[i]>count_letter2[i])
            changes += count_letter1[i]-count_letter2[i];

    return changes;

}
