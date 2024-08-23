#include<iostream>
using namespace std;

void potencia(){
    int base,expo,resu;
    resu=1;
    do{
        cin>>base>>expo;
    }while(base<=0 && expo<=0);
    for(int i=0;i<expo;i++){
        resu*=base;
    }
    cout<<resu;
}
int main(){
    potencia();
    return 0;
}