int marsExploration(string s) {
    int changed = 0;
    for(int i = 0;i<s.length();i+=3){
        if(s[i]!='S')changed++;
        if(s[i+1]!='O')changed++;
        if(s[i+2]!='S')changed++;
    }
    return changed;


}
