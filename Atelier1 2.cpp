// Atelier1 2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
bool estVoy(char car)
{
	switch (car) {
	case 'a':
	case 'e':
	case 'o':
	case 'u':
	case 'i':
	case 'y':return 1;
	default: return 0;
	}
}
string hashVoy(string& str) {
	for (int i = 0; i < str.size(); i++) {
		if (estVoy(str[i]))
			str[i]= '*';
	}
	return str;
}

int main()
{
	string asi = "il est la vie du boit";
	string asi2 = "je suis la fin du moi;";
	string asi3 = "elles sont a la fois bonnes est l'oppose de mauvais";
	list<string> liste;
	liste.push_back(asi);
	liste.push_back(asi2);
	liste.push_back(asi3);
	auto hash = hashVoy;
	//transform(liste.begin(), liste.end(),liste.begin() ,hash);
	///////////////with lambda expression///////////////////
	transform(liste.begin(), liste.end(), liste.begin(),
		[](string& str) {
		for (int i = 0; i < str.size(); i++) {
			if (estVoy(str[i]))
				str[i] = '*';
			cout << str << endl;
		}
		return str;
		});
	
	///Transform to uppercase
	transform(liste.begin(), liste.end(), liste.begin(),
		[](string& str) {
			for (int i = 0; i < str.size(); i++) {
				str[i] = toupper(str[i]);
			}
			return str;
		});
	for (string s : liste) {
		cout << s << endl;
	}
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
