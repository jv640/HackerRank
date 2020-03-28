vector<int> permutationEquation(vector<int> p) {
    vector<int> result;
    vector<int> :: iterator it;
    int n = p.size();
    for(int i=1;i<n+1;i++){
        result.push_back(find(p.begin(),p.end(),find(p.begin(),p.end(),i)-p.begin()+1)-p.begin()+1);
    }
    return result;
}
