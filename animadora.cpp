#include<iostream>
/*programa que lee una palabra y devuelve su inicial*/

int main(){
    char palabra[10];
    char salir;
    int cont;
    int letras;
    int longitud;
    std::cout<<"Dime tu nombre:";
    
    std::cout<<"\nTe llamas";
    //std::cout<<"\nLa primera letra de tu nombre es la ";
    //std::cout<<palabra[0];
    std::cout<<"\nAnimadora: \n";
    for(cont=0;cont<=9;cont++){
                               
                               std::cout<<palabra[cont];
                               std::cout<<'\n';
                               }
    //contamaos cuantas letras tiene tu nombre
    for(cont=0;cont<=9;cont++){
                               if(palabra[cont]!='/0'){
                                                     longitud=longitud+1
                                                     }
                               }
    std::cout<<palabra;
    std::cin>>salir;
    
}
