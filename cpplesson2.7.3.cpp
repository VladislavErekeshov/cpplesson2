/*Преобразуйте последовательность из пяти чисел, состоящую только из 1 и 0 в другую, как показано в примере.

Sample Input 1:

0 0 0 0 1
Sample Output 1:

8 8 8 8 0
Sample Input 2:

1 1 0 1 1
Sample Output 2:

0 0 8 0 0
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << (a + 1) % 2 * 8 << " " << (b + 1) % 2 * 8 << " " << (c + 1) % 2 * 8 << " " << (d + 1) % 2 * 8 << " " << (e + 1) % 2 * 8;
}