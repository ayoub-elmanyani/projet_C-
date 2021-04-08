
Classe Rectangle pour représenter un rectangle sur le plan, comprenant les membres suivants :
    • variables privées double x, y, width, height, avec (x,y) les coordonnées du coin en bas à gauche du rectangle,
width la largeur et height la hauteur ,
    • constructeur par défaut qui initialise le rectangle avec x=0, y=0, width=0 et height=0,
    • constructeur avec les valeurs des variables x,y, width et height,
    • constructeur de recopie,
    • opérateurs :
= pour copier un rectangle,
[ ] pour accéder à x, y, width et height avec l’indice 0,1,2 et 3 respectivement,
+ pour calculer l’union de deux rectangles définie comme le plus petit rectangle contenant les deux rectangles,
* pour calculer l’intersection de deux rectangles (un rectangle est considéré vide si la largeur ou la hauteur est négative),
    • méthode disp( ) pour afficher les informations du rectangle,
    • méthode perimeter() pour calculer le périmètre du rectangle,
    • méthode area() pour calculer l’aire du rectangle,
    • méthode contains qui renvoie true si rectangle courant contient le rectangle passé par référence et false sinon.
