#include<iostream>
using namespace std;
int f(int);               
int main(void)
{
    int n;
    cout<<"Input n:";
    cin>>n;
    cout<<"f("<<n<<")="<<f(n)<<endl;
    system("pause");     
}
int f(int n)
{
  if(n==1 || n==2) 
    return 1;
  return f(n-1) + f(n-2);
}

