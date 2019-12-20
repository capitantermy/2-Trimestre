#include<iostream>


int main(){
    char salir;
    char respuesta;
    std::cout<<"hola mundo, mi primer programa \n";
    std::cout<<" ¿eres guapo? (s/n): ";
    std::cin>>respuesta;
    //&& significa AND
    //|| significa OR
    if(respuesta=='s' || respuesta=='S'){
                      std::cout<<"hola guapo";
}  
    if(respuesta=='n' || respuesta=='N'){
                      std::cout<<"hola feo";
}
    std::cin>>salir;
}
