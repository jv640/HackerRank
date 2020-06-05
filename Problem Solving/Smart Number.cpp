// catch here is only perfect sqaure numbers are smart number 

bool is_smart_number(int num) {
    int val = (int) sqrt(num);
    if(val * val == num)                    // change num/val == 1 to val*val == num
        return true;
    return false;
}
