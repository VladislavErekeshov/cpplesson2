/*Преобразуйте последовательность из пяти чисел, состоящую только из 1 и 0 в другую, как показано в примере.

Sample Input 1:

1 0 0 1 1
Sample Output 1:

5 0 0 5 5
Sample Input 2:

1 0 0 0 1
Sample Output 2:

5 0 0 0 5
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << a * 5 << " " << b * 5 << " " << c * 5 << " " << d * 5 << " " << e * 5;
}