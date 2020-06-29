vector<int> stones(int n, int a, int b) {
    vector<int> vect;
    if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }
    int val = a*(n-1);
    vect.push_back(val);
    if(a == b) return vect;
    while(val<b*(n-1)){
        val+=b-a;
        vect.push_back(val);
    }
    return vect;
}
