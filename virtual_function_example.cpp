#include <iostream>
#include <string>

using namespace std;

class Game {

protected:
    int score;
    string gameName;

public: 
        Game(string game, int sc){
            gameName = game;
            score = sc;
        }

         virtual void display(){
             cout << "Gaurav pagal hai wo abhi uthta hai" << endl;
         }
};

class VideoGame : public Game {

    protected:
        int gameplayTime;

    public:

        VideoGame(string gname , int score , int playTime) : Game (gname, score){
            gameplayTime = playTime;
        }
        void display(){
            cout << "The name of the video game is : " << gameName << endl;
            cout<<"The score in this game is : "<<score<<endl;
            cout << "I have played this game " << gameplayTime << " hour" << endl;
        }
        
};

class OutDoorGame : public Game {

    protected:
        int playTime;

    public:

        OutDoorGame(string gname , int score , int pTime) : Game (gname, score){
            playTime = pTime;
        }
        void display(){
            cout << "The name of the outdoor game is : " << gameName << endl;
            cout<<"The score in this game is : "<<score<<endl;
            cout << "I have played this game " << playTime << " hour" << endl;
        }
};

int main(){



    // for bahar ke games 
    int score = 9;
    string gameName = "Football";
    int playTime = 3;

    OutDoorGame footBall(gameName, score, playTime);
    // footBall.display();

    cout << endl;
    // for andar ke games matlab pc games
    int gameScore = 999999;
    string pcGameName = "The Witcher 3";
    int gamePlayTime = 24;

    VideoGame witcher(pcGameName, gameScore, gamePlayTime);
    // witcher.display();


    // hamne base class ke pointers ko derived class ke objects point kara diye
    // by default display() base ka call hoga 
    // par agar wo display() virtual raha to derived ka hi run hoga
    Game *gamePtr[2];

    gamePtr[0] = &footBall;
    gamePtr[1] = &witcher;

    gamePtr[0]->display();
    cout << endl;
    gamePtr[1]->display();


    return 0;
}