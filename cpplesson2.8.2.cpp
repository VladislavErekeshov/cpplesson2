/*Напишите программу, которая запрашивает с клавиатуры одно натуральное число -- количество информации в битах, и выводит в первой строке соответствующее ему целое количество Байт, а во второй строке, количество оставшихся бит.

Sample Input 1:

12
Sample Output 1:

1 Byte
4 bit
Sample Input 2:

1
Sample Output 2:

0 Byte
1 bit
*/

#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cout << x / 8 << " Byte" << endl;
    cout << x % 8 << " bit";
}