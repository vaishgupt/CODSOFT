#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter number\n";
    cin>>a>>b;
     cout<<"Enter operator\n";
    cin>>op;
    switch(op){
        case '+':
        cout<<"sum="<<a+b;
        break;
             case '-':
        cout<<"diff="<<a-b;
        break;
           case '*':
        cout<<"multiply="<<a*b;
        break;
            case '/':
        cout<<"divide="<<a/b;
        break;
             case '%':
        cout<<"modulus="<<a%b;
        break;
            default:
        cout<<"invalid case";
    }
}