/*В этой программе забыли поставить скобки в нужных местах и допустили ещё одну грубую ошибку. Из за этого программа работает не правильно. В задаче необходимо было найти значение следующего выражения относительно переменных a и b:

4(a^2 - 5b)^2
 
Sample Input 1:

1 2
Sample Output 1:

324
Sample Input 2:

4 -3
Sample Output 2:

3844

#include <iostream>
using namespace std;
int main(){
  int a, b;
  cin >> a >> b;  
  cout << 4 * a*a - 5*b * 4 * a*a - 5*b << endl;
  return 0;  
 }
*/

#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout << 4 * ((a * a - 5 * b) * (a * a - 5 * b)) << endl;
	return 0;
}