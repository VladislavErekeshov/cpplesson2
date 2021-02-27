/*В этой программе необходимо было вывести четырёхзначное число x задом наперёд без ведущих нулей, но программист допустил ошибку и ведущие нули выводятся. Исправьте ошибку.

Sample Input 1:

1200
Sample Output 1:

21
Sample Input 2:

9010
Sample Output 2:

109

#include <iostream>
using namespace std;
int main(){
  int x, a, b, c, d;
  cin >> x;
  a = x / 1000;
  b = x / 100 % 10;
  c = x / 10 % 10;
  d = x % 10;
  cout << d << c << b << a << endl;
  return 0;
 }
*/

#include <iostream>
using namespace std;
int main() {
	int x, a, b, c, d;
	cin >> x;
	a = x / 1000;
	b = x / 100 % 10;
	c = x / 10 % 10;
	d = x % 10;
	cout << d * 1000 + c * 100 + b * 10 + a << endl;
	return 0;
}