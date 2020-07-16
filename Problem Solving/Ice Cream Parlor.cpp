vector<int> icecreamParlor(int m, vector<int> arr) {
    // sort(arr.begin(), arr.end());
    int n = arr.size();
    vector<int> result;

    
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]+arr[j] == m){
                result.push_back(i+1);
                result.push_back(j+1);
                break;
            }
        }
    }
    return result;
}
