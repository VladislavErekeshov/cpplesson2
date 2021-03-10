/*Напишите программу, которая запрашивает два натуральных числа -- информационный объём сообщений, первое из которых записано в Килобитах, а второе в битах, и выводит суммарный информационный объём этих двух сообщений в Байтах.

Sample Input 1:

5 800
Sample Output 1:

740 Byte
Sample Input 2:

3 168
Sample Output 2:

405 Byte
*/

#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout << a * 1024 / 8 + b / 8 << " Byte";
	return 0;
}