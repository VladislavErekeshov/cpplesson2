﻿/*Преобразуйте последовательность из пяти чисел, состоящую только из 1 и 0 в другую, как показано в примере.

Sample Input 1:

0 1 0 1 1
Sample Output 1:

11
Sample Input 2:

1 0 1 1 0
Sample Output 2:

22
*/


#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << a * 16 + b * 8 + c * 4 + d * 2 + e;
}