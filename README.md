# DSA-
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the char : ";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"char in lower case";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"char in upper case";
    }
    else{
cout<<"it's a int value";
    }
    return 0;
}
