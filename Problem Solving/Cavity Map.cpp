vector<string> cavityMap(vector<string> grid) {
    int n = grid.size();
    if(n<3)return grid;
    vector<string> vect;
    vect.push_back(grid[0]);

    for( int i = 1;i<n - 1;i++){
        string s = "";
        s.push_back(grid[i][0]);
        for(int j = 1;j<n-1;j++){
            if( grid[i][j] > grid[i-1][j] &&
                grid[i][j] > grid[i+1][j] &&
                grid[i][j] > grid[i][j-1] &&
                grid[i][j] > grid[i][j+1] )
                s.push_back('X');
            else
                s.push_back(grid[i][j]);
        }
        s.push_back(grid[i][n-1]);
        vect.push_back(s);
    }
    vect.push_back(grid[n-1]);
    return vect;
}
