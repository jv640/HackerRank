string gridChallenge(vector<string> grid) {
    for(int i = 0;i<grid.size();i++)sort(grid[i].begin(),grid[i].end());
    bool flag = 0;
    for(int i = 0;i<grid.size();i++){
        for(int j = 0;j<grid.size()-1;j++){
            if(grid[j][i]>grid[j+1][i]){ flag = 1;break;}
        }if(flag)break;
    }
    if(flag)return "NO";
    else return "YES";

}
