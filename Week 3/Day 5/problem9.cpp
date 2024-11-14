#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int curC = 1;
        int cnt = 0;
        long long int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            sum += abs(num);

            if (num > 0)
            {
                curC = 1;
            }
            else if (num < 0)
            {
                if (curC == 1)
                {
                    cnt++;
                    curC = 0;
                }
            }
        }

        cout << sum << " " << cnt << endl;
    }
}
