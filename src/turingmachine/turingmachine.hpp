//
// Created by Alexandre Moreau on 08/07/2018.
//

#ifndef MACHINETURING_TURINGMACHINE_HPP
#define MACHINETURING_TURINGMACHINE_HPP

#include "grammar.hpp"

class TuringMachine {
public:
    TuringMachine();
    TuringMachine(std::string word, Grammar &grammar);
    void displayGrammar();
    void addGrammar(Grammar &grammar);
    int start(std::string word);
private:
    unsigned int pos;
    std::string word;
    Grammar *grammar;
    state currentState;
    void displayWord();
};


#endif //MACHINETURING_TURINGMACHINE_HPP
