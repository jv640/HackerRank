int lonelyinteger(vector<int> a) {
    sort(a.begin(),a.end());
    
    for(int i = 0;i<a.size();i+=2){
        if(i == a.size()-1)return a[i];
        if(a[i]!=a[i+1])return a[i];
    }
    return a[0];

}
