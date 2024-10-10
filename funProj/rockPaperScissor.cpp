#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    vector<string> compMove = {"Rock", "Paper", "Scissor"};
    char ans = 'y';
    int usrAns;
    int usrScore = 0,compScore=0;
    srand(time(0));
    while (ans =='y' || ans == 'Y'){
        cout<<"What do you wish to play:  \n\t1. Rock\n\t2. Paper\n\t3.Scissor\n>>> ";
        cin>>usrAns;
        int randomIndex = rand() % compMove.size();
        cout<<"The computer chose: "<<compMove[randomIndex]<<endl<<"You Chose: "<<compMove[usrAns-1]<<endl;

        switch(randomIndex){
            case 0:
                if (usrAns == 1)
                    cout<<"Tie\n";
                else if (usrAns==2){
                    cout<<"You win\n";
                    ++usrScore;
                } else {
                    cout<<"You Lose\n";
                    ++compScore;
                }
            break;
            case 1:
                if (usrAns == 2)
                    cout<<"Tie\n";
                else if (usrAns==3){
                    cout<<"You win\n";
                    ++usrScore;
                } else {
                    cout<<"You Lose\n";
                    ++compScore;
                }
            break;
            case 2:
                if (usrAns == 3)
                    cout<<"Tie\n";
                else if (usrAns==1){
                    cout<<"You win\n";
                    ++usrScore;
                } else {
                    cout<<"You Lose\n";
                    ++compScore;
                }
                break;
            default:
                cout<<"Some error has occoured\nPlease try again use ctrl(^)+C to exit\n";
            break;
        }
        cout<<"Your current score is: "<<usrScore<<endl;
        cout<<"The computer's current score is: "<<compScore<<endl;
        cout<<"Would you like to play again? ";
        cin>>ans;

    }
    cout<<"Your final score is: "<<usrScore<<endl;
    cout<<"The computer's final score is: "<<compScore<<endl;
    if (compScore>usrScore)
        cout<<"The computer wins\n";
    else if (compScore == usrScore)
        cout<<"This is a tie\n";
    else
        cout<<"You win\n";
    return 0;
}