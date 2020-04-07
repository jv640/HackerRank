int minimumDistances(vector<int> a) {

    int dist=1000;
    vector<int> :: iterator it;
    for(it = a.begin();it!=a.end();it++){
        int temp;
        if(find(it+1,a.end(),*it)!=a.end())
            temp = find(it+1,a.end(),*it) - it;
            if(temp<dist)dist = temp;
        if(dist == 1)break;
    }
    if(dist!=1000)
        return dist;
    else return -1;
}
