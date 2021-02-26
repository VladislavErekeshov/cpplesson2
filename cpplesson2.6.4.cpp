/*Найдите и исправьте ошибку в программе, которая должна выводить сумму цифр ss трёхзначного числа xx, разделив его на разряды a, b, c.a,b,c.

Sample Input 1:

123
Sample Output 1:

6
Sample Input 2:

456
Sample Output 2:

15

#include <iostream>
using namespace std;
int main(){
  int x, a, b, c, s;
  cin >> x;
  a = x / 100;
  b = x / 10;
  c = x % 10;
  s = a + b + c;
  cout << s << endl;
  return 0;
 }
*/

#include <iostream>
using namespace std;
int main() {
	int x, a, b, c, s;
	cin >> x;
	a = x / 100;
	b = x / 10 % 10;
	c = x % 10;
	s = a + b + c;
	cout << s << endl;
	return 0;
}
