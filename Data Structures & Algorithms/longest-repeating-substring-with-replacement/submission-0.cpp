class Solution { 
public: 
    int characterReplacement(string s, int k) { 
    int i=0 , j=0 ; 
    map<char,int> mp ; 
    int maxi =-1  ; 
    int maxFreq = 0; 
    while(j<s.size()){ 
        mp[s[j]]++; 
        maxFreq = max(maxFreq, mp[s[j]]); 
        if(j-i+1 - maxFreq > k){ 
            mp[s[i]]--; i++; 
            } 
        maxi = max(maxi, j-i+1); 
        j++; 
        } 
        return maxi ; 
        } };