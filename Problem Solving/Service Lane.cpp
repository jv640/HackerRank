In this problem the pre written code has one problem which i got. and in that the width array was not given to the function so i write the
whole code again



#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> width;
    int q;
    cin>>q;
    int queries[q][2];
    for(int i = 0;i<n;i++){
        int num;
        cin>>num;
        width.push_back(num);
        }

    
    for(int i = 0;i<q;i++)
        for(int j = 0;j<2;j++)cin>>queries[i][j];

    vector <int> res;
    for(int i =0;i<q;i++){
        vector<int> :: iterator it1,it2;
        it1 = width.begin()+queries[i][0];
        it2 = width.begin()+queries[i][1];
        res.push_back(*min_element(it1,it2+1));
    }
    for(int i =0; i<q;i++)cout<<res[i]<<"\n";


}
