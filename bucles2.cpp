#include<iostream>
/*vamos a acer un programa que dibuje un cuadrado
*/


int main(){
    //Definición de variables
    char salir;
    int lado;
    int col;
    int fil;
    std::cout<<"Dime el tamaño del cuadrado: ";
    std::cin>> lado;
    for(col=1;col<=lado;col++){
                               for(fil=1;fil<=lado;fil++){
                                                          std::cout<<'¿';
                                                          std::cout<<' ';
                               }
                               std::cout<<"\n";
    } 
    
    

    
      
    std::cin>>salir;
}
