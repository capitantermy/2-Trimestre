#include<iostream>
/*programa que lee una palabra y sustituya las vocales por u*/
int devuelve_longitud(char palabra[]){
    
}




int main(){
    char palabra[10];
    char salir;
    int cont;
    int longitud;
    longitud=0;//iniciando variable
    std::cout<<"Dime tu nombre:";
    std::cin>> palabra;
    //dirty trick
    cont=0;
    while(palabra[cont]!='\0'){
                               longitud++;
                               cont++;
              
    }
    
    std::cout<<"El nombre de ";
    std::cout<< palabra;
    std::cout<<" tiene ";
    std::cout<<longitud;
    std::cout<<" letras";
    
    std::cin>>salir;
}
    
   
