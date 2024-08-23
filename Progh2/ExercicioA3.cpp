#include<iostream>
using namespace std;

void somas(){
    int a,b,soma=0;
    do{    
        cin>>a>>b;
    }while(b<a);
    for(int i=a;i<=b;i++){
        soma+=i;
    }
    cout<<soma;
}
int main(){
    somas();
    return 0;
}