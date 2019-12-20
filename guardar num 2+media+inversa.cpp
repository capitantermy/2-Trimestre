#include<iostream>
/*vamos a acer un programa que dibuje un cuadrado
*/


int main(){
    //Definición de variables
    char salir;
    int num[4];
    int cont;
    float suma_numeros;
    float media;
    //introducimos los numeros en el vector
    for(cont=0;cont<=3;cont++){
          std::cout<<"Introduce el numero: ",cont,": ";
          std::cin>>num[cont];
    }
    //sacamos los numeros guardados
    std::cout<<"\n";
    std::cout<<"Estos son los numeros que has guardado:\n";
    for(cont=0;cont<=3;cont++){
          std::cout<<num[cont];
          std::cout<<"\n";   
    }
    //sacamos la media
    std::cout<<"\n";
    suma_numeros=0;
    for(cont=0;cont<=3;cont++){
                               suma_numeros=suma_numeros + num[cont]; //suma acumulada
    }
    std::cout<<"La suma de los numeros vale: \n";
    std::cout<<suma_numeros,"\n";
    std::cout<<"\n";
    media=suma_numeros/4;
    std::cout<<"\n";
    std::cout<<"La media de los numeros vale: \n";
    std::cout<<media,"\n";
    std::cout<<"\n";
    //mostramos la lista en orden inverso
    std::cout<<"\n";
    std::cout<<"la lista en orden inverso es:\n";
    for(cont=3;cont>=0;cont--){
                               std::cout<<num[cont];
                               std::cout<<"\n";
                               
    }
    
    std::cin>>salir;
}
