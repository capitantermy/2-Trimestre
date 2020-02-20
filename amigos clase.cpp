#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    struct amigo{
           int n_amigo;
           float dinero;
           };
    typedef struct{
            char email[20];
            int edad;
            char nombre[20];
    }datosPersona;
    datosPersona alumno1;
    datosPersona *P_aux;
    P_aux=&alumno1;
   
    int salir;
   
    for (cont=0;cont<3;cont++){
        std::cout<<"dime tu nombre: ";
    
  
    std::cin>>salir;
}
