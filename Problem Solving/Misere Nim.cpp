string misereNim(vector<int> s) {
    if(s.size() == 1)
        return s[0]>1?"First":"Second";
    int x = 0,sum = 0;
    for(int i = 0; i<s.size();i++){
        x = x ^ s[i];
        sum+=s[i];
    }
    
    if(sum == s.size())
        return sum % 2 == 0 ? "First" : "Second";
    if(x)
        return "First";
    else
        return "Second";
}
