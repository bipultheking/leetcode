class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        unordered_map<int, set<int>> mp;

        for (auto &x : reservedSeats)
            mp[x[0]].insert(x[1]);

        int ans = 2 * n;

        for (auto &p : mp) {

            auto &s = p.second;

            bool left = true;
            bool mid = true;
            bool right = true;

            for (int i = 2; i <= 5; i++)
                if (s.count(i))
                    left = false;

            for (int i = 4; i <= 7; i++)
                if (s.count(i))
                    mid = false;

            for (int i = 6; i <= 9; i++)
                if (s.count(i))
                    right = false;

            ans -= 2;

            if (left && right)
                ans += 2;
            else if (left || mid || right)
                ans += 1;
        }

        return ans;
    }
};