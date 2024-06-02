class Solution {
public:
    bool isSubsequence(string s, string t) {
            int sLen = s.length();
    int tLen = t.length();
    int sIndex = 0, tIndex = 0;

    // Traverse both strings
    while (sIndex < sLen && tIndex < tLen) {
        // If characters match, move to the next character in s
        if (s[sIndex] == t[tIndex]) {
            sIndex++;
        }
        // Always move to the next character in t
        tIndex++;
    }

    // If we have traversed all characters in s, it is a subsequence of t
    return sIndex == sLen;
}
        
    
};