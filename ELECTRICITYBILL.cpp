/*FRANKLINE KOECH CT101/G/26627/25 */

#include <iostream>
using namespace std;

float calculateBill(int units_consumed);

int main(){
    int units;
    float bill;
    cout<<"Enter number of units consumed: "<<endl;
    cin>>units;
    
    bill = calculateBill(units);

    cout<<"\n";
    cout<<"ELECTRICITY BILL PROGRAM "<<endl;
    cout<<"================================="<<endl;
    cout<<"Units consumed = "<<units<<endl;
    cout<<"Total electricity bill = Ksh. "<<bill<<endl;
    cout<<"================================="<<endl;
}

float calculateBill(int units_consumed){
    float bill;
    if (units_consumed<=100){
        bill = units_consumed * 10;
    }
    else if(units_consumed>100 && units_consumed<=200){
        bill = (100 * 10) + (units_consumed - 100) * 15;
    }
    else
    {
        bill = (100 * 10) + (100 * 15) + (units_consumed - 200) * 20;
    }
    return bill;
}