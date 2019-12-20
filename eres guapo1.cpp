#include<iostream>


int main(){
    char salir;
    char respuesta;
    std::cout<<"hola mundo, mi primer programa";
    std::cout<<"¿eres guapo? (s/n): ";
    std::cin>>respuesta;
    if(respuesta=='s'){
                        std::cout<<"hola guapo";
}  
    else{
         std::cout<<"hola feo";
}
    std::cin>>salir;
}
