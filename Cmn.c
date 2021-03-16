int C(int n,int m){
    int res = 1,j=1;
    for(int i=0;i<m;i++){
        res *= (n-i);
        while(j<=m && res%j==0){    //能除先除，避免溢出
            res /= j;
            j++;
        }
    }
    return res;
}