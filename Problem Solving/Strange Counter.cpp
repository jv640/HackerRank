long strangeCounter(long t) {
    
    long d = 3;
    long count = 0;
    while(count<t){
        count = count + d;
        d = d * 2;
    }
    d = d/2;
    count = count - d + 1;
    long counter = d;
    long diff = t - count;
    counter = counter - diff;

    return counter;

    // this solution is time O(n) and also not time effiecient above approach is time efficient
    
    // long ini_count = 3;
    // long counter = ini_count+1;

    // while(t--){
    //     if(counter == 1){
    //         counter = ini_count * 2 + 1;
    //         ini_count = ini_count * 2;
    //     }
    //     counter--;

    // }
    return counter;
}
