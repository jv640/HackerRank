 void insertionSort1(int n, vector<int> arr) {
    if(n == 1){cout<<arr[0]; return ;}
    int lim = 0;
    for(int i = 1; i<n; i++)
        if(arr[i]<arr[i-1]){
            lim = i-1;
            break;
        }

    while(lim+1<n){
    int temp = arr[lim+1];
    bool flag = 0, change = false;
    for(int i = lim; i>-1;i--){
        if(arr[i]<=temp){
            arr[i+1] = temp;
            flag = 1;
        }
        else{
            arr[i+1] = arr[i];
            if(i == 0)
                change = true;
        }
        for(int j = 0; j<n; j++)cout<<arr[j]<<" ";
        cout<<endl;
        if(change){
            arr[0] = temp;
            for(int j = 0; j<n; j++)cout<<arr[j]<<" ";
        }

        if(flag)break;
    }
    lim++;
    }

}
