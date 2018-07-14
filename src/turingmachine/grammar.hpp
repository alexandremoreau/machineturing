//
// Created by Alexandre Moreau on 08/07/2018.
//

#ifndef MACHINETURING_RULES_HPP
#define MACHINETURING_RULES_HPP

#include <iostream>
#include <utility>
#include <vector>
#include "vector"

enum direction {LEFT = true, RIGHT = false};
using state = std::string;

struct Rule {

    state currentState;         // état de la machine lors de la lecture du caractère

    std::string read;           // caractère lu sur la bande

    state newState;             // état de la machine après l'écriture du caractère

    std::string write;          // caractère écrit sur la bande

    direction direction;        // direction du déplacement
};


class Grammar {
public:
    Grammar();

    explicit Grammar(std::string name);

    void addRule(state currentState, std::string read, state newState, std::string write, direction direction);
    void addInitialState(state initialState);
    void addFinalState(state finalState);
    void listRuleDisplay();

    state getInitialState();
    state getFinalState();
    std::vector<Rule> getRulesList();

private:
    std::vector<Rule> rulesList;
    std::string name;
    state initialState;
    state finalState;
};

#endif //MACHINETURING_RULES_HPP

