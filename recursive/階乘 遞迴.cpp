/* ========================================
   階乘計算 (Factorial) - 遞迴實作
   ========================================
   階乘定義：
   n! = n × (n-1) × (n-2) × ... × 2 × 1

   特殊情況：
   0! = 1
   1! = 1

   遞迴定義：
   factorial(1) = 1
   factorial(n) = n × factorial(n-1), 當 n > 1

   範例：
   5! = 5 × 4 × 3 × 2 × 1 = 120
   ======================================== */

#include<iostream>
using namespace std;

// 函式原型宣告：計算 n 的階乘
int factorial(int);

int main(void)
{
  int n;

  // 提示使用者輸入數字
  cout<<"Input n:";
  cin>>n;

  // 呼叫遞迴函式計算階乘並輸出結果
  cout<<n<<"! ="<<factorial(n)<<endl;

  system("pause");
}

/* ========================================
   函式名稱：factorial
   功能：使用遞迴方式計算階乘 n!
   參數：n - 要計算階乘的數字
   回傳值：n! 的值

   遞迴原理說明：
   1. 基底條件 (Base Case)：
      當 n=1 時，回傳 1
      這是遞迴的終止條件

   2. 遞迴條件 (Recursive Case)：
      factorial(n) = n × factorial(n-1)
      將 n! 分解為 n × (n-1)!

   執行過程範例：計算 5!
   factorial(5)
   = 5 × factorial(4)
   = 5 × [4 × factorial(3)]
   = 5 × [4 × [3 × factorial(2)]]
   = 5 × [4 × [3 × [2 × factorial(1)]]]
   = 5 × [4 × [3 × [2 × 1]]]
   = 5 × [4 × [3 × 2]]
   = 5 × [4 × 6]
   = 5 × 24
   = 120

   函式呼叫堆疊 (Call Stack) 說明：
   factorial(5) → 呼叫 factorial(4)
   factorial(4) → 呼叫 factorial(3)
   factorial(3) → 呼叫 factorial(2)
   factorial(2) → 呼叫 factorial(1)
   factorial(1) → 回傳 1 (基底條件)
   factorial(2) → 回傳 2 × 1 = 2
   factorial(3) → 回傳 3 × 2 = 6
   factorial(4) → 回傳 4 × 6 = 24
   factorial(5) → 回傳 5 × 24 = 120

   注意事項：
   - 階乘數值成長非常快，int 型別可能會溢位
   - 當 n 很大時，遞迴深度會很深，可能導致堆疊溢位
   ======================================== */
int factorial(int n)
{
  // 基底條件：1 的階乘是 1
  if(n==1)
     return 1;

  // 遞迴條件：n! = n × (n-1)!
  return n*factorial(n-1);
}
