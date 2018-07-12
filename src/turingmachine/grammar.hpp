//
// Created by Alexandre Moreau on 08/07/2018.
//

#ifndef MACHINETURING_RULES_HPP
#define MACHINETURING_RULES_HPP

#include <iostream>
#include <utility>
#include <vector>

class Grammar {
public:
    Grammar();
    ~Grammar();
    void addRule(std::string currentState, std::string read, std::string newState, std::string write, bool direction);
    void listRuleDisplay();
private:
   struct Rule {
        std::string currentState;    // état de la machine lors de la lecture du caractère

        std::string read;            // caractère lu sur la bande

        std::string newState;        // état de la machine après l'écriture du caractère

        std::string write;           // caractère écrit sur la bande

        bool direction;             // direction du déplacement
    };
    std::vector<Rule> rulesList;
    std::string name;
};

#endif //MACHINETURING_RULES_HPP

