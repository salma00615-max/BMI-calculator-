#include <iostream>
#include <string> 
#include <cmath>
using namespace std;
// constant 
const double min_normal = 18.5;
const double max_normal = 24.9;
int main()
{
	//variables
	string name ;
	float weight,height ;
	double BMI ;
    /*
	input name , hight , weight 
    outpot string , bmi 
    */
	cout << "Hello what is your name ?\n" << name ;
	cin >> name;
	cout << "\nWelcome " << name << " to my first proggram.\nThis proggram gonna calculate your BMI.\n\n";
	cout << "Enter your height : " ; 
	cin >> height ;
	cout << "Enter your weight : ";
	cin >> weight;
	// height in meter 
     height =(height/100);
	   // to calculate bmi
	   BMI = weight / (pow(height,2));
	   cout << BMI ;
	
	   if(BMI < min_normal)
	   cout << " you are under weight";
	   else if (BMI <= max_normal) 
	   cout << " your weight is normal";
	   else 
	   cout << " you are over weight";
}
