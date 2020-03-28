string angryProfessor(int k, vector<int> a) {
    int n = a.size();
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]<1)count++;
    }
    if(count>k-1)return "NO";
    else return "YES";


}
