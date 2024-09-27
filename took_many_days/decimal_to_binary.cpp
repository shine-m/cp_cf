int dtoi(int x){
    int ans = 0;
    int k = 1;
    while(x>0){
        ans = ans + (x % 2)*k;
        x /= 2;
        k *= 10;
    }
    return ans;
}