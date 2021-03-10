/*Напишите программу, которая запрашивает два натуральных числа -- информационный объём сообщений, первое из которых записано в Мегабитах, а второе в Килобайтах, и выводит суммарный информационный объём этих двух сообщений в Килобитах.

Sample Input 1:

7 14
Sample Output 1:

7280 Kbit
Sample Input 2:

5 23
Sample Output 2:

5304 Kbit
*/

#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout << a * 1024 + b * 8 << " Kbit";
	return 0;
}