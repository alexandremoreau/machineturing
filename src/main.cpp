#include "turingmachine/turingmachine.hpp"

int main () {
    Grammar grammar;

    /***** Règles d'essai *****/
    /*
	0 Q0,a => Q0,X,R
	1 Q0,b => Q0,Y,R
	2 Q0,# => Q1,#,L
	3 Q1,X => Q2,X,R
	4 Q1,Y => Q1,Y,L
	5 Q2,Y => Q2,Y,R
	6 Q2,X => Q2,X,R
	7 Q2,# => Q3,#,R
	 Etat final : Q3
	 */
    Grammar g("Grammaire de test");
    grammar.addRule("Q0","a","Q0","X",RIGHT);
    grammar.addRule("Q0","b","Q0","Y",RIGHT);
    grammar.addRule("Q0","#","Q1","#",LEFT);
    grammar.addRule("Q1","X","Q2","X",RIGHT);
    grammar.addRule("Q1","Y","Q1","Y",LEFT);
    grammar.addRule("Q2","Y","Q2","X",RIGHT);
    grammar.addRule("Q2","X","Q2","X",RIGHT);
    grammar.addRule("Q2","#","Q3","#",RIGHT);
    grammar.addFinalState("Q3");

    /***************************/

    TuringMachine turingMachine;
    turingMachine.addGrammar(grammar);
    turingMachine.displayGrammar();

    turingMachine.start("abbaabb");




		/*cin >> lancement;
			std::cout << "Quel mot voulez reconnaitre ?" << endl;
			string mot="";
			cin >> mot;
			cout << "Quel est l'état initial ?" << endl;
			string debut="Q0";
			cin >> debut;
			cout << "Quel est l'état final ?" << endl;
			string fin="Q3";
			std::cin >> fin;*//*
			Program machine("abbaabb#","Q0","Q3");
	std::cout << "Fin du simulateur" << endl;*/
    return 0;
}
