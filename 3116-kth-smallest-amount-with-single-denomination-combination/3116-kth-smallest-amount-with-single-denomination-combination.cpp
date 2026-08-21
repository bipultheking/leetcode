class Solution {
public:
    long long gcd(long long a, long long b) {
        while (b) {
            long long t = a % b;
            a = b;
            b = t;
        }
        return a;
    }

    long long findKthSmallest(vector<int>& coins, int k) {
        int n = coins.size();

        auto count = [&](long long x) {
            long long ans = 0;

            for (int mask = 1; mask < (1 << n); mask++) {
                long long l = 1;

                for (int i = 0; i < n; i++) {
                    if (mask & (1 << i)) {
                        l = l / gcd(l, coins[i]) * coins[i];

                        if (l > x) {
                            l = x + 1;
                            break;
                        }
                    }
                }

                if (__builtin_popcount(mask) % 2)
                    ans += x / l;
                else
                    ans -= x / l;
            }

            return ans;
        };

        long long low = 1;
        long long high = 1LL * (*min_element(coins.begin(), coins.end())) * k;

        while (low < high) {
            long long mid = low + (high - low) / 2;

            if (count(mid) >= k)
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};