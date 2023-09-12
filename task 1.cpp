#include<bits/stdc++.h>
using namespace std;
int main(){
int n,guess;
cout<<"Enter number=\n";
cin>>n;
cout<<"Number guess by user=\n";
cin>>guess;
if(guess==n){
cout<<"Congratulations!You guessed a correct number,";
}else if(guess<n){
cout<<"Guessed num is lower than the expected num.";
}else{
cout<<"Guessed num is higher than the expected num.";
}
}