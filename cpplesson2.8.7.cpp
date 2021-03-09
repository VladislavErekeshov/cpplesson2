/*Напишите программу, которая находит информационный объём статьи в Килобайтах VV, если известно, что каждый символ кодируется в UNICODE двумя байтами. Известно, что в статье PP страниц, на страницу вмещается ровно SS строк, а количество символов в каждой строке одинаково и равно CC. Вводятся PP, SS  и  CC, вывести VV.
Sample Input 1:

100 32 64
Sample Output 1:

400
Sample Input 2:

64 48 48
Sample Output 2:

288
*/

#include <iostream>
using namespace std;
int main()
{
    int p, s, c;
    cin >> p >> s >> c;
    cout << p * s * c * 2 / 1024;
    return 0;
}