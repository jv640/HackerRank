string caesarCipher(string s, int k) {

    k %=26;
    for(int i = 0; i< s.length();i++){
        if(isalpha(s[i])){
            // if(s[i]+k>122)s[i] = (char)'a' + s[i] + k - 123;
            

            if(isupper(s[i])){
                if(s[i]+k>90)s[i] = 'A' + s[i] + k - 91;
                else if(k<0)s[i] = 65+26+k;
                else s[i] = s[i]+k;
                
            }
            else{
                if(s[i]+k>122)s[i] ='a' + s[i] + k - 123;
                else if(k<0)s[i] = 97+26+k;
                else s[i] = s[i]+k;
                
            }
        }
    }
    return s;
}
