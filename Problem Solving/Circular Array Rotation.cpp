vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int n = a.size();
    int ptr = 0;
    k%=n;
    ptr = ptr+(n-k);
    
    
    vector<int> result;
    int nq = queries.size();
    for(int i=0;i<nq;i++)
    {
        result.push_back(a[(ptr+queries[i])%n]);
    }
    return result;
}
