int runningTime(vector<int> arr) {
    int n = arr.size();
    int count = 0;
    for(int i = 1; i<n; i++){
        if(arr[i]<arr[i-1]){
            int temp = arr[i];
            for(int j = i-1; j>-1;j--){
                bool change = false;
                if(arr[j]<=temp){
                    arr[j+1] = temp;
                    break;
                }
                else{
                    arr[j+1] = arr[j];
                    count++;
                    if(j == 0)
                        change = true;
                }
                if(change)arr[0] = temp;
            }
        }
    }
    return count;
}
