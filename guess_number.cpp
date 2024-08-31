#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

/*
void findUpperAndLowerBound(int &a, int &b, int entered_number){
    //a = 1
    // n = 98
    // b = 100
    if(entered_number > a){
        a = entered_number;
    }

    if(entered_number < b){

    }
    cout<<"Choose the number Between "<<a<<"- "<<b<<endl;
}
 */

int main(){
    system("cls");
    int chance = 5;
    
    srand(time(0));
    int number = rand()%100 + 1;
    bool status = false;

    int entered_number = 1;
    int lb = 1;
    int ub = 100;

    //game rules
    cout<<endl<<"You have 5 Chance to find out the number"<<endl;
    cout<<endl;

    while (chance!= 0)
    {   
        cout<<"             Chance No. "<<chance<<endl;
        // findUpperAndLowerBound(lb, ub, entered_number);
        cout<<"Enter the number between 1 - 100"<<endl;
        cin>>entered_number;

        if(entered_number == number){
            system("cls");
            cout<<"Hurray! You Won "<<endl;
            status = true;
            break;
        }else if(entered_number < number){
            system("cls");
            cout<<"The number is Greater than "<<entered_number<<endl<<endl;
        }else{
            system("cls");
            cout<<"The number is Smaller than "<<entered_number<<endl<<endl;
        }

        chance--;
    }

    if(!status){
        cout<<"Better luck next time"<<endl;
        cout<<"Exact NUmber was "<<number<<endl;
    }

    cout<<endl<<"Your Game is Exit"<<endl;
    


} 