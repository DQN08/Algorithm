long long Pow(long long a, long long b, long long MOD){
    long long r = 1;
    a %= MOD;
    b %= MOD - 1;
    while(b){
        if(b % 2) r = r * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return r;
}