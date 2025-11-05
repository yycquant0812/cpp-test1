#include <iostream> 
using namespace std; 
int gcd(int, int); 

int main() { 
    int m = 0;
    int n = 0; 
    cout << "¿é¤J¨â¼Æ¡G"; 
    cin >> m >> n; 
    cout << "GCD: " 
         << gcd(m, n) << endl; 
    return 0; 
} 

int gcd(int m, int n) { 
    if(n == 0) 
        return m; 
    else 
        return gcd(n, m % n);
}
