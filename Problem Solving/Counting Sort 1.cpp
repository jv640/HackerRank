vector<int> countingSort(vector<int> arr) {
    vector<int> vect (100, 0);

    int n = arr.size();
    for(int i = 0; i<n;i++)
        vect[arr[i]]++;

    return vect;
}
