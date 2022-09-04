#define ll long long
class Solution
{
public:
    int fun(int start, int end, int target, int size)
    {
        int ans = 0;

        if (target % size == 0)
        {
            int temp = target / size;
            start += temp;
            start -= 1;
            return start % 10;
        }
        else
        {
            int temp = target / size;

            start += temp;

            int t = target % size;
            string s = to_string(start);

            return s[t - 1] - '0';


        }

    }

    int findNthDigit(int n)
    {

        vector<ll> v;
        for (int i = 1; i <= 9; i++)
        {
            ll x = 9;
            if (i > 0)
            {
                x = x * i;
                int t = i - 1;
                while (t--)
                {
                    x = x * 10;
                }
            }
            v.push_back(x);
        }


        for (int i = 0; i < v.size(); i++)
        {

            int start = 1;
            int end = 9;
            int t = i;
            while (t--)
            {
                start *= 10;
                end *= 10;
                end += 9;
            }

            if (n <= v[i])
            {
                return fun(start, end, n, i + 1);
            }
            n -= v[i];
        }

        return 0;
    }
};