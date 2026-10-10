class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
       // T.C O(n^2)
        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         if (temperatures[j] > temperatures[i]) {
        //             ans[i] = j - i;
        //             break;
        //         }
        //     }
        // }

        // return ans;

     /// T.C O(n)
         stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                ans[st.top()] = i - st.top();
                st.pop();
            }

            st.push(i);
        }

        return ans;
    }
};