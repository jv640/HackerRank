
bool valid_tri(int i, int j, int k, vector<int> arr){
    if(arr[i]+arr[j]>arr[k] && arr[i]+arr[k]>arr[j] && arr[j]+arr[k]> arr[i])return true;
    else return false;
}

// Complete the maximumPerimeterTriangle function below.
vector<int> maximumPerimeterTriangle(vector<int> sticks) {
    sort(sticks.begin(),sticks.end());
    unsigned long int maxP = 0;
    bool flag = 0;
    int ii,jj,kk;
    for(int i = 0;i<sticks.size()-2;i++){
        for(int j = i+1;j<sticks.size()-1;j++){
            for(int k = j+1;k<sticks.size();k++){
                if(valid_tri(i,j,k,sticks))
                {   unsigned long int peri = sticks[i]+sticks[j]+sticks[k];

                    if(peri>maxP){
                        maxP = peri;
                        ii = sticks[i];
                        jj = sticks[j];
                        kk = sticks[k];
                        flag = 1;
                    }
                }                
            }
        }
    }
    vector <int> vect;
if(flag){
    
    vect.push_back(ii);
    vect.push_back(jj);
    vect.push_back(kk);
}
else {
    vect.push_back(-1);
}
return vect;


}
