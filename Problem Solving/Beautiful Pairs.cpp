int beautifulPairs(vector<int> A, vector<int> B) {
    int n = A.size();
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int i = 0, j =0;
    int count = 0;
    while(i<n && j < n){
        if(A[i] == B[j]){
            count++;
            i++;j++;
        }
        else if(A[i] > B[j])
            j++;
        else
            i++;
    }
    if(count == n)return count -1;  // when we aleady have maximum pair then if we have to change one element it means we have to reduce one from our maximum value
    return count+1;
}
