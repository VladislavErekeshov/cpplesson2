/*Вводится одно натуральное число, не более 31. Напишите программу, которая делает то же самое, что и в примерах входных и выходных данных. Будьте внимательны, числа и знаки операций разделены пробелами.

Sample Input 1:

18
Sample Output 1:

16 + 0 + 0 + 2 + 0
Sample Input 2:

31
Sample Output 2:

16 + 8 + 4 + 2 + 1
Sample Input 3:

10
Sample Output 3:

0 + 8 + 0 + 2 + 0
Sample Input 4:

1
Sample Output 4:

0 + 0 + 0 + 0 + 1
*/

#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    cout << a / 16 % 2 * 16 << " + " << a / 8 % 2 * 8 << " + " << a / 4 % 2 * 4 << " + " << a / 2 % 2 * 2 << " + " << a % 2;
}