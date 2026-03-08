#include <iostream>
#include <string>
#include <ctime>

std::string hand;
std::string cpu_hand;
int hand_num;
int cpu_hand_num;
int game (std::string hand);
int num;
int result; 
int result_num;

int main(){

    srand(time(NULL));
    num = rand()%3;

    result_num = 0;

    do{
        std::cout << "Choose your hand: ";
        std::cin >> hand;
        
        if( hand != "rock" && hand != "scissor" && hand != "paper" ){
            std::cout << "Enter a valid choice.\n";
        }
        else{
            game(hand);
        }
    }while( hand != "rock" && hand != "scissor" && hand != "paper" || result_num == 1);

    

    return 0;
}

int game(std::string hand){

    switch(num){
        case 1:
            cpu_hand = "rock";
            cpu_hand_num = 1;
            break;
        case 2:
            cpu_hand = "scissor";
            cpu_hand_num = 2;
            break;
        case 0:
            cpu_hand = "paper";
            cpu_hand_num = 3;
            break;
    }
    if( hand =="rock"){
        hand_num = 1;
    }
    else if( hand == "scissor"){
        hand_num = 2;
    }
    else{
        hand_num = 3;
    }
 
    result = hand_num - cpu_hand_num;

    switch(result){
        case 0:
            std::cout << "CPU's hand was " << cpu_hand << '\n' << "You got the same hand! Try Again!";
            result_num = 1;
            return result_num;
            break;
        case 1:
        case -2:
            std::cout << "CPU's hand was " << cpu_hand << '\n' << "YOU LOSER!";
            result_num = 0;            break;
        case 2:
        case -1:
            std::cout << "CPU's hand was " << cpu_hand << '\n' << "YOU WINNER!";
            result_num = 0;
            break;
    }

    return result_num;
}