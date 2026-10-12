class Solution {
public:
    int minSetSize(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        vector<int> freq;
        int n = arr.size();
        int count = 1;

        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                count++;
            } else {
                freq.push_back(count);
                count = 1;
            }
        }

        freq.push_back(count);
        sort(freq.rbegin(), freq.rend());

        int removed = 0, ans = 0;

        for (int x : freq) {
            removed += x;
            ans++;

            if (removed >= n / 2)
                break;
        }

        return ans;
    }
};