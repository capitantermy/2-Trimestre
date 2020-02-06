#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int devuelve_longitud(char aux[]){
    int cont=0;
    int longitud=0;
    while(aux[cont]!='\0'){
                           longitud++;
                           cont++;
                           }
    return(longitud);
    }
int devuelve_nvocales(){
}
int main(){
    int salir;
    char *palabras[4];
    int cont;
    char aux[20];
    int longitud;
    //Leo cuatro palabras
    for(cont=0;cont<4;cont++){
                              std::cout<<"palabra: "<<cont<<" "; 
                              std::cin>>aux;
                              longitud=devuelve_longitud(aux);
                              std::cout<<longitud<<"\n";
                              palabras[cont]=(char *) malloc((longitud+1)*sizeof(char));
                              //strcpy(destino,origen);
                              strcpy(palabras[cont],aux);
                              }
    std::cout<<"\nLISTA DE PALABRAS\n";
    for(cont=0;cont<4;cont++){
                              printf("%s\n",palabras[cont]);
                              }
                              
       std::cin>>salir;
}
