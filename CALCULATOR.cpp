/*FRANKLINE KOECH CT101/G/26627/25*/

#include <iostream>
using namespace std;

int main(){
    float num1, num2, result;
    char op;

    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter operator (+, -, *, /): "<<endl;
    cin>>op;
    cout<<"Enter second number: "<<endl;
    cin>>num2;

    cout<<"\n";
    cout<<"SIMPLE CALCULATOR PROGRAM "<<endl;
    cout<<"================================="<<endl;

    
    switch (op){
        case '+':
            result = num1 + num2;
            cout<<num1<<" + "<<num2<<" = "<<result<<endl;
            break;
        case '-':
            result = num1 - num2;
            cout<<num1<<" - "<<num2<<" = "<<result<<endl;
            break;
        case '*':
            result = num1 * num2;
            cout<<num1<<" * "<<num2<<" = "<<result<<endl;
            break;
        case '/':
            if (num2==0){
                cout<<"Error: Division by zero is not allowed."<<endl;
            }
            else
            {
                result = num1 / num2;
                cout<<num1<<" / "<<num2<<" = "<<result<<endl;
            }
            break;
        default:
            cout<<"Error: Invalid operator."<<endl;
    }
    cout<<"================================="<<endl;
}