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
    void start(std::string word);
private:
    Grammar *grammar;
};


#endif //MACHINETURING_TURINGMACHINE_HPP
