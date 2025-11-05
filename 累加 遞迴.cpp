#include<iostream>
using namespace std;
int accumulate(int);
int main(void)
{
  int n;
  cout<<"Input n:";
  cin>>n;
  cout<<"1 ²Ö¥[¦Ü "<<n<<" = "<<accumulate(n)<<endl;
  system("pause");
}
int accumulate(int n)
{
  if(n==1)
     return 1;
  return n+accumulate(n-1);
}
