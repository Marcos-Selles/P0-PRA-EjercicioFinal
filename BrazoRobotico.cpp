
#include "BrazoRobotico.h"


	//MetodoConstructor
	BrazoRobotico:: BrazoRobotico(double x1,double y1,double z1,bool Sujetar);{
		x = x1;
		y = y1;
		z = z1; 
		sujetar = Sujetar;


	}

	
	//Mover el brazo a una nueva posición
	void BrazoRobotico:: mover(double new_x,double new_y,double new_z){
		x = new_x;
		y = new_y;
		z = new_z;


	}

	// Métodos Consultores
	double BrazoRobotico:: getX(){
		return x;

	}
	double BrazoRobotico:: getY(){
                return y;

        }
	double BrazoRobotico:: getZ(){
                return z;

        }

	bool BrazoRobotico:: getsujetar(){
		return sujetar;
	}

	//Coger o Soltar
	void BrazoRobotico:: coger(){
		sujetar = true;
	}
	void BrazoRobotico:: soltar(){
                sujetar = false;
        }




