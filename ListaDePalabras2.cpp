#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<LaLongitud.h>

int main(){
    int salir;
    char *palabras[4];
    int cont;
    char aux[20];
    int longitud;
    int veces;
    char *p_aux;
    for(cont=0;cont<4;cont++){
                              std::cout<<"Dame tu palabra: "<<cont<<" "; 
                              std::cin>>aux;
                              longitud=devuelve_longitud(aux);
                              std::cout<<longitud<<"\n";
                              palabras[cont]=(char *) malloc((longitud+1)*sizeof(char));
                              //lo de arriba reserba un hueco el la memoria
                              //strcpy(destino,origen);
                              strcpy(palabras[cont],aux);
                              }
std::cout<<"\nLISTA DE PALABRAS\n";
for(cont=0;cont<4;cont++){
                          printf("%s\n",palabras[cont]);
                          }
    
for(veces=1;veces<4;veces++){
for(cont=0;cont<3;cont++){
if(strcmp(palabras[cont],palabras[cont+1])>0){
p_aux=palabras[cont];
palabras[cont]=palabras[cont+1];
palabras[cont+1]=p_aux;
}
}
}
std::cout<<"Lista ordenada\n";
for(cont=0;cont<4;cont++){
                          printf("%s\n",palabras[cont]);
                          }

std::cin>>salir;
}
