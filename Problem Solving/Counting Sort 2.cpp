vector<int> countingSort(vector<int> arr) {
    int n = arr.size();
    vector<int> vect (100, 0);
    for(int i = 0; i<n; i++)
        vect[arr[i]]++;

    vector<int> result;
    for(int i = 0; i<100;i++)
        for(int j = 0; j<vect[i]; j++)
            result.push_back(i);

    return result;
}
