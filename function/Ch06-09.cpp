#include<iostream>
using namespace std;
int ATM(int);

int main()
{
  int pwd, money, n = 1;	
  do {
  	cout << "請輸入ATM密碼：";
  	cin >> pwd;
  	while( pwd == 1234 ){
  	  cout << "歡迎使用ATM，請輸入要提款的金額：（或輸入0以結束提款）";
  	  cin >> money;
  	  if (money == 0)
  	    return 0; 	  
      cout << "你領了" << money << "元，餘額還有" <<  ATM(money) << "元" << endl;
    }

	if( n == 3 ){
	  cout << "密碼錯誤次數過多，該帳戶已被暫停使用";
	  break;
	}
  	n++;
  } while (pwd!=1234);
}

int ATM(int a)
{
  static int num = 10000;
  num = num - a;
  return num;
}

