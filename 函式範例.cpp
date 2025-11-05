#include<iostream>
using namespace std;

// 美元轉換計算機（假設新台幣:美元匯率1:31）
float dollar (float m)
{    
    float d = m / 31;
    return d;
}

int main() 
{
   float x;
   cout <<"要兌換的新台幣金額：";
   cin >> x;
   cout << x <<"新台幣可兌換成" << dollar(x) << "美元";  
}
