
Classe Rectangle pour repr�senter un rectangle sur le plan, comprenant les membres suivants :
    � variables priv�es double x, y, width, height, avec (x,y) les coordonn�es du coin en bas � gauche du rectangle,
width la largeur et height la hauteur ,
    � constructeur par d�faut qui initialise le rectangle avec x=0, y=0, width=0 et height=0,
    � constructeur avec les valeurs des variables x,y, width et height,
    � constructeur de recopie,
    � op�rateurs :
= pour copier un rectangle,
[ ] pour acc�der � x, y, width et height avec l�indice 0,1,2 et 3 respectivement,
+ pour calculer l�union de deux rectangles d�finie comme le plus petit rectangle contenant les deux rectangles,
* pour calculer l�intersection de deux rectangles (un rectangle est consid�r� vide si la largeur ou la hauteur est n�gative),
    � m�thode disp( ) pour afficher les informations du rectangle,
    � m�thode perimeter() pour calculer le p�rim�tre du rectangle,
    � m�thode area() pour calculer l�aire du rectangle,
    � m�thode contains qui renvoie true si rectangle courant contient le rectangle pass� par r�f�rence et false sinon.
