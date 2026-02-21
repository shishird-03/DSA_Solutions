class Solution {
public:
    bool isIsomorphic(string s, string t) {
    int n= s.length();
    int m=t.length();
    if(n!=m){
        return false;
    }
    map<char,char> mp={}; 
    map<char,char>mp1={};
    for(int i=0;i<n;i++){
        char c1=s[i];
        char c2= t[i];
         if(mp.count(c1)){
            if(mp[c1]!=c2)
            return false;}
            else{
                mp[c1]=c2;
            }
             if(mp1.count(c2)){
            if(mp1[c2]!=c1)
            return false;}
            else{
                mp1[c2]=c1;
            }
         }
        
   return true;
    }
};