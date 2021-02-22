/*Вводятся два натуральных числа. Напишите программу, которая делает то же самое, что и в примерах входных и выходных данных. Будьте внимательны, числа и знаки операций разделены пробелами.

Sample Input 1:

19 5
Sample Output 1:

19 / 5 = 3
3 * 5 = 15
19 - 15 = 4
Sample Input 2:

4 6
Sample Output 2:

4 / 6 = 0
0 * 6 = 0
4 - 0 = 4
*/

#include <iostream>
using namespace std;
int main()
{
    int m, n, a1, a2, a3;
    cin >> m >> n;
    a1 = m / n;
    a2 = a1 * n;
    a3 = m - a2;
    cout << m << " / " << n << " = " << a1 << endl;
    cout << a1 << " * " << n << " = " << a2 << endl;
    cout << m << " - " << a2 << " = " << a3 << endl;
}