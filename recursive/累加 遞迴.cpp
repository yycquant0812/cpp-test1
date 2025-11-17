/* ========================================
   累加計算 (Accumulation) - 遞迴實作
   ========================================
   累加定義：
   計算從 1 加到 n 的總和
   sum(n) = 1 + 2 + 3 + ... + (n-1) + n

   數學公式：
   sum(n) = n × (n+1) / 2

   遞迴定義：
   accumulate(1) = 1
   accumulate(n) = n + accumulate(n-1), 當 n > 1

   範例：
   sum(5) = 1 + 2 + 3 + 4 + 5 = 15
   ======================================== */

#include<iostream>
using namespace std;

// 函式原型宣告：計算 1 到 n 的累加和
int accumulate(int);

int main(void)
{
  int n;

  // 提示使用者輸入數字
  cout<<"Input n:";
  cin>>n;

  // 呼叫遞迴函式計算累加和並輸出結果
  cout<<"1 累加到 "<<n<<" = "<<accumulate(n)<<endl;

  system("pause");
}

/* ========================================
   函式名稱：accumulate
   功能：使用遞迴方式計算 1 到 n 的累加和
   參數：n - 累加的終點數字
   回傳值：1 + 2 + ... + n 的總和

   遞迴原理說明：
   1. 基底條件 (Base Case)：
      當 n=1 時，回傳 1
      這是遞迴的終止條件

   2. 遞迴條件 (Recursive Case)：
      accumulate(n) = n + accumulate(n-1)
      將「1加到n」分解為「n + (1加到n-1)」

   執行過程範例：計算 1+2+3+4+5
   accumulate(5)
   = 5 + accumulate(4)
   = 5 + [4 + accumulate(3)]
   = 5 + [4 + [3 + accumulate(2)]]
   = 5 + [4 + [3 + [2 + accumulate(1)]]]
   = 5 + [4 + [3 + [2 + 1]]]
   = 5 + [4 + [3 + 3]]
   = 5 + [4 + 6]
   = 5 + 10
   = 15

   函式呼叫堆疊 (Call Stack) 說明：
   accumulate(5) → 呼叫 accumulate(4)
   accumulate(4) → 呼叫 accumulate(3)
   accumulate(3) → 呼叫 accumulate(2)
   accumulate(2) → 呼叫 accumulate(1)
   accumulate(1) → 回傳 1 (基底條件)
   accumulate(2) → 回傳 2 + 1 = 3
   accumulate(3) → 回傳 3 + 3 = 6
   accumulate(4) → 回傳 4 + 6 = 10
   accumulate(5) → 回傳 5 + 10 = 15

   數學驗證：
   使用公式 n×(n+1)/2 = 5×6/2 = 15 ✓

   遞迴 vs 迴圈比較：
   - 遞迴版本：程式碼簡潔，概念清晰
   - 迴圈版本：執行效率較高，不會有堆疊溢位問題
   ======================================== */
int accumulate(int n)
{
  // 基底條件：累加到 1 的結果是 1
  if(n==1)
     return 1;

  // 遞迴條件：1加到n = n + (1加到n-1)
  return n+accumulate(n-1);
}
