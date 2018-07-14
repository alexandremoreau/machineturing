//
// Created by Alexandre Moreau on 08/07/2018.
//

#include "grammar.hpp"
#include <utility>

Grammar::Grammar() {
    this->name = "undefined";
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
    this->rulesList.push_back(rule);
}

void Grammar::addInitialState(state initialState) {
    this->initialState = std::move(initialState);
}

void Grammar::addFinalState(state finalState) {
    this->finalState = std::move(finalState);
}

void Grammar::listRuleDisplay() {
    std::cout << this->name << std::endl;
    for (std::vector<Rule>::const_iterator i = this->rulesList.begin(); i != this->rulesList.end(); ++i) {
        std::string directionDisplay = (i->direction==0) ? "LEFT" : "RIGHT";
        std::cout << "Etat initial: " << i->currentState << " / ";
        std::cout << "Caractère lu: " << i->read << " / ";
        std::cout << "Nouvel état: " << i->newState << " / ";
        std::cout << "Caractère écrit: " << i->write << " / ";
        std::cout << "direction: " <<  directionDisplay << std::endl;
    }
    std::cout << std::endl;
}

state Grammar::getInitialState() {
    return this->initialState;
}

state Grammar::getFinalState() {
    return this->finalState;
}

int Grammar::getRule(std::string c, const state &currentState) {
    int i=0;
    for (auto &it : this->rulesList) {
        if ((it.read==c) && (it.currentState==currentState)) {
            
        }
        i++;
    }
    return 0;
}



Grammar::~Grammar()
{

}
