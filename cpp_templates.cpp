#include <iostream>
using namespace std;

template <typename T>
T max_num(T x, T y)
{
    return (x > y) ? x : y;
}
int main()
{
    cout << max_num<int>(3, 5) << endl;
    cout << max_num<char>('a', 'c') << endl;
    return 0;
}