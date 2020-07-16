int maximizingXor(int l, int r) {
    int max = 0;
    for(int i = l; i<r; i++){
        for(int j = i+1; j<r+1; j++){
            int x = i^j;
            if(x>max)max = x;

        }
    }
return max;

}
