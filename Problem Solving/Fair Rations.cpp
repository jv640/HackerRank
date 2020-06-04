/* Here i had returned -1 for Showing NO to screen because there was no option for NO so made changes in main function also*/


int fairRations(vector<int> B) {
    int size = B.size();
    int count = 0;
    for(int i = 0;i<size;i++){
        if(B[i]%2!=0)count++;
    }
    if(count%2!=0)return -1;
    int i = size-1;
    count = 0;
    while(i>0){
        if(B[i]%2!=0){
            B[i]++;
            B[i-1]++;
            count+=2;
        }
        i--;
    }
    return count;

}
