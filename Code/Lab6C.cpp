#include <iostream> 
using namespace std;

//function declaration is provided
double compute_bonus(double base_salary, int experience);

int main()
{
	double base_salary;
	int experience;
	double BonusAmount;
	
	cout<<"Enter your base salary: ";
	cin>>base_salary;
	cout<<endl<<"Enter your years of experience: ";
	cin>>experience;
	cout<<endl;

	BonusAmount = compute_bonus(base_salary, experience);
	cout<<"Your bonus amount is: $"<<BonusAmount<<endl;
	return 0;
}
//function definition
double compute_bonus(double base_salary, int experience)
{
	double bonus;
	if (experience > 5){
		bonus = (base_salary * 0.05);
	}
	else{
		bonus = (base_salary * 0.03);
	}
	return bonus;
	//compare experience and calculate bonus 
	//return the computed bonus
}