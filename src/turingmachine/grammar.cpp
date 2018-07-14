//
// Created by Alexandre Moreau on 08/07/2018.
//

#include "grammar.hpp"
#include <utility>


Grammar::Grammar() {

}

Grammar::Grammar(std::string name) {
    this->name = std::move(name);
}


void Grammar::addRule(state currentState, std::string read, state newState, std::string write, direction direction) {
    Rule rule;
    rule.currentState = std::move(currentState);
    rule.read = std::move(read);
    rule.newState = std::move(newState);
    rule.write = std::move(write);
    rule.direction = direction;
    rulesList.push_back(rule);
}

void Grammar::addFinalState(state finalState) {
    this->finalState = finalState;
}

void Grammar::listRuleDisplay() {
    std::cout << "Règles" << std::endl;
    for (std::vector<Rule>::const_iterator i = rulesList.begin(); i != rulesList.end(); ++i) {
        std::cout << "Etat initial: " << i->currentState << " / ";
        std::cout << "Caractère lu: " << i->read << " / ";
        std::cout << "Nouvel état: " << i->newState << " / ";
        std::cout << "Caractère écrit: " << i->write << " / ";
        std::cout << "direction: " << i->direction << std::endl;
    }

}

Grammar::~Grammar()
{

}