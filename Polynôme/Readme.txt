une  classe  Polynome  pour  représenter  un  polynôme  réel  a0 + a1x + ... + anxn.

Polynôme comprend les membres suivants :
    (1) Variable privée int order qui est l’ordre du polynôme, variable privée double *A qui est le tableau (de longueur order + 1) des coefficients du polynôme : A[i] sera le coefficient ai.
    (2) Constructeur par défaut qui crée un polynôme d’ordre 0 avec a0 = 1.
    (3) Constructeur avec variable d’entrée int  order.
    (4) Constructeur avec variables d’entrée  int  order et double  *A.
    (5) Constructeur de recopie.
    (6) Destructeur.
    (7) Opérateur = pour copier un polynôme.
    (8) Opérateur [ ] pour accéder au coefficient ai  par l’indice i.
    (9) Opérateur + pour calculer la somme de deux polynômes.
    (10) Opérateur - pour calculer la différence de deux polynômes.
    (11) Opérateur * pour calculer le produit de deux polynômes.
    (12) Opérateur * pour calculer le produit d’un polynôme avec un nombre réel c.
    (13) Opérateur += pour réaliser p  =  p  +  p1 par p  +=  p1.
    (14) Opérateur *= pour réaliser p  =  p  *  p1 par p  *=  p1.
    (15) Méthode getOrder() pour connaître l’ordre du polynôme.
    (16) Méthode value(double  x) pour calculer la valeur du polynôme en  x.
    (17) Méthode deriv() pour calculer la dérivée (qui est aussi un polynôme) d’un polynôme.
    (18) Méthode disp() pour afficher le polynôme.
