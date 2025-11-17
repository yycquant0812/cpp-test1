#include<iostream>
using namespace std;



int GCD(int a, int b)
{
  int temp;
  while (b != 0) {         
    temp = a % b;
	a = b;             
    b = temp;                               
  }	
  return a;
}

int main()
{
  int num1, num2;
  cout << "計算兩整數的最大公因數\n";
  cout << "請輸入第1個數字：";
  cin >> num1;
  cout << "請輸入第2個數字：";
  cin >> num2; 
  cout << "最大公因數是：" << GCD(num1, num2);
}

