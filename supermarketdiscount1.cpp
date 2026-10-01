/*FRANKLINE KOECH CT101/G/26627/25 */

#include <iostream>
using namespace std;

float calculateDiscount(int purchase_amnt);

int main(){
    int amount;
    float result,final_pay;
    cout<<"Enter amount purchases: "<<endl;
    cin>>amount;
    
    result = calculateDiscount(amount);
    final_pay = amount - result;

    cout<<"\n";
    cout<<"QUICKMART DISCOUNT PROGRAM "<<endl;
    cout<<"================================="<<endl;
    cout<<"Initial Amount: = Ksh "<<amount<<endl;
    cout<<"Discount = Ksh. "<<result<<endl;
    cout<<"Final amount payable = Ksh. "<<final_pay<<endl;
    cout<<"================================="<<endl;
}



float calculateDiscount(int purchase_amnt){
    float discount;
    if (purchase_amnt<5000){
        discount = 0.05 * purchase_amnt;
    }
    else if(purchase_amnt>=5000 && purchase_amnt<=9999){
        discount = 0.1 * purchase_amnt;
    }
    else
    {
        discount = 0.15 * purchase_amnt;
    }
    return discount;
}