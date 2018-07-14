//
// Created by Alexandre Moreau on 08/07/2018.
//

#include "turingmachine.hpp"

TuringMachine::TuringMachine() {

}

TuringMachine::TuringMachine(std::string word, Grammar &grammar) {
    this->addGrammar(grammar);
    this->start(std::move(word));
}

void TuringMachine::addGrammar(Grammar &grammar) {
    this->grammar = &grammar;
}

int TuringMachine::start(std::string word) {
    // TODO test mot
    unsigned int pos=0;
    this->currentState = this->grammar->getInitialState();
    std:: cout <<this->grammar->getRule("a",this->currentState);

    /*do {*/
       //

   /* } while(this->currentState!=this->grammar->getFinalState());*/
    return 0;
}

void TuringMachine::displayGrammar() {
    this->grammar->listRuleDisplay();
}

