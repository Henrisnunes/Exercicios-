#include<iostream>
using namespace std;

void esfera(){
    int raio,volume;
    cin>>raio;
    volume=(((4*3.14)*raio*raio*raio)/3);
    cout<<volume;
}

int main(){
    esfera();
    return 0;
}   