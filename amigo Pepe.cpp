#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    struct amigo{
           int n_amigo;
           float dinero;
           };
  
    int salir;
    amigo pepito;
    std::cout<<"Dime tu numero, Pepito: ";
    std::cin>>pepito.n_amigo;
    std::cout<<"Dime cuanta pasta tienes: ";
    std::cin>>pepito.dinero;
    std::cout<<"Yo tengo un amigo que se llama Pepito";
    std::cout<<"\nPepito es mi amigo nº"<<pepito.n_amigo;
    std::cout<<"\ny tiene "<<pepito.dinero<<" euros.";
    
    std::cin>>salir;
}
