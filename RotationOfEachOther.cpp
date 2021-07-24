#include <iostream>
#include <queue>
#include <string>
using namespace std;

// This funciton comapres whether the string 2 is rotation of string 1 
// for e.g "CDAB" is rotation of "ABCD"
// whereas "DBAC" is not rotation of "ABCD"
bool checker(string s1, string s2){
    // if the size of the string 2 is different from string 1 then it will never be the rotation of string 1
    if(s1.size() != s2.size())
        ;
        
    //  To check for the rotation we will use two queue to store respective strings
    std::queue<char> q1;
    std::queue<char> q2;
    for(int i=0;i<s1.size();i++){
        q1.push(s1[i]);
    }
    for(int i=0;i<s2.size();i++){
        q2.push(s2[i]);
    }
    
    // We will rotate the second string 2 until we get same value as the string 1
    // This can be simply done by pushing the front element of the queue to the back of the queue
    // We will do it string2.size() times because after that it will be just repetition
    int k=q2.size();
    while(k--){
        
        // for e.g "CDAB" in q2 and "ABCD" in q1
        // for 1st iteration : "BCDA" == "ABCD" --false
        // for 2nd iteration : "ABCD" == "ABCD" --true
        // here temp get the front element of the queue and push it to the back of the queue 
        char temp=q2.front();
        q2.pop();
        q2.push(temp);
        if(q1==q2){
            return true;
        }
    }
    return false;

}

int main() {
	string s1,s2;
	cin>>s1>>s2;
	// If both string 2 is rotation of string 1 then both string are same otherwise
	// both string are different
	if(checker(s1,s2)){
	    cout<<"Both string are same"<<endl;
	}
	else{
	    cout<<"Both string are different"<<endl;
	}
	
}
