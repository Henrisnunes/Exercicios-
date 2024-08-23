#include<iostream>
using namespace std;

void fatorial(){
    int a,fat;
    cin>>a;
    fat=1;
    for(int i=1;i<=a;i++){
        fat*=i;
        
    }
    cout<<fat;
}
int main(){
    fatorial();
    return 0;
}