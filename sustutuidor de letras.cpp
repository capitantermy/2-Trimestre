#include<iostream>
/*programa que lee una palabra y sustiyuye las vocales por u*/
int devuelve_longitud(char palabra[]){
    int longitud=0;//variable acumuladora
    int cont=0;
    while(palabra[cont]!='\0'){
                               longitud++;
                               cont++;
}
                               return(longitud);
                               }
int devuelve_nvocales(){
}

int main(){
    char salir;
    char palabra[10];
    char vocales[]={'a','e','i','o','u'};
    int cont;
    int nvocales;
    std::cout<<"dime algo: ";
    std::cin>>palabra;
    for(cont=0;cont<devuelve_longitud(palabra);cont++){
        for(nvocales=0;nvocales<5;nvocales++){
                                              if(palabra[cont]==vocales[nvocales]){
                                                                                   palabra[cont]='u';
                                                                                   
                                                                                   }
                                              }
        }
std::cout<<"palabra trolleada:  ";
std::cout<<palabra;
std::cin>>salir;
}

