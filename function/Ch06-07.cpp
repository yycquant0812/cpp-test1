#include <iostream>
using namespace std;
void adding();          //⊿Τ肚の把计, 惠 void  

int main()
{
  for (int i = 0; i < 3; i++) // ㊣ adding() Ω 
    adding();
}

void adding(void)
{
  int num = 100;       // Ы场跑计 
  cout << "num = " << num++ << endl;
}

