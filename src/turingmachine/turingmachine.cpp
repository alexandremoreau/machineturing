//
// Created by Alexandre Moreau on 08/07/2018.
//

#include "turingmachine.hpp"
#include <utility>

TuringMachine::TuringMachine() {

}

TuringMachine::TuringMachine(std::string word, Grammar &grammar) {
    this->addGrammar(grammar);
    this->start(std::move(word));
}

void TuringMachine::addGrammar(Grammar &grammar) {
    this->grammar = &grammar;
}

void TuringMachine::start(std::string word) {
    std::cout << word;
}

void TuringMachine::displayGrammar() {
    this->grammar->listRuleDisplay();
}

