int workbook(int n, int k, vector<int> arr) {
    int ans = 0;
    int page = 1;
    int problem = 0;
    for(int i = 0;i<n;i++){
        problem = 0;
        while(arr[i]>0){
            int capacity = k;
            while(capacity-- && arr[i]>0){
                problem++;
                arr[i]--;
                if(problem==page)ans++;
            }
            page++;
        }
        
    }
    return ans;
}
