#include <bits/stdc++.h>
using namespace std;

void one_to_n(int n)
{
    int count = 1;
    if (count!= n)
    {
        cout << count << endl;
        one_to_n(count++);
    }
}
int main()
{
    one_to_n(10);
    return 0;
}