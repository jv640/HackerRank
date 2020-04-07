int beautifulTriplets(int d, vector<int> arr) {
    int count =0;
    for(int a : arr)
        if(binary_search(arr.begin(),arr.end(),a+d) && binary_search(arr.begin(),arr.end(),a+d*2))count++;
    return count;
}
