#include<iostream>

using namespace std;
int main(){

    cout<<"welcome to car rental system\n";
    cout<<"1 for rent a car\n";
    cout<<"2 for return a car\n";
    cout<<"3 for exit\n";
    cout<<"Enter your choice: ";
    int user_choice;
    cin>>user_choice;
    //checking if the input is valid or not

    if(cin.fail() || user_choice <1 || user_choice > 3){
        cout<<"The given input is invalid or out of range.\n";
        cout<<"Please enter a valid input.\n";
        
    }
    if(user_choice==1){
        cout<<"you hace choose to rent a car\n";
        cout<<"Please enter the car model you want to rent: ";
        string car_model;
        cin>>car_model;
        cout<<"You have successfully rented the car: "<<car_model<<"\n";
    
        }
    else if(user_choice==2)   
        {

        cout<<"you have choose to return a car\n";
        cout<<"Please enter the car model you want to return: ";
        string car_model;
        cin>>car_model;
        cout<<"You have successfully returned the car: "<<car_model<<"\n";}
    
    
    else if(user_choice==3){
        cout<<"Thank you for using our car rental system. Goodbye!\n";
    }
    else{
        cout<<"Invalid choice. Please try again.\n";
    }    
    
    return 0;
}