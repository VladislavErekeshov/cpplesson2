/*Преобразуйте последовательность из восьми чисел, состоящую только из 1 и 0 в другую, как показано в примере.

Sample Input 1:

0 1 0 1 1 0 1 1
Sample Output 1:

91
Sample Input 2:

1 0 0 1 0 1 1 0
Sample Output 2:

150
*/


#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, a1, a2, a3;
    cin >> a1 >> a2 >> a3 >> a >> b >> c >> d >> e;
    cout << a1 * 128 + a2 * 64 + a3 * 32 + a * 16 + b * 8 + c * 4 + d * 2 + e;
}