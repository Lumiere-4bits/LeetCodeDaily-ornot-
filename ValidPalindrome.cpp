#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0; int r = s.size() - 1; // 2 pointer approach
        while(l < r){
            while(l<r && !isalnum(s[l]))   // check if the first character is alphanumeric
                l++; // inceased the left pointer
            while(l<r && !isalnum(s[r]))   //check if the last character is alphanumeric
                r--; // decreased the right pointer
            if(tolower(s[l])!=tolower(s[r]))  return false; // if the first and last  character are not same return false => not a palindrome
                l++; 
                r--;
        }
        return true; // if we exit the while loop -> it is a palindrome -> return true
    }
};