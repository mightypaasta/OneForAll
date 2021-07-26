
// ---------------------- THIS SOLUTION IS FOR LEETCODE (DON'T RUN IT ANYWHERE EXCEPT LEETCODE FOR SAME PROBLEM --------------------------------

#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    string countAndSay(int n) {
        if(n==1)    return "1";
        if(n==2)    return "11";
        string lstr= countAndSay(n-1);
        string nstr="";
        lstr=lstr+"#";
        int count =1;
        for(int j=1; j<lstr.length(); j++){
            if(lstr[j]==lstr[j-1]){
                count++;
            }
            else{
                nstr=nstr+to_string(count);
                nstr=nstr+lstr[j-1];
                count=1;
            }
        }
        return nstr;
        
    }
};