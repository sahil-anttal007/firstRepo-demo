#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int nCr(int n, int r){
    int fact_nCr = factorial(n) / (factorial(r) * factorial(n - r));
    return fact_nCr;
}
int main(){
    int n, r;
    cout << "Enter n for nCr calculation: ";
    cin >> n;
    cout << "Enter r for nCr calculation: ";
    cin >> r;
    cout << nCr(n, r) << endl;
    return 0;
}