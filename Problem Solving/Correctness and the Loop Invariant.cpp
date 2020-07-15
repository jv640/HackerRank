int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)cin>>arr[i];
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
                    if(j == 0)
                        change = true;
                }
                if(change)arr[0] = temp;
            }
        }
    }
    for(int j = 0; j<n; j++)cout<<arr[j]<<" ";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
