/* Approach is simple first sort out array C and find difference between each station then do half of it
but special cases will left in that case for example if first city is not station then we cant calculate distance of first city and
first space station this can be done by adding a virtual space station before 1st city wch will have value of -(first space staion)
and same for last station */

int flatlandSpaceStations(int n, vector<int> c) {
    
    sort(c.begin(),c.end());
    int cSize = c.size();
    
    int diff = 0;
    vector <int> myvect;
    if(c[0]!=0)
        myvect.push_back(0-c[0]);

    for(int i = 0; i<cSize;i++)myvect.push_back(c[i]);

    if(c[cSize-1]!=n-1)
        myvect.push_back(2*(n-1-c[cSize-1])+c[cSize-1]);

    for(int i = 1; i<myvect.size();i++){
        int temp = myvect[i]-myvect[i-1];
        if(temp>diff)diff = temp;
        cout<<temp;
    }

return diff/2;
}
