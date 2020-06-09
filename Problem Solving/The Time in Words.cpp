string timeInWords(int h, int m) {
    string one[] = { "", "one ", "two ", "three ", "four ", 
                 "five ", "six ", "seven ", "eight ", 
                 "nine ", "ten ", "eleven ", "twelve ", 
                 "thirteen ", "fourteen ", "fifteen ", 
                 "sixteen ", "seventeen ", "eighteen ", 
                 "nineteen " };
    string res = "";
    if(m == 0){
        res = one[h] + "o' clock";
        return res;
    }

    int flag = 0;
    if(m>30){
        flag = 1;
        m = 60 - m;
    }

    
    
    if(m<20){
        if(m==15)
            res = "quarter ";
        else{   
            res =res + one[m];
            if(m == 1)
                res+="minute ";
            else
                res+="minutes ";
        }
    }
    else if(m>19 && m<30)
        res = "twenty " + one[m-20] + "minutes ";
    else if(m==30)
        res = "half ";

    if (flag)
        res = res + "to " + one[h+1];
    else
        res = res + "past " + one[h];
    return res;
}
