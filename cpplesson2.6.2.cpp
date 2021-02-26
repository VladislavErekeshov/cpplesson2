/*В этой задаче вводятся три числа a,b,c и должна выводиться в первой строке сумма dd этих чисел, а во второй -- их произведение ee. Программист, создававший код, допустил ошибку. Исправьте её.

Sample Input 1:

5 2 3
Sample Output 1:

10
30
Sample Input 2:

4 -8 9
Sample Output 2:

5
-288

#include <iostream>
using namespace std;
int main(){
  int a, b, c, d, e;
  cin >> a >> b >> c;
  d = a + b + c;
  e = a * b * c;
  cout << d;
  cout << e;
  return 0;
 }
*/

#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c;
	d = a + b + c;
	e = a * b * c;
	cout << d << endl;
	cout << e << endl;
	return 0;
}