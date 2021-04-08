Une classe TriMat pour représenter une matrice carrée triangulaire inférieure, comprenant les membres suivants :
    • variables privées int dim qui est la dimension (nombre de lignes) de la matrice et double *E le tableau des éléments de la matrice sur et sous la diagonale,
    • constructeur avec variables d’entrée qui sont la dimension et un tableau des éléments de E,
    • constructeur avec la variable d’entrée qui est la dimension,
    • constructeur de recopie,
    • destructeur,
    • opérateurs :
= pour copier la matrice,
[ ] pour accéder à une ligne de la matrice par son indice,
+ pour l’addition de deux matrices triangulaires inférieures,
* pour la multiplication de deux matrices triangulaires inférieures,
* pour multiplier la matrice courante par un nombre réel x,

    • méthode d’affichage,
    • méthode trace( ) pour calculer la trace de la matrice,
    • méthode diag( ) pour extraire la diagonale de la matrice,
    • méthode det( ) pour calculer le déterminant de la matrice,
    • méthode SolEq(double *x, double *c) pour résoudre le système d’équations linéaires A*x = c, avec A la matrice triangulaire courante (supposée inversible).
