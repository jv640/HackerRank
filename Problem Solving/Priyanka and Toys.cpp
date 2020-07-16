int toys(vector<int> w) {
    int n = w.size();
    int count = 1;
    sort(w.begin(), w.end());
    int lim = w[0] + 4;
    for(int i = 1; i<n; i++)
        if(w[i]>lim){
            count++;
            lim = w[i]+4;
        }

    return count;
}
