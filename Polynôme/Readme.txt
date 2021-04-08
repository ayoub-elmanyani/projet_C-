une  classe  Polynome  pour  repr�senter  un  polyn�me  r�el  a0 + a1x + ... + anxn.

Polyn�me comprend les membres suivants :
    (1) Variable priv�e int order qui est l�ordre du polyn�me, variable priv�e double *A qui est le tableau (de longueur order + 1) des coefficients du polyn�me : A[i] sera le coefficient ai.
    (2) Constructeur par d�faut qui cr�e un polyn�me d�ordre 0 avec a0 = 1.
    (3) Constructeur avec variable d�entr�e int  order.
    (4) Constructeur avec variables d�entr�e  int  order et double  *A.
    (5) Constructeur de recopie.
    (6) Destructeur.
    (7) Op�rateur = pour copier un polyn�me.
    (8) Op�rateur [ ] pour acc�der au coefficient ai  par l�indice i.
    (9) Op�rateur + pour calculer la somme de deux polyn�mes.
    (10) Op�rateur - pour calculer la diff�rence de deux polyn�mes.
    (11) Op�rateur * pour calculer le produit de deux polyn�mes.
    (12) Op�rateur * pour calculer le produit d�un polyn�me avec un nombre r�el c.
    (13) Op�rateur += pour r�aliser p  =  p  +  p1 par p  +=  p1.
    (14) Op�rateur *= pour r�aliser p  =  p  *  p1 par p  *=  p1.
    (15) M�thode getOrder() pour conna�tre l�ordre du polyn�me.
    (16) M�thode value(double  x) pour calculer la valeur du polyn�me en  x.
    (17) M�thode deriv() pour calculer la d�riv�e (qui est aussi un polyn�me) d�un polyn�me.
    (18) M�thode disp() pour afficher le polyn�me.
