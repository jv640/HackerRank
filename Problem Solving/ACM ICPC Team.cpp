
int setBits(string s1, string s2){
    int n = s1.length();
    int temp = 0;
    for(int i = 0; i<n;i++){
        int x = s1[i] - '0';
        int y = s2[i] - '0';
        if(x || y)temp++;    
    }
    // cout<<s1<<" "<<s2<<" "<<temp;
    return temp;
}
// Complete the acmTeam function below.
vector<int> acmTeam(vector<string> topic) {
    vector <int> res;
    int n = topic.size();
    
    int BitCount = 0, TeamCount = 0;
    for(int i = 0;i<n-1;i++){
        int temp = 0;
        for(int j = i+1;j<n;j++){
            temp = setBits(topic[i], topic[j]);
            if(temp>BitCount){
                BitCount = temp;
                TeamCount = 1;
            }
            else if(temp == BitCount)
                TeamCount++;
            }
    }
    res.push_back(BitCount);
    res.push_back(TeamCount);

    return res;

}
