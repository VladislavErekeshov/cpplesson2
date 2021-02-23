/*Вводится одно натуральное число, не более 255. Напишите программу, которая делает то же самое, что и в примерах входных и выходных данных.

Sample Input 1:

240
Sample Output 1:

11110000
Sample Input 2:

100
Sample Output 2:

01100100
Sample Input 3:

255
Sample Output 3:

11111111
*/

#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cout << a / 128 % 2 << a / 64 % 2 << a / 32 % 2 << a / 16 % 2 << a / 8 % 2 << a / 4 % 2 << a / 2 % 2 << a % 2;
}