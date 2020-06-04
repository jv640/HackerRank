string funnyString(string s) {
    int n = s.length();
    for(int i = 0; i<(n/2);i++){
    if(abs(s[i]-s[i+1])!=abs(s[n-1-i]-s[n-1-i-1]))return "Not Funny";
}
return "Funny";

}
