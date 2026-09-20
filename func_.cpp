#include<iostream>
using namespace std;
// Function to generate Fibonacci series up to n terms
int fibonacci(int n){
    int a=0, b=1, c;
    for (int i=0; i<n; i++){
        cout<<a<<" ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

// Function to check if a number is prime
bool isPrime(int m){
    if (m < 2) {
        return false;
    }
    for(int i=2; i<m; i++){
        if (m%i == 0) {
            return false;
        }
    }
    return true;
}
int main(){

    int n;
    cout<<"Enter the number of terms for Fibonacci series: ";
    cin>>n;
    cout<<"Fibonacci series up to "<<n<<" terms:\n ";
    fibonacci(n);

    int m;
    cout<<"\n\nEnter the upper limit to find prime numbers: ";
    cin>>m;
    cout<<"\nPrime numbers between 1 and "<<m<<" are:\n ";
    for (int i=1; i<=m; i++){
        if (isPrime(i)){
            cout<<i<<" ";
        }
    }

    return 0;
}