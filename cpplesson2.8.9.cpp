﻿/*Напишите программу, которая запрашивает с клавиатуры два натуральных числа -- количество информации в двух сообщениях, первое из которых выражено в КилоБайтах, а второе в Мегабитах, и выводит количество информации в Байтах в двух сообщениях вместе.

Sample Input 1:

27 5
Sample Output 1:

683008 Byte
Sample Input 2:

10 1
Sample Output 2:

141312 Byte
*/


#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << a * 1024 + b * 1024 * 1024 / 8 << " Byte";
    return 0;
}
