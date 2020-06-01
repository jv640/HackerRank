int chocolateFeast(int n, int c, int m) {
    int eaten = 0, wrappers = 0;

    eaten = n/c;
    wrappers = eaten;

    while(wrappers-m>-1){
        wrappers = wrappers - m+1;  // +1 because he will get one chocolate so counting wrapper of that chocolate also
        eaten++;
    }

    return eaten;

}
