#include<string>
using namespace std;

class BMI
{
public:
	BMI();
	void setHeight(double h);
	void setMass(double m);
	double getHeight();
	double getMass();
	void calBMI(double h, double m);
	double getBMI();
	string Category();
private:
	double height;
	double mass;
	double bmi;
};
