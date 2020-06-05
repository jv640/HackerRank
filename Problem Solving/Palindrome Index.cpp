// Here we have one main hint given
// first either the string will be a palindrome or if not then it will surely become after removing one character from  it

int palindromeIndex(string s) {
    int n = s.length();
   for(int i = 0;i<n/2;i++){
       if(s[i]!=s[n-1-i]){
           if(s[i]==s[n-1-i-1] && s[i+1] == s[n-1-i-2])return n-1-i;
           else return i;
       }
   }
   return -1;
}
