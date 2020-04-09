
bool isValid(string str){
    for(int a = 0; a<str.length()-1;a++){
        if(str[a]==str[a+1])return false;
    }
    return true;
}


int alternate(string s) {
    if(s.length()<2)return 0;       // FOR STRING OF 0 OR 1 LENGTH

    int result = 0;
    for(int i = 97;i<123;i++){
        for(int j = i+1;j<123;j++){
            char ch1 = (char)i;
            char ch2 = (char)j;
            
            string temp;
            for(int x = 0;x<s.length();x++){
                if(s[x]==ch1 || s[x] == ch2)temp.push_back(s[x]);
            }
            if(isValid(temp)){
                
                if(result<temp.length()){
                    result = temp.length();
                    // cout<<temp<<"\n";  TO PRINT OUT WHICH STRINGS ARE VALID
                }
            }
        }
    }
    return result;
}
