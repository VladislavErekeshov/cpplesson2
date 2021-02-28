/*Преобразуйте последовательность из пяти чисел, состоящую только из 1 и 0 в другую, как показано в примере.

Sample Input 1:

0 1 0 0 1
Sample Output 1:

5 2 5 5 2
Sample Input 2:

1 0 0 1 0
Sample Output 2:

2 5 5 2 5
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << (a + 1) % 2 * 3 + 2 << " " << (b + 1) % 2 * 3 + 2 << " " << (c + 1) % 2 * 3 + 2 << " " << (d + 1) % 2 * 3 + 2 << " " << (e + 1) % 2 * 3 + 2;
}