
long taumBday(long int b,long  int w,long  int bc,long  int wc,long  int z) {
    
    long ans = 0;

    if(bc+z<wc){            // He will not buy white gifts
        ans = (b+w)*bc;
        ans += w*z;
    }
    else if(wc+z<bc){       // He will not buy black gifts
        ans = (b+w)*wc;
        ans += b*z;
    }
    else
    ans = w*wc + b*bc;

    return ans;

}
