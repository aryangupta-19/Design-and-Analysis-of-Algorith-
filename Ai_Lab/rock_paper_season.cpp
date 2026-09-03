#include<iostream>
#include <ctime>
#include<cstdlib>
using namespace std;

int yourChoice(){
    cout<<"Pick 1 for Rock"<<endl;
    cout<<"Pick 2 for seasor"<<endl;
    cout<<"Pick 3 for paper"<<endl;
    int user_input;
    cout<<"Enter Your Choice here:";
    cin>>user_input;

    return user_input;
}

int compChoice(){
    int n = rand() % 3 + 1;
    return n;
}

int check(int user, int comp){
    // user win = 1 comp win 2 equal 3
   if(user == 1){
        if(comp == 2) return 1;
        else if(comp == 3) return 2;
        else return 3;
   }else if(user == 2){
        if(comp == 1) return 2;
        else if(comp == 3) return 1;
        else return 3;
   }else{
        if(comp == 1) return 1;
        else if(comp == 2) return 2;
        else return 3;
   }
}

int main(){
    srand(time(0));
    int user_choice = yourChoice();
    int comp_choice = compChoice();
    cout<<"Your choice: "<<user_choice<<endl<<"Computer choice: "<<comp_choice<<endl;
    int result = check(user_choice, comp_choice);

    if(result == 1) cout<<"Congratulations! You won the Game";
    else if(result == 2) cout<<"Ahh! You Lost";
    else cout<<"Game tied";
}