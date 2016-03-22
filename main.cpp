#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include"BMI.h"
using namespace std;

int main()
{
	ifstream inFile("file.in", ios::in);
	ofstream outFile("file.out", ios::out);
	if(!inFile)
	{
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	double h, m;
	BMI bmi;
	while(inFile>>h>>m)
	{
		if(h==0 && m==0)
			continue;
		bmi.setHeight(h);
		bmi.getHeight();
		bmi.setMass(m);
		bmi.getMass();
		bmi.calBMI(h, m);	
		outFile<<setprecision(4)<<bmi.getBMI()<<"\t"<<bmi.Category()<<endl;
	}
	return 0;
}
