#include<iostream> 
using namespace std; 

int gcd(int, int); 

int main() { 
    int m ;
    int n ; 
    cout << "¿é¤J¨â¼Æ¡G"; 
    cin >> m >> n; 
    cout << "GCD: " 
         << gcd(m, n) << endl; 
    return 0; 
} 

int gcd(int m, int n) { 
    int r; 
    while(n != 0) { 
        r = m % n; 
        m = n; 
        n = r; 
    } 
    return m; 
}
