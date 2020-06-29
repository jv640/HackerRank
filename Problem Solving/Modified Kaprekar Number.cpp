void kaprekarNumbers(long p, long q) {
    bool flag = 0;

    for(long i = p ;i<q+1;i++){
        long prod = i*i;
        string prodString = to_string(prod);
        string left = prodString.substr(0, prodString.length()/2);
        string right = prodString.substr(prodString.length()/2);
        stringstream ss(left);
        long l = 0;
        ss >> l;
        stringstream ss1(right);
        long r = 0;
        ss1 >> r;
        // cout<<prod<<" "<<l<<" "<<r<<endl;
        if(i == l + r){
            cout<<i<<" ";
            flag = 1;
        }         
    }
    if(!flag)
        cout<<"INVALID RANGE";
}
