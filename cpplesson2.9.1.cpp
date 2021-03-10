/*Напишите программу, которая запрашивает два натуральных числа -- информационный объём сообщений, первое из которых записано в Байтах, а второе в битах, и выводит суммарный информационный объём этих двух сообщений в битах. 

Sample Input 1:

2 7
Sample Output 1:

23 bit
Sample Input 2:

3 10
Sample Output 2:

34 bit
*/

#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout << a * 8 + b << " bit";
	return 0;
}