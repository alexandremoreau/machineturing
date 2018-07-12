#include "turingmachine/turingmachine.hpp"

//std::list<unsigned> regle(const std::size_t & max){
	//std::list<unsigned> r;
	//for(std::size_t i=0;i<=max;++i) l.push_back(i);
	//r.push_back("Q0", "a", "Q0", "X", "Right");
	//return r;
//}


int main () {

    Grammar g;
    g.addRule("Q0","a","Q1","X",true);
    g.addRule("Q1","a","Q1","Y",true);
    TuringMachine turingMachine;
    turingMachine.addGrammar(g);
    turingMachine.displayGrammar();

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
	/*string lancement="N";
	std::cout << "Bonjour, bienvenue sur le simulateur de machine de Turing" << endl;
		*//*cout << "Voulez lancer une simulation ? (Y/N)" << endl;
		cin >> lancement;
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
