/*В этой задаче необходимо было ввести два числа aa и bb, и вывести их в обратном порядке через пробел. Программист ошибся, и в итоге программа не работает. Найдите и исправьте ошибки в тексте программы.

Sample Input 1:

2 5
Sample Output 1:

5 2
Sample Input 2:

-3 4
Sample Output 2:

4 -3

#include <iostream>
using namespace std;
int main(){
  int a, b;
  cin << a << b;
  cout >> a >> " " >> b >> endl;
  return 0;
 }
*/

#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout << b << " " << a << endl;
	return 0;
}