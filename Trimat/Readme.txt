Une classe TriMat pour repr�senter une matrice carr�e triangulaire inf�rieure, comprenant les membres suivants :
    � variables priv�es int dim qui est la dimension (nombre de lignes) de la matrice et double *E le tableau des �l�ments de la matrice sur et sous la diagonale,
    � constructeur avec variables d�entr�e qui sont la dimension et un tableau des �l�ments de E,
    � constructeur avec la variable d�entr�e qui est la dimension,
    � constructeur de recopie,
    � destructeur,
    � op�rateurs :
= pour copier la matrice,
[ ] pour acc�der � une ligne de la matrice par son indice,
+ pour l�addition de deux matrices triangulaires inf�rieures,
* pour la multiplication de deux matrices triangulaires inf�rieures,
* pour multiplier la matrice courante par un nombre r�el x,

    � m�thode d�affichage,
    � m�thode trace( ) pour calculer la trace de la matrice,
    � m�thode diag( ) pour extraire la diagonale de la matrice,
    � m�thode det( ) pour calculer le d�terminant de la matrice,
    � m�thode SolEq(double *x, double *c) pour r�soudre le syst�me d��quations lin�aires A*x = c, avec A la matrice triangulaire courante (suppos�e inversible).
