#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 1e7 + 10;
vector <bool> isPrime(N, true);
vector <int> primes;

void primeGen(){
    for(int i=2; i * i <= N; i++){
        if(isPrime[i]){
            for(int j = i+i; j<N; j+=i){
                isPrime[j] = false;
            }
        }
    }
    for(int i = 2; i < N; i++){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    primeGen();
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        ll cnt = 0;
        for(auto p : primes){
            if(p > n) break;
            cnt += n / p;
        }
        cout << cnt << endl;
    }
    return 0;
}