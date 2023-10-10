#include <iostream>
#include "BrazoRobotico.h" // Incluye la declaración de la clase BrazoRobotico

	int main() {
    		// Crea una instancia de la clase BrazoRobotico
   	 	BrazoRobotico brazo1(0.0, 0.0, 0.0, false);

    		// Muestra la información inicial
    		std::cout << "Posición inicial del brazo: (" << brazo1.getX() << ", " << brazo.getY() << ", " << brazo.getZ() << ")" << std::endl;
    		std::cout << "¿Está sujetando un objeto? " << (brazo1.getSujetar() ? "Sí" : "No") << std::endl;

    		// Mueve el brazo a una nueva posición
   		 brazo1.mover(1.0, 2.0, 3.0);

    		// Muestra la nueva posición
    		std::cout << "Nueva posición del brazo: (" << brazo1.getX() << ", " << brazo1.getY() << ", " << brazo1.getZ() << ")" << std::endl;

    		// Coge un objeto
    		brazo1.coger();

    		// Muestra si el brazo está sujetando un objeto
    		std::cout << "¿Está sujetando un objeto? " << (brazo1.getSujetar() ? "Sí" : "No") << std::endl;

    		// Suelta el objeto
    		brazo1.soltar();

    		// Muestra que el brazo ha soltado el objeto
    		std::cout << "¿Está sujetando un objeto? " << (brazo.getSujetar() ? "Sí" : "No") << std::endl;

    	return 0;

	}

