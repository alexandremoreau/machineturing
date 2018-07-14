//
// Created by Alexandre Moreau on 08/07/2018.
//

#ifndef MACHINETURING_RULES_HPP
#define MACHINETURING_RULES_HPP

#include <iostream>
#include <utility>
#include <vector>
enum direction {LEFT = true, RIGHT = false};
using state = std::string;

class Grammar {
public:
    Grammar();
    Grammar(std::string name);
    ~Grammar();
    void addRule(state currentState, std::string read, state newState, std::string write, direction direction);
    void addFinalState(state finalState);
    void listRuleDisplay();
private:

   struct Rule {
        state currentState;         // état de la machine lors de la lecture du caractère

        std::string read;           // caractère lu sur la bande

        state newState;             // état de la machine après l'écriture du caractère

        std::string write;          // caractère écrit sur la bande

        direction direction;        // direction du déplacement
    };
    std::vector<Rule> rulesList;
    std::string name;
    state finalState;
};

#endif //MACHINETURING_RULES_HPP

