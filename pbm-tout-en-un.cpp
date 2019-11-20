#include <stdexcept>
/** @file
 * Lecture et ecriture d'images binaires au format PBM
 **/
#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>
using namespace std;
/** Structure de donnée pour représenter une image binaire **/
typedef vector<vector<int> > ImageNB;

/** Construire une image binaire depuis un fichier PBM
 * @param source le nom d'un fichier PBM
 * @return une image binaire (0/1)
 **/
ImageNB lirePBM(string source) {
    // Remplacer la ligne suivante par le code adéquat
    throw runtime_error("Fonction lirePBM non implanté ligne 19");
}


/** Ecrit une image binaire dans un fichier PBM
 * @param img une image binaire (0/1)
 * @param cible le nom d'un fichier PBM
 **/
void ecrirePBM(ImageNB img, string cible) {
    // Remplacer la ligne suivante par le code adéquat
    throw runtime_error("Fonction ecrirePBM non implanté ligne 29");
}


/** Affiche une image binaire PBM à l'écran avec ' ' pour 0 et '@' pour 1
 * @param img une image binaire (0/1)
 **/
void affichePBM(ImageNB img) {
    // Remplacer la ligne suivante par le code adéquat
    throw runtime_error("Fonction affichePBM non implanté ligne 38");
}


/** Echange le noir et le blanc dans une image PBM
 * @param img une image binaire (0/1)
 * @return l'image où le blanc et le noir ont été inversés
 **/
ImageNB inversePBM(ImageNB img) {
    // Remplacer la ligne suivante par le code adéquat
    throw runtime_error("Fonction inversePBM non implanté ligne 48");
}

void testLirePBM(){
    cout << "Vérifier que les images obtenues dans 'pbm/' sont semblables à celles fournies dans 'pbm/correction/'" << endl;
    ecrirePBM(lirePBM("images/smiley.pbm"),  "pbm/smiley.pbm");
    ecrirePBM(lirePBM("images/cercle.pbm"),  "pbm/cercle.pbm");
    ecrirePBM(lirePBM("images/code.pbm"), "pbm/code.pbm");
    ecrirePBM(lirePBM("images/damier.pbm"), "pbm/damier.pbm");
}

int main(){
    testLirePBM();
    // Remplacer la ligne suivante par le code adéquat
    throw runtime_error("code non implanté ligne 62");
}

