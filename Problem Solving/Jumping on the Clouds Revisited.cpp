int e=100;
    int n = c.size();
    int i = 0;
    i=(i+k)%n;
    e--;
    if(c[i]==1)e-=2;
    
    while(i!=0 ){
        i=(i+k)%n;
        e--;
        if(c[i]==1)e-=2;
        if(e<0) break;
    }
return e;
}
