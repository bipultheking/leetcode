class Solution {
public:

    int find(int arr[]) {
        int maximum = arr[0];

        for(int i = 1; i < 26; i++) {
            maximum = max(maximum, arr[i]);
        }

        return maximum;
    }

    int characterReplacement(string s, int k) {

        int hash[26] = {0};

        int low = 0;
        int maxlength = 0;

        for(int high = 0; high < s.size(); high++) {

            hash[s[high] - 'A']++;

            int length = high - low + 1;
            int maxcount = find(hash);

            int difference = length - maxcount;

            while(difference > k) {

                hash[s[low] - 'A']--;
                low++;

                length = high - low + 1;
                maxcount = find(hash);
                difference = length - maxcount;
            }

            maxlength = max(maxlength, high - low + 1);
        }

        return maxlength;
    }
};