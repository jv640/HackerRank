int hackerlandRadioTransmitters(vector<int> x, int k) {
    sort(x.begin(), x.end());
    int count = 0;
    int i = 0;
    int n = x.size();
    while(i<n){
        count++;
        int loc = x[i]+k;
        while(i<n && x[i]<=loc)i++;
        loc = x[--i] + k;
        while(i<n && x[i]<=loc)i++;  
    }

    return count;
}
