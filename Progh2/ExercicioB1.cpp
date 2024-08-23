#include<iostream>
using namespace std;

int mult4(int mult){
    int a=0;
    if(mult%4==0)
        a=1;
    return a;
    
}
int main(){
    int mult;
    do{
        cin>>mult;
    }while(mult<0);
    if(mult4(mult)==1)
        cout<<"multiplo de 4";
    else
        cout<<"nao eh multiplo de 4";
    return 0;
}