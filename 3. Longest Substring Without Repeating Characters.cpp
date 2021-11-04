class Solution {
public:
    int max(int a, int b)
    { 
        if(a>b) return a;
        else return b;
    }

    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        unordered_map<char, int> hash;
        for(int i=0, j=0; j<s.size(); j++)
        {
            hash[s[j]]++;
            while(hash[s[j]]>1) hash[s[i++]]--;
            ans = max(ans, j-i+1);
        }
        return ans;
    }
};