int max(int a, int b){
    if(a>b)return a;
    else return b;
}
int pickingNumbers(vector<int> a) {
    vector <int> arr(100, 0);
    int n = a.size();
    for(int i=0;i<n;i++)
    {
        arr[a[i]]++;
    }
    int result = 0;
    for(int i=1;i<100;i++)
    {
        result = max(result, arr[i]+arr[i-1]);
    }
    return result;
}
