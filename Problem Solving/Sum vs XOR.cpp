// The main catch here is you only have to find number of zeroes in binary form of given number
// then number of zeroes raise to power of 2 ( to find how many different number you can generate with those zeroes

long sumXor(long n) {
  
    int countZeroes = 0;
    while(n){
        if( (n & 1) == 0)countZeroes++;
        n>>=1;
    }
    return pow(2,countZeroes);


}
