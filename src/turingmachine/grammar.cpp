//
// Created by Alexandre Moreau on 08/07/2018.
//

#include "grammar.hpp"



Grammar::Grammar() {

}

void Grammar::addRule(std::string currentState, std::string read, std::string newState, std::string write, bool direction) {
    Rule rule;
    rule.currentState = std::move(currentState);
    rule.read = std::move(read);
    rule.newState = std::move(newState);
    rule.write = std::move(write);
    rule.direction = direction;
    rulesList.push_back(rule);
}

void Grammar::listRuleDisplay() {
    for (std::vector<Rule>::const_iterator i = rulesList.begin(); i != rulesList.end(); ++i)
        std::cout << i->currentState << ' ';
}

Grammar::~Grammar()
{

}