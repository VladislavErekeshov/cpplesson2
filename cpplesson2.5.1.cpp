/* Вводятся два натуральных числа. Напишите программу, которая делает то же самое, что и в примерах входных и выходных данных. Будьте внимательны, числа и знаки операций разделены пробелами.

Sample Input 1:

2 3
Sample Output 1:

2 + 3 = 5
Sample Input 2:

13 8
Sample Output 2:

13 + 8 = 21
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b;
    cout << a << " + " << b << " = " << a + b;
    return 0;
}