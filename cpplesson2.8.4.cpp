/*Напишите программу, которая запрашивает с клавиатуры одно натуральное число -- количество информации в Байтах, и выводит в первой строке соответствующее ему целое количество КилоБайт, а во второй строке, количество оставшихся Байт.

Sample Input 1:

2700
Sample Output 1:

2 KByte
652 Byte
Sample Input 2:

1
Sample Output 2:

0 KByte
1 Byte
*/


#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cout << x / 1024 << " KByte" << endl;
    cout << x % 1024 << " Byte";
}