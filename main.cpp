#include <iostream>

int main()
{   
  
    for (int i = 1; i <= 50; i++) {
        if (i % 7 == 0) std::cout << i << " ";
    }

    return 0;
}