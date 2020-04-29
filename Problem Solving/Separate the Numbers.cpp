bool comp(string s1,string s2){
    if(s1.length()!=s2.length())return false;
    else{
        for(int i =0;i<s1.length();i++)
            if(s1[i]!=s2[i])return false;
    }
    return true;
}
// Complete the separateNumbers function below.
void separateNumbers(string s) {
    int len = s.length();
    long int min =0;
    bool flag = 0;
    for(int i = 0;i<len/2;i++){
        string str = "";
        str = s.substr(0,i+1);
        stringstream ss(str);
        // ss<<str;
        long int x = 0;
        ss>>x;
        min = x;
        
        while(str.length()<s.length()){
            x++;
            str += to_string(x);
            
        }
        if(comp(str,s)){cout<<"YES "<<min<<endl;flag = 1;break;} 
    }
    if(!flag)
        cout<<"NO\n";


}
