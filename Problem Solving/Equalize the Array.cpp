int equalizeArray(vector<int> arr) {
    vector<int> vec(100,0);
    int n = arr.size();
    for(int i=0;i<n;i++){
        vec[arr[i]]++;
    }
    return n-*max_element(vec.begin(),vec.end());

}
