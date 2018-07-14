//
// Created by Alexandre Moreau on 08/07/2018.
//

#include "turingmachine.hpp"

TuringMachine::TuringMachine() = default;

TuringMachine::TuringMachine(std::string word, Grammar &grammar) {
    this->addGrammar(grammar);
    this->start(std::move(word));
}

void TuringMachine::addGrammar(Grammar &grammar) {
    this->grammar = &grammar;
}

int TuringMachine::start(std::string word) {
    this->word = "#" + word + "#";
    this->pos = 1;
    this->currentState = this->grammar->getInitialState();
    do {
        this->displayWord();
        bool findingRule = false;
        for (auto &it : this->grammar->getRulesList()) {
            if ((it.read==this->word.substr(pos,1)) && (it.currentState==this->currentState)) {
                std::cout << "Règle: (" <<
                      it.currentState << "," <<
                      it.read << "," <<
                      it.newState << "," <<
                      it.write << "," <<
                      it.direction << ")" << std::endl;
                this->word.replace(pos,1,it.write);
                (it.direction==LEFT) ? pos-- : pos++;
                this->currentState = it.newState;
                findingRule = true;
                break;
            }
        }
        if (!findingRule) {
            std::cout << "Le mot n'existe pas" << std::endl;
            return -1;
        }
    } while(this->currentState!=this->grammar->getFinalState());
    std::cout << "Le mot est reconnu" << std::endl;
    return 0;
}

void TuringMachine::displayGrammar() {
    this->grammar->listRuleDisplay();
}

void TuringMachine::displayWord() {
    for (int i=0;i<this->pos;i++) { std::cout << " "; }
    std::cout << "v" << std::endl;
    std::cout << this->word << std::endl;
}