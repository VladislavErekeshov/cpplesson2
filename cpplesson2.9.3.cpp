/*Напишите программу, которая запрашивает два натуральных числа -- информационный объём сообщений, первое из которых записано в КилоБайтах, а второе в Байтах, и выводит суммарный информационный объём этих двух сообщений в битах.

Sample Input 1:

6 1245
Sample Output 1:

59112 bit
Sample Input 2:

8 1697
Sample Output 2:

79112 bit
*/

#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout << a * 1024 * 8 + b * 8 << " bit";
	return 0;
}