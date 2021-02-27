/*Программа должна была выдать разряды a,b,c,d,ea,b,c,d,e пятизначного числа xx через пробел, но программист допустил ошибку, и все цифры "слиплись". Исправьте это.

Sample Input 1:

12345
Sample Output 1:

1 2 3 4 5
Sample Input 2:

10000
Sample Output 2:

1 0 0 0 0

#include <iostream>
using namespace std;
int main(){
  int x, a, b, c, d, e;
  cin >> x;
  a = x / 10000;
  b = x / 1000 % 10;
  c = x / 100 % 10;
  d = x / 10 % 10;
  e = x % 10;
  cout << a << b << c << d << e << endl;
  return 0;
 }
*/

#include <iostream>
using namespace std;
int main() {
	int x, a, b, c, d, e;
	cin >> x;
	a = x / 10000;
	b = x / 1000 % 10;
	c = x / 100 % 10;
	d = x / 10 % 10;
	e = x % 10;
	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
	return 0;
}