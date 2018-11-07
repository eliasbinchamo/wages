/*
 *      Author: Elias Binchamo *   Date: 2018-11-7* Description: this program calculates wages 
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;
//function prototypes
class Try1{
int salary;
  public: void test101(int age){
    std::cout << "Enter your age to view your salary!" << '\n';
    cin >> age;
    if(age >= 20 && age < 60){
      salary = 450000;
      cout << "YOUR ANNUAL SALARY IS $" <<salary<<" BECAUSE YOU ARE OLD ENOUGH!"<< '\n';
    }
    else if(age > 60){
      salary = 54000;
      cout << "YOUR ANNUAL SALARY IS $" <<salary<<" BECAUSE YOU'RE TOO OLD TO HAVE A JOB!"<< '\n';
    }
    else{
      salary = 10;
      cout << "YOUR ANNUAL SALARY IS $" <<salary<<" BECAUSE YOU'RE STILL A KID!"<< '\n';
    }
  }
};
int main() {
    Try1 try1;
    try1.test101(21);
    //0. variable declaration
    double hours = 0, rate, wages;

    //1. input the hours
    std::cout << "Enter Hours" << endl;
    cin>>hours;
    //2. input the rate
    rate = 10.65;

    //3. Calculate wages


    //4. Print the results (wages)
    if(hours  !=  0){
      if (hours<=40){
        cout << "You are getting paid for normal hours only!!" << endl;
      }
      else if (hours > 40){
        int overtime;
        overtime = abs(hours-40);

        int overtimeRate = rate*1.5;
          int total = 40*rate + overtime*overtimeRate;
        cout << "You are paid for :"<<hours<< "(" <<overtime<<" overtime.) "<<(overtime*overtimeRate)+(40*rate) <<endl;
          cout << "normal hours : " << 40 << "("<< 40*rate<<")"<< endl;
          cout << "overtime hours : " << overtime << "("<< overtime*overtimeRate<<")"<< endl;
          cout << "TOTAL : " << 40*rate << "+"<< 40*rate<<") = "<<total<< endl;
      }
    }

    return 0;
}
