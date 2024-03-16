/*
1768.Merge_Strings_Alternately

Difficult : EASY.
Tag: Two pointer, String.
***Description: 
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. 
If a string is longer than the other, append the additional letters onto the end of the merged string.
Return the merged string

*Approach:
-Use loop to copy for answer.
*Complexity:
-Time complexity: Since we traverse both strings once and pick each character alternately,
the time complexity of this approach is O(n), where n is the length of the longer string.
-Space complexity:O(1).

More information in : https://leetcode.com/problems/merge-strings-alternately/

*/

//Code here:
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.size(),n2=word2.size();
        string ans="";
        int i;
        for( i=0;i<n1;i++){
            ans+=word1[i];
            if(i<n2){
                ans+=word2[i];
            }
        }
//if n2>n1
        for(int j=i;j<n2;j++){
            ans+=word2[j];
        }
        return ans;
    }
};

//Thanks for visiting my solution <3
