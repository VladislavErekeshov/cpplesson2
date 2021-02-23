/*Вводится одно натуральное число, не более 31. Напишите программу, которая делает то же самое, что и в примерах входных и выходных данных.

Sample Input 1:

18
Sample Output 1:

10010
Sample Input 2:

31
Sample Output 2:

11111
Sample Input 3:

10
Sample Output 3:

01010
*/

#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cout << a / 16 % 2 << a / 8 % 2 << a / 4 % 2 << a / 2 % 2 << a % 2;
}