#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()

{
unsigned int weight;
unsigned int height;
float bmi;


    cout<<"BMI Calculator\n";
    cout<<"Please enter your weight (lbs): ";
    cin>>weight;
    cout<<"Please enter your height (inches): ";
    cin>>height;
    bmi = (weight/ pow(height,2))*703;
    cout<<"\n";
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Your BMI is "<<bmi<<endl;

    if (bmi < 16)
       {  
       cout<<"You are underweight! Eat more!"<<endl;
       }
       else if (bmi >= 25 && bmi <29.99)   
       cout<<"You are normal!"<<endl;
       else if (bmi >= 30 )
       cout<<"You are overweight!"<<endl;
       else
       cin.get();
}
