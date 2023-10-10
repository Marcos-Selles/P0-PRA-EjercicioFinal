#include <iostream>

using namespace std;

class BrazoRobotico{
	private: 
		double x, y, z; 
		bool sujetar;
	public:
		BrazoRobotico(double x, double y, double z, bool sujetar);
		double getX();
		double getY();
		double getZ();
		bool getSujetar();

		void coger();
		void soltar();
		void mover(double, double, double);
	
		
		
	};

