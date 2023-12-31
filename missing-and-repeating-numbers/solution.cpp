vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here

    // int n = a.size();
    // long summ = (long)n*(n+1)/2, summ2 = (long)n*(n+1)*(2*n+1)/6;
    // long asum = 0, asum2 = 0;
    // for(int i{0};i<n;++i) asum = asum + a[i], asum2 = asum2 + (long)a[i]*a[i];
    // long xsuby = asum - summ, xaddy = (asum2-summ2)/xsuby;
    // int x = (xaddy + xsuby)/2, y = xaddy - x;
    // return {x, y};

    int n = a.size();
    int xorn{n}, xora{0};
    for(int i{0};i<n;++i) xorn ^= i, xora ^= a[i];
    int axorb = xorn^xora;
    int rmsb = ((axorb^INT32_MAX)+1)&axorb;
    int xxorn{0}, xxora{0}, yxorn{0}, yxora{0};
    if(rmsb & n) xxorn = n;
    else yxorn = n;
    for(int i{0};i<n;++i){
        if(a[i] & rmsb) xxora ^= a[i];
        else yxora ^= a[i];
        if(i & rmsb) xxorn ^= i;
        else yxorn ^= i;
    }
    int x = xxorn ^ xxora, y = yxorn ^ yxora;
    for(int i{0};i<n;++i){
        if(a[i] == x) return {x,y};
        else if(a[i] == y) return {y, x};
    }
    return {x, y};
}