#include<iostream>
#include<string>
using namespace std;
int num[100],i=1,j=0,count=0,even=0,odd=0;

int main(){

    while(i==1){
    cout << "Enter an integer: ";
    cin >>num[j];
    if(num[j]==0){
        break;
    }
    j++;
    }
    while(count<j){
    if(num[count]%2==0){
        even++;
    }
    else{
        odd++;
    }
    count++;
    }
    cout << "#Even numbers = "<<even<<"\n";
    cout << "#Odd numbers = "<<odd<<"\n";
    return 0;
}
