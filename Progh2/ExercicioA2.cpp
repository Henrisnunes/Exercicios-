#include<iostream>
using namespace std;

void parimpar(){
    int valor;
    do{
        cin>>valor;
    }while(valor<0);
    if(valor%2==0)
        cout<<"Valor par";
    else
        cout<<"Valor impar";
}
int main(){
    parimpar();
    return 0;
}