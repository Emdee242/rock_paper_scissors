#include <iostream>
#include <ctime>
#include <cstdlib>
int main(){
    int userChoiceNum;
    int compChoiceNum;
    std::string compChoice;
std::string userInput;
std::string compInput[3] = {"Rock", "Paper", "Scissors"};
int x = time(0);
srand(x);
compChoiceNum = (rand() % 3);
if(compChoiceNum == 0){
compChoice = compInput[0];
}else if(compChoiceNum == 1){
compChoice = compInput[1];
}else {
compChoice = compInput[2];
}
std::cout << "Rock, Paper or Scissors? ";
std::cin >> userInput;
if(userInput == "Rock"){
    userChoiceNum = 0;
}else if(userInput == "Paper"){
    userChoiceNum = 1;
}else if (userInput == "Scissors"){
    userChoiceNum = 2;
}else{
    std::cout << "Invalid input, try again: ";
    std::cin >> userInput;
}
int result = ((userChoiceNum - compChoiceNum) + 3) % 3;
if(result == 0){
    std::cout << "Computer chose:" << compChoice << ", So it's a draw" << std::endl;
}if(result == 1){
    std::cout << "Computer chose:" << compChoice << ", So you win!!!" << std::endl;
}if(result == 2){
    std::cout << "Computer chose:" << compChoice << ", So the computer wins!!!" << std::endl;
}
}