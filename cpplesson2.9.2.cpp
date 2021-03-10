/*Напишите программу, которая запрашивает два натуральных числа -- информационный объём сообщений, первое из которых записано в Байтах, а второе в битах, и выводит суммарный информационный объём этих двух сообщений в Байтах.

Sample Input 1:

2 24
Sample Output 1:

5 Byte
Sample Input 2:

3 16
Sample Output 2:

5 Byte
*/

#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout << a + b / 8 << " Byte";
	return 0;
}