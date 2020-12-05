#include "mafiamanager.hh"



MafiaManager::MafiaManager()
{
    gameStart = false;
}

void MafiaManager::handeInputs()
{
    std::string command;
    while(std::cin>>command)
    {
        detectCommand(command);
    }
}

void MafiaManager::detectCommand(std::string command)
{
    if (command == CreateGameCommand) createGame();
    if (command == AssignRoleCommand) assignRole();
    if (command == StartGameCommand) startGame();  
}

void MafiaManager::createGame()
{

}

void MafiaManager::assignRole()
{

}

void MafiaManager::startGame()
{

}
