/*В этой задаче надо было ввести три переменных a,b,c, и найти сумму квадратов этих чисел, но программист допустил ошибку и программа не работает. Найдите и исправьте эту ошибку.

Sample Input 1:

2 3 4
Sample Output 1:

29
Sample Input 2:

-2 6 5
Sample Output 2:

65

#include <iostream>
using namespace std;
int main(){
  int a, b, c;
  cin >> a, b, c;
  cout << a*a + b*b + c*c << endl;
  return 0;
 }
*/

#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << a * a + b * b + c * c << endl;
	return 0;
}