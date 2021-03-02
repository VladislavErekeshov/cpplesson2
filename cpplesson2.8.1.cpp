/*Напишите программу, которая запрашивает с клавиатуры одно натуральное число -- количество информации в битах, и выводит соответствующее ему целое количество байт.

Sample Input 1:

32
Sample Output 1:

4
Sample Input 2:

1024
Sample Output 2:

128
*/

#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cout << x / 8;
    return 0;
}