/*


..>
    The password will only be Valid if it follow following conditions:  
     a .    Any one character must be Uppercase 
     b.     Any one character must be Lower Case.
     c.     Any one character must be number .






*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int count=0;
    int temp =0;
    int ptr = 0;
    string s;
    cin>>s;
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i] >= 65  and s[i]<=90){
            count++;
        }
         if(s[i] >= 97  and s[i]<=122){
            ptr++;
        }
        
        if(s[i] >=48 and s[i] <=57){    // ASCII Value of 0  is 48 and 9 is 57
            temp++;
        }
    }
    if(count!=0 and temp!=0 and ptr!=0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}
