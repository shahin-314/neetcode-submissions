class Solution {
public:

    int characterReplacement(string s, int k)
    {
        unordered_map<char,int> freq;

        int left = 0;
        int maxFreq = 0;
        int ans = 0;

        for(int right = 0; right < s.size(); right++)
        {
            // Current character frequency increase
            freq[s[right]]++;

            // Maximum frequency in current window
            maxFreq = max(maxFreq, freq[s[right]]);

            // Invalid window
            while((right-left+1)-maxFreq > k)
            {
                freq[s[left]]--;
                left++;
            }

            // Longest valid window
            ans = max(ans, right-left+1);
        }

        return ans;
    }
};