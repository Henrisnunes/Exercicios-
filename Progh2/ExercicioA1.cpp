#include<iostream>
using namespace std;

void mult4(){
    int mult;
    do{
        cin>>mult;
    }while(mult<0);
    if(mult%4==0)
        cout<<"Divisivel por 4";
    else
        cout<<"Nao eh divisivel por 4";
}
int main(){
    mult4();
    return 0;
}