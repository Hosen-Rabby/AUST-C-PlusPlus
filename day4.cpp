// /*

//     int value;
//     cout<< "Enter a number: ";
//     cin>> value;
    
//     switch(value > 20 && value < 100){
//         case 0 ... 40:
//         // 0 1 2 3 4 5
//             cout<< "Saturday";
//             break;
//         case 41 ... 50:
//             cout<< "Sunday";
//             break;
//         case 51 ... 60:
//             cout<< "Monday";
//             break;
//         case 61 ... 70:
//             cout<< "Monday";
//             break;
//         case 71 ... 80:
//             cout<< "Monday";
//             break;
//         default:
//             cout<<"Please enter between 0 to 6";
//     }
    
    
//     // BMI calculator

//     float weight, height, bmi;
    
//     cout<< "Enter your weight(kg):";
//     cin>>weight;
//     cout<< "Enter your height(f):";
//     cin>>height;
    
//     height *= 0.3;
    
//     bmi = weight / (height * height);
    
//     /*
//     18.5 > underweight;
//     18.5- 24.9 = healthy
//     25 - 29.9 = overweight
//     30 < overweight
//     */ 
    
//     // if(bmi < 18.5)
//     //     cout<<"Underweight, biye hobena beshi kore khao.";
//     // else if (bmi > 25)
//     //     cout<< "Overweight, biye hoye gese.";
//     // else 
//     //     cout<<"Perfect.!, samnei biye ready thako.";
// */ 

#include<iostream>
using namespace std;

int main()
{

    // bank
    // balance, withdraw, deposite
    
    double balance = 5000, withdraw, deposite;
    int select;
    
    cout<<"1 Balance\n";
    cout<<"2 Withdraw\n";
    cout<<"3 Deposite\n";
    
    cout<< "Enter any option:";
    cin>> select;
    
    switch(select){
        case 1:
            cout<<"You have "<< balance << " Taka";
            break;
        case 2:
            cout<<"Enter withdraw amount: ";
            cin>> withdraw;
            if(withdraw > balance)
                cout<<"You can not withdraw " << withdraw << endl;
            else
                balance = balance - withdraw;
                cout<<"Your current balance: " << balance;
            break;
        case 3:
            cout<<"Enter deposite amount: ";
            cin>> deposite;
            balance += deposite;
            cout<<"Your current balance: " << balance;
        
            break;
        default:
            cout<<"--";
    
    }

}
