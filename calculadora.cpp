#include <iostream>

using namespace std;

int main(){
int a, b, xResultado;
xResultado=0;
cout<<"Ingresa un número -a- e";
cout<<"Ingresa el denominador -b-\n";
cin>>a,b;

if(a==0 && b==0){
	cout<<"Error";
}else{
	xResultado= a/b;
    }

 return 0;   
}