void insertionSort2(int n, vector<int> arr) {
   if(n == 1){cout<<arr[0]; return ;}
    
    for(int i = 1; i<n; i++){
        bool change = false;
        if(arr[i]<arr[i-1]){
            int temp = arr[i];
            for(int j = i-1; j>-1;j--){
                if(arr[j]<=temp){
                    arr[j+1] = temp;
                    break;
                }
                else{
                    arr[j+1] = arr[j];
                    if(j == 0)
                        change = true;
                }
            }
            if(change)arr[0] = temp;
        }
        for(int j = 0; j<n; j++)cout<<arr[j]<<" ";
        cout<<endl;
    }
}
