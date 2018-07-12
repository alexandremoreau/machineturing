//
// Created by Alexandre Moreau on 08/07/2018.
//

#include "turingmachine.hpp"


TuringMachine::TuringMachine() {

}

TuringMachine::TuringMachine(std::string word, Grammar &grammar) {
    this->addGrammar(grammar);
    this->addWord(word);
}

void TuringMachine::addGrammar(Grammar &grammar) {
    this->grammar = &grammar;
}

void TuringMachine::displayGrammar() {
    this->grammar->listRuleDisplay();
}

void TuringMachine::addWord(std::string word) {
    this->word = word;
}

