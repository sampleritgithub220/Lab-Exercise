#include <iostream>
using namespace std;


void check_balance(long double balance){
    cout<<"the balance is "<<balance<<endl;

}
long double with_draw(long double balance){
    long double amount;
    cout<<"Enter withdraw amount: ";
    cin>>amount;
    if(amount>balance){
        cout<<"Insaficiant Balance";
        cout<<"\nTry again"<<endl;
    }else{
        balance-=amount;
        cout<<"Withdraw sucessfully.You withdraw $"<<amount<<endl;
    }
    return balance;
}
long double deposit(long double balance) {
    long double amount;
    cout << "Enter the amount to deposit: $";
    cin >> amount;

    balance+=amount;
    cout << "Deposit successful. You deposited: $" << amount << endl;
    return balance;

}
void main_meanu(){
    cout<<"\nMAIN MEANU" <<endl;
    cout<<"1: for Check balance"<<endl;
    cout<<"2: for withdraw"<<endl;
    cout<<"3: for deposit"<<endl;
    cout<<"4: for exit"<<endl;

}
int main() {
    cout<<"\t\tBANK OF BALTISTAN\n \t\t    WELCOME"<<endl;
    string name,yasir,shakeela,nasir,sabir;
    int pin;
    cout<<"Enter user name :";
    cin>>name;
    cout<<"Enter your pin :";
    cin>>pin;
    if(name==yasir ||pin==1122 ){
            cout<<"\tAccount Title : YASIR MEHDI"<<endl;
            long double balance=1000.0;
    int option;
    do{
        main_meanu();
        cout<<"please choice any option(1-4): ";
        cin>>option ;
        switch(option){
            case 1:
                check_balance(balance);
                break;
            case 2:
                balance=with_draw(balance);
                break;
            case 3:
                balance=deposit(balance);
                break;
            case 4:
                cout << "Exiting the ATM. Thank you for using our service." << endl;
                break;
            default:
                cout<<"Invalid option";
        }
    }while(option!=4);

    }
    else if(name==nasir || pin==12345){
            cout<<"\t Account Title : NASIR HUSSAIN"<<endl;
        long double balance=5000.0;
    int option;
    do{
        main_meanu();
        cout<<"please choice any option(1-4): ";
        cin>>option ;
        switch(option){
            case 1:
                check_balance(balance);
                break;
            case 2:
                balance=with_draw(balance);
                break;
            case 3:
                balance=deposit(balance);
                break;
            case 4:
                cout << "Exiting the ATM. Thank you for using our service." << endl;
                break;
            default:
                cout<<"Invalid option";
        }
    }while(option!=4);
    }
    else if(name==shakeela|| pin==1212){
            cout<<"\t Account Title : SHAKEELA BATOOL"<<endl;
        long double balance=7000.0;
    int option;
    do{
        main_meanu();
        cout<<"please choice any option(1-4): ";
        cin>>option ;
        switch(option){
            case 1:
                check_balance(balance);
                break;
            case 2:
                balance=with_draw(balance);
                break;
            case 3:
                balance=deposit(balance);
                break;
            case 4:
                cout << "Exiting the ATM. Thank you for using our service." << endl;
                break;
            default:
                cout<<"Invalid option";
        }
    }while(option!=4);
    }
    else if(name==sabir || pin==112233){
            cout<<"\t Account Title : SABIR MEHDI"<<endl;
        long double balance=12000.0;
    int option;
    do{
        main_meanu();
        cout<<"please choice any option(1-4): ";
        cin>>option ;
        switch(option){
            case 1:
                check_balance(balance);
                break;
            case 2:
                balance=with_draw(balance);
                break;
            case 3:
                balance=deposit(balance);
                break;
            case 4:
                cout << "Exiting the ATM. Thank you for using our service." << endl;
                break;
            default:
                cout<<"Invalid option";
        }
    }while(option!=4);
    }
    else{
        cout<<"Wrong password or user name";
    }



    return 0;
}
