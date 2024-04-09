//Cho số tự nhiên N. Nhiệm vụ của bạn là hãy kiểm tra N có phải là số Smith hay không. Một số được gọi là số Smith nếu N không phải là số nguyên tố và có tổng các chữ số của N bằng tổng các chữ số của các thừa số nguyên tố trong phân tích của N. Ví dụ N = 666 có các thừa số nguyên tố là 2, 3, 3, 37 có tổng các chữ số là 18.
#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int sum (int n)
{
    int tong = 0;
    while (n)
    {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

bool smith (int n)
{
    int sum1 = sum(n);
    int sum2 = 0;
    int tmp = n;
    for (int i = 2; i <= sqrt(tmp); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                sum2 += sum(i);
                n /= i;
            }
        }
    }
    if (tmp == n) return false;
    if (n > 1) sum2 += sum(n);
    return sum1 == sum2;
}

int main()
{
    int n;
    cin >> n;
    if (smith(n)) cout << "YES";
    else cout << "NO";
}