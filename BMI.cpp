#include<iostream>
#include<fstream>
#include<string>
#include"BMI.h"
using namespace std;

BMI::BMI(){height=0, mass=0, bmi=0;}
void BMI::setHeight(double h)
{
	height=h;
}
void BMI::setMass(double m)
{
	mass=m;
}
double BMI::getHeight()
{
	return height;
}
double BMI::getMass()
{
	return mass;
}
void BMI::calBMI(double h, double m)
{
	double temp;
	temp=h/100;
	bmi=m/(temp*temp);
}
double BMI::getBMI()
{
	return bmi;
}
string BMI::Category()
{
	if(bmi<15)
		return "Very severely underweight";
	else if(bmi>=15 && bmi<16)
		return "Severely underweight";
	else if(bmi>=16 && bmi<18.5)
		return "Underweight";
	else if(bmi>=18.5 && bmi<25)
		return "Normal";
	else if(bmi>=25 && bmi<30)
		return "Overweight";
	else if(bmi>=30 && bmi<35)
		return "Obese Class I (Moderately obese)";
	else if(bmi>=35 && bmi<40)
		return "Obese Class II (Severely obese)";
	else 
		return "Obese Class III (Very severely obese)";
}
