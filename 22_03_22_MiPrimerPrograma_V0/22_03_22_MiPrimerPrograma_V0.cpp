// 22_03_22_MiPrimerPrograma_V0.cpp : 
// Este archivo contiene la función "main".
//  La ejecución del programa comienza y termina ahí.
//Este es mi primer programa la neta no se que hacer: Rogelio Flores Rodriguez
//Esto es un comentario...
/*Esto es una forma de hacer un comentario, donde
* no importa
* que tan lejos
* solo termina
* hasta que lo cierre

*/

#include <iostream>

int main()
{
    bool uno = true;
    //Ciclo
    
    while (uno == true)

    {

   
    //Declaracion de variables.
    int mi_primer_entero = 0;
    //Se usa para guardar numeros enteros
    int mi_segundo_entero;
    int resultado_de_la_suma;
    std::cout << "Ingresa un dato: " << std::endl;
    std::cin >> mi_primer_entero;

             if (mi_primer_entero <= 10)
             {
        std::cout << "Ingresaste un dato que no tengo contemplado \nDeseas repetir?";
            std::cout << "Ingrese 1 para si \nIngrese 0 para no \n";
        std::cin >> uno;

             }


    std::cout << "Ingresa un segundo dato: " << std::endl;
    std::cin >> mi_segundo_entero;

    resultado_de_la_suma = mi_primer_entero + mi_segundo_entero;

    std::cout << "El resultado de la suma es: " << resultado_de_la_suma << std::endl;
    
    float mi_primer_float = 0;
    //Se usa para detectar numeros decimales
    float mi_segundo_float;
    float resultado;
    std::cout << "Ingesa un dato con decimal: " << std::endl;
    std::cin >> mi_primer_float;
          if (mi_primer_float <= 10) 
          {
        std::cout << "Ingresaste un dato que no tengo contemplado \nDeseas repetir?";
        std::cout << "Ingrese 1 para si \nIngrese 0 para no \n";
        std::cin >> uno;

          }
    std::cout << "Ingresa un segundo dato decimal: " << std::endl;
    std::cin >> mi_segundo_float;

    resultado = mi_primer_float + mi_segundo_float;

    std::cout << "El resultado de la suma es: " << resultado << std::endl;

    char mi_primer_char = 0;
    //para letras
    std::cout << "Ingresa una letra: " << std::endl;
    std::cin >> mi_primer_char;
    std::cout << "Su caracter es: " << mi_primer_char << std::endl;

    double mi_primer_doble = 0;
    //para numeros grandes
    std::cout << "Ingresa un numero grande: " << std::endl;
    std::cin >> mi_primer_doble;
    std::cout << "Su numero es: " << mi_primer_doble << std::endl;
    
    
    std::string nombre;
    //Detecta palagras
    std::cout << "Inserte una palabra: " << std::endl;
    std::cin >> nombre;
    std::cout << "Su palabra es: " << nombre << std::endl;

        std::cout << "Desea salir? \nIngrese 0 para si \n";
        std::cout << "Ingrese 1 para no \n";
        std::cin >> uno;

    }
   
}

