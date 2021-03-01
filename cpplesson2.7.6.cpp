/*Преобразуйте последовательность из пяти чисел, состоящую только из 1 и 0 в другую, как показано в примере.

Sample Input 1:

0 1 0 0 1
Sample Output 1:

1 0 3 4 0
Sample Input 2:

0 1 1 1 0
Sample Output 2:

1 0 0 0 5
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << (a + 1) % 2 * 1 << " " << (b + 1) % 2 * 2 << " " << (c + 1) % 2 * 3 << " " << (d + 1) % 2 * 4 << " " << (e + 1) % 2 * 5;
}