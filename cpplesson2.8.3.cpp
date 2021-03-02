/*Напишите программу, которая запрашивает с клавиатуры одно натуральное число -- количество информации в Байтах, и выводит в первой строке соответствующее ему целое количество КилоБайт.

Sample Input 1:

16384
Sample Output 1:

16
Sample Input 2:

65536
Sample Output 2:

64
*/

#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cout << x / 1024;
    return 0;
}