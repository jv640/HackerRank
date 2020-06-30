string happyLadybugs(string b) {

    int n = b.length();
    int count_ = 0;
    vector<int> vect(26, 0);
    
    for(int i = 0;i<n;i++){
        if(b[i] == '_')count_++;
        else
            vect[b[i]-'A']++;
    }
    
    // If any of character is only one then no matter how we arrange that bug gonna be unhappy always
    for(int i = 0; i<26; i++){
        if(vect[i] == 1)return "NO";
    }
    
    // if there is only one space and no bug then when there is no bug then all are happy :)
    if(n == 1 && count_ == 1)return "YES";
    
    bool alreadyHappy = true;
    
    // check if arrangement is already happy or not
    for(int i = 0; i< n-1;i++){
        if(i == 0){
            if(b[i]!=b[i+1]){
                alreadyHappy = false;
                break;
            }
        }
        else if(i == n-1){
            if(b[i] != b[i-1]){
                alreadyHappy = false;
                break;
            }
        }
        else if(b[i] != b[i+1] && b[i]!=b[i-1]){
                alreadyHappy = false;
                break;
            }
    }
    
    // if already happy then return yes
    if(alreadyHappy)return "YES";

    // if not happy and also no empty slot then we cant move them so they will always be unhappy
    if(alreadyHappy == false && count_ == 0)return "NO";

    // in rest cases(every bug coun should be atleast 2 and one empty slot needed) then we can make them happy by arranging 
    return "YES";
}
