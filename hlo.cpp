#include<iostream>
using namespace std;
int SumOfDigits(int n){
    int digsum = 0;
    while(n>0){
        int lastDig = n % 10;
        n /= 10;
        digsum += lastDig;
    }
    return digsum;
}
int main(){
    int n;
    cin >> n;   
    cout << "Sum of digits of " << n << " is " << SumOfDigits(n) << endl;
    return 0;
}
