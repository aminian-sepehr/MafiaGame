#ifndef Player_HH
#define Player_HH

#include <string>
#include <vector>

class Player
{
    public:
        Player();
        enum Role {JOKER, VILLAGER, DETECTIVE, DOCTOR, BULLETPROOF, MAFIA, GODFATHER, SILENCER};
        virtual void reset();
        void setName(std::string);
        virtual Role getRole() = 0;
        std::string getName();
        bool isSilenced();
        bool isInDanger();
        bool isDead();
        void increaseVoteCount();
        int getVote();
        void die();
        void setInDanger();
        void healed();
        void silence();
        static void clearPlayersVotes(std::vector <Player*>&);
        
    protected:
        std::string name;
        bool silenced;
        bool dead;
        int voteCount;
        bool inDanger;


};


#endif