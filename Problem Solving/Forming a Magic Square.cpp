
bool is_MagicSquare(vector<vector<int>> s){             #function to find given matrix is magic square or not
    int n = s.size();
    int sum = 0;
    for(int i = 0;i<n;i++)sum+=s[0][i];

    for(int i = 0; i<n;i++){
        int rowS = 0,colS = 0;
        for(int j = 0;j<n;j++){
            rowS+=s[i][j];
            colS+=s[j][i];
        }
        if(rowS!=sum || colS!=sum)return 0;
    }
    int d1 = 0,d2 = 0;
    for(int i = 0;i<n;i++){
        
        d1+=s[i][i];
        d2+=s[i][n-i-1];
    }
    if(d1!=sum || d2!=sum)return 0;
    
    return 1;
}

int difference(vector<vector<int>> a,vector<vector<int>> b){              # this function is to find difference
    int n = a.size();
    int diff = 0;
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++)
        diff += abs(a[i][j]-b[i][j]);
    }
    return diff;
}
// Complete the formingMagicSquare function below.

int formingMagicSquare(vector<vector<int>> s) {                 # Main function
    if(is_MagicSquare(s)) return 0;                   # first checking weather a given is magic square or not

    int diff = INT_MAX;
    int n = s.size();
    vector<int> v(n*n);
    for(int i = 0;i<n*n;i++)v[i] = i+1;

    do{
        vector<vector<int>> vv( n , vector<int> (n));
        int ptr = 0;
        for(int i = 0; i<n;i++){
            for(int j = 0;j<n;j++){
                vv[i][j] = v[ptr];
                ptr++;
            }
        }
        if(is_MagicSquare(vv)){
            int temp = difference(vv,s);
            if(temp<diff)diff = temp;
        }
            
    }while(next_permutation(v.begin(),v.end()));


return diff;
}
