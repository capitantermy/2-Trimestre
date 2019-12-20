#include<iostream>
/*programa que lee una palabra y devuelve el número de letras*/

int main(){
    char palabra[10];
    char salir;
    int cont;
    int longitud;
    longitud=0;//iniciando variable
    std::cout<<"Dime tu nombre:";
    std::cin>> palabra;
    //dirty trick
    while(palabra[cont]!='\0'){
                               longitud++;
              
    }
    
    std::cout<<"Elnombre de ";
    std::cout<< palabra;
    std::cout<<"tiene";
    std::cout<<longitud;
    std::cout<<"letras";
    
    std::cin>>salir;
}
    
   
