
bool isValid(string str){
    for(int a = 0; a<str.length()-1;a++){
        if(str[a]==str[a+1])return false;
    }
    return true;
}
// Complete the 
int alternate(string s) {

    if(s.length()<2)return 0;
    int result = 0;

    vector<char> diff;
    for(int i = 0;i<s.length();i++){
        if(find(diff.begin(),diff.end(),s[i])==diff.end())diff.push_back(s[i]);
    }
    // for(int i = 0;i<diff.size();i++)cout<<diff[i];   CHECKING ALL DISTINCT CHARACTERS

    for(int i = 0;i<diff.size();i++){
        for(int j = i+1;j<diff.size();j++){
            char ch1 = (char)diff[i];
            char ch2 = (char)diff[j];
            
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
