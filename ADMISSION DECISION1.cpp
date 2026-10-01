/*FRANKLINE KOECH CT101/G/26627/25*/


#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    int age;
    float score;

    cout<<"Enter student name: "<<endl;
    getline(cin, name);
    cout<<"Enter age: "<<endl;
    cin>>age;
    cout<<"Enter exam score: "<<endl;
    cin>>score;

    cout<<"\n";
    cout<<"RUIRU COLLEGE ADMISSION PROGRAM "<<endl;
    cout<<"================================="<<endl;
    cout<<"Student name = "<<name<<endl;
    cout<<"Age = "<<age<<endl;
    cout<<"Exam score = "<<score<<endl;

    
    if (age>=18){
        if (score>=50){
            cout<<"Decision = Admitted"<<endl;
        }
        else
        {
            cout<<"Decision = Not Admitted: Low Score"<<endl;
        }
    }
    else
    {
        cout<<"Decision = Not Admitted: Underage"<<endl;
    }
    cout<<"================================="<<endl;
}