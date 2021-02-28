/*Преобразуйте последовательность из пяти чисел, состоящую только из 1 и 0 в другую, как показано в примере.

Sample Input 1:

0 1 0 1 1
Sample Output 1:

0 2 0 4 5
Sample Input 2:

1 1 1 1 0
Sample Output 2:

1 2 3 4 0
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << a * 1 << " " << b * 2 << " " << c * 3 << " " << d * 4 << " " << e * 5;
}