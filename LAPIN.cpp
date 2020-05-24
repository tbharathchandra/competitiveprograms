#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool isPalindrome(string str1, string str2){
    vector<char> checked;
    for(string::iterator it = str1.begin(); it!=str1.end(); ++it){
        if(find(checked.begin(), checked.end(), *it)==checked.end()){
            checked.push_back(*it);
            int count1 = count(it, str1.end(), *it);
            int count2 = count(str2.begin(), str2.end(), *it);
            if(count1!=count2){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int t=0;
    cin>>t;
    string str,str1,str2;
    int len=0;
    for(int i=0;i<t;i++){
        cin>>str;
        len=str.length();
        if(len%2==0){
            str1 = str.substr(0,(int)(len/2));
            str2 = str.substr((int)(len/2),(int)(len/2));
            
        }else{
            str1 = str.substr(0, (int)(len/2));
            str2 = str.substr((int)(len/2)+1, (int)(len/2));
        }
        if(isPalindrome(str1,str2)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}
