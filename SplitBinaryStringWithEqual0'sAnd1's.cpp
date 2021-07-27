#include <iostream>
#include <string>
using namespace std;

// ------------- THIS PROGRRAM CAN BE RUN LOCALLY BY CHANGING THE VALUE OF BIN INSIDE MAIN FUNCITON TO CHECK ------------

int counter(string bin){
    int count0=0,count1=0;
    int countBinary=0;
    for(int i=0;i<bin.length();i++){
        if(bin.at(i)=='0'){
            count0++;
        }   
        else{
            count1++;   
        }    
        if(count0==count1){
            countBinary++;
        }  
    }
    if(countBinary>0){
        return countBinary;
    }
    else{
        return -1;
    }
}

int main(){
    string bin;
    bin="0100111";
    cout<<counter(bin)<<endl;
}