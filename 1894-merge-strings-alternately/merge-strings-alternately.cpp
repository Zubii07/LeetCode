class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
    int i = 0, j = 0;

    // Traverse both strings
    while (i < word1.length() && j < word2.length()) {
        result += word1[i++];
        result += word2[j++];
    }

    // Append remaining characters of word1, if any
    while (i < word1.length()) {
        result += word1[i++];
    }

    // Append remaining characters of word2, if any
    while (j < word2.length()) {
        result += word2[j++];
    }

    return result;
}
        
    
};