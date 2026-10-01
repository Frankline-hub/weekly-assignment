/*FRANKLINE KOECH CT101/G/26627/25*/

#include <iostream>
using namespace std;

float calculateTax(float gross_salary);

int main(){
    float gross, tax, net;
    cout<<"Enter employee gross salary: "<<endl;
    cin>>gross;
    
    tax = calculateTax(gross);
    net = gross - tax;

    cout<<"\n";
    cout<<"EMPLOYEE SALARY PROGRAM "<<endl;
    cout<<"================================="<<endl;
    cout<<"Gross salary = Ksh. "<<gross<<endl;
    cout<<"Tax amount = Ksh. "<<tax<<endl;
    cout<<"Net salary = Ksh. "<<net<<endl;
    cout<<"================================="<<endl;
}


float calculateTax(float gross_salary){
    float tax;
    if (gross_salary<30000){
        tax = 0.05 * gross_salary;
    }
    else if(gross_salary>=30000 && gross_salary<=59999){
        tax = 0.1 * gross_salary;
    }
    else
    {
        tax = 0.15 * gross_salary;
    }
    return tax;
}