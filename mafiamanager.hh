#ifndef MafiaM
#define MafiaM

#include <string>
#include <iostream>



enum roles { Joker, Villager, Mafia, Silencer, GodFather, Doctor, Detective, BulletProof, NoRole};
const std::string CreateGameCommand = "create_game";
const std::string AssignRoleCommand = "assign_role";
const std::string StartGameCommand = "start_game";


class MafiaManager
{
    public:
        MafiaManager();
        void handeInputs();
    private:

        //methods
        void detectCommand(std::string);
        void createGame();
        void assignRole();
        void startGame();


        //variables
        bool gameStart; 


};



#endif