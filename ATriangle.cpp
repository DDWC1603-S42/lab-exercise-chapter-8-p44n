// AHMAD FARHAN SULAIMAN BIN ZULRAIMI
// A17DW1185

#include <iostream>
#include <iomanip>

using namespace std;

double areaTriangle (double height, double base);
double perimeterTriangle (double side1,double side2,double base);

int main ()
{
	double Area_Of_Triangle;
	double width,area,length,height,base,radius;
	 int nom,shape;
	 
	 
	cout << "Triangle" << endl;
	cout << endl;
	
	// Height of triangle
	cout << "Enter the height of the triangle: " << endl;
	cin >> height;
    
    //Base of triangle
	cout << "Enter the base of the triangle: " << endl;
    cin >> base;
    
    
	
	Area_Of_Triangle = areaTriangle(height, base);
    
	cout << "AREA OF TRIANGLE: " << setprecision(2) << showpoint << fixed << Area_Of_Triangle << "cm^2" << endl;  //display output of area triangle
 
     
   return 0;  
}


double areaTriangle (double height, double base)
    {
        return ((height*base)/2);
        //FORMULA: CALCULATE THE AREA OF THE TRIANGLE
    }
