const int AV = 0;         //Déclaration des constantes 
const int AO = 1;         //Indication :
const int AR = 2;         //Le premier caractère désigne la ZONE [A/B/C/D]
const int DV = 3;         //Le second caractère désigne la couleur de la LED [V/O/R] pour [Vert/Orange/Rouge]
const int DO = 4;
const int DR = 5;
const int BV = 6;
const int BO = 7;
const int BR = 8;
const int CV = 9;
const int CO = 10;
const int CR = 11;


const int A1V = 52;         //Indication : 
const int D1V = 22;         //Le premier caractère désigne la ZONE [A/B/C/D]
const int A1R = 53;         //Le second caractère désigne l'orientation du passage piéton [1/2] pour [Vertical/Horizontal]
const int D1R = 23;         //Le troisième caractère désigne la couleur de la LED [V/R] pour [Vert/Rouge]

const int B1V = 48;
const int C1V = 26;
const int B1R = 49;
const int C1R = 27;


const int A2V = 50;         //Même principe
const int D2V = 24;
const int A2R = 51;
const int D2R = 25;

const int B2V = 46;
const int C2V = 28;
const int B2R = 47;
const int C2R = 29;



void setup() {

pinMode(AV, OUTPUT);            //Inintialisation des Pins (0 à 11) comme des Sorties 
pinMode(AO, OUTPUT);            //pour les alimenter de 5V afin d'allumer/éteindre les LED
pinMode(AR, OUTPUT);
pinMode(DV, OUTPUT);
pinMode(DO, OUTPUT);
pinMode(DR, OUTPUT);
pinMode(BV, OUTPUT);
pinMode(BO, OUTPUT);
pinMode(BR, OUTPUT);
pinMode(CV, OUTPUT);
pinMode(CO, OUTPUT);
pinMode(CR, OUTPUT);

pinMode(A1V, OUTPUT);           //Initialisation des pins feux piétons comme des Sorties
pinMode(D1V, OUTPUT);           //pour les alimenter de 5V afin d'allumer/éteindre les LED
pinMode(A1R, OUTPUT);
pinMode(D1R, OUTPUT);

pinMode(B1V, OUTPUT);
pinMode(C1V, OUTPUT);
pinMode(B1R, OUTPUT);
pinMode(C1R, OUTPUT);

pinMode(A2V, OUTPUT);
pinMode(D2V, OUTPUT);
pinMode(A2R, OUTPUT);
pinMode(D2R, OUTPUT);

pinMode(B2V, OUTPUT);
pinMode(C2V, OUTPUT);
pinMode(B2R, OUTPUT);
pinMode(C2R, OUTPUT);



}

void loop() {                   //Boucle infini principale

digitalWrite(AV, HIGH);         //Feux vert ZONE A et C allumé
digitalWrite(CV, HIGH);
digitalWrite(AR, LOW);          //Feux rouge ZONE A et C éteint
digitalWrite(CR, LOW);
digitalWrite(BV, LOW);          //Feux vert ZONE B et D éteint
digitalWrite(DV, LOW);
digitalWrite(BR, HIGH);         //Feux rouge ZONE B et D allumé
digitalWrite(DR, HIGH);
digitalWrite(BO, LOW);          //Feux orange ZONE A B C et D éteint
digitalWrite(DO, LOW);
digitalWrite(AO, LOW);
digitalWrite(CO, LOW);
digitalWrite(A1V, HIGH);        //Feux piétons vert verticaux ZONE A B C et D allumé
digitalWrite(D1V, HIGH);
digitalWrite(B1V, HIGH);
digitalWrite(C1V, HIGH);
digitalWrite(A1R, LOW);         //Feux piétons rouge verticaux ZONE A B C et D éteint
digitalWrite(D1R, LOW);
digitalWrite(B1R, LOW);
digitalWrite(C1R, LOW);
digitalWrite(A2V, LOW);         //Feux piétons vert horizontaux ZONE A B C et D éteint      
digitalWrite(D2V, LOW);
digitalWrite(B2V, LOW);
digitalWrite(C2V, LOW);
digitalWrite(A2R, HIGH);        //Feux piétons rouge horizontaux ZONE A B C et D allumé    
digitalWrite(D2R, HIGH);
digitalWrite(B2R, HIGH);
digitalWrite(C2R, HIGH);
delay(8000);                    //Durée : 8 secondes [ÉTAPE POUR LE FEUX VERT VERTICAL]


digitalWrite(AV, LOW);          //Feux vert ZONE A et C éteint
digitalWrite(CV, LOW);
digitalWrite(AR, LOW);          //Feux rouge ZONE A et C éteint
digitalWrite(CR, LOW);
digitalWrite(BV, LOW);          //Feux vert ZONE B et D éteint
digitalWrite(DV, LOW);
digitalWrite(BR, HIGH);         //Feux rouge ZONE B et D allumé
digitalWrite(DR, HIGH);
digitalWrite(BO, LOW);          //Feux orange ZONE B et D éteint
digitalWrite(DO, LOW);
digitalWrite(AO, HIGH);         //Feux orange ZONE A et C allumé
digitalWrite(CO, HIGH);
digitalWrite(A1V, LOW);         //Feux piétons vert verticaux ZONE A B C et D éteint
digitalWrite(D1V, LOW);
digitalWrite(B1V, LOW);
digitalWrite(C1V, LOW);
digitalWrite(A1R, HIGH);        //Feux piétons rouge verticaux ZONE A B C et D allumé
digitalWrite(D1R, HIGH);
digitalWrite(B1R, HIGH);
digitalWrite(C1R, HIGH);
digitalWrite(A2V, LOW);         //Feux piétons vert horizontaux ZONE A B C et D éteint
digitalWrite(D2V, LOW); 
digitalWrite(B2V, LOW); 
digitalWrite(C2V, LOW); 
digitalWrite(A2R, HIGH);        //Feux piétons rouge horizontaux ZONE A B C et D allumé
digitalWrite(D2R, HIGH);
digitalWrite(B2R, HIGH);
digitalWrite(C2R, HIGH);
delay(2000);                    //Durée : 2 secondes [ÉTAPE POUR LE FEU ORANGE VERTICAL]


digitalWrite(AV, LOW);          //Feux vert ZONE A et C éteint
digitalWrite(CV, LOW); 
digitalWrite(AR, HIGH);         //Feux rouge ZONE A et C allumé
digitalWrite(CR, HIGH);
digitalWrite(BV, LOW);          //Feux vert ZONE B et D éteint
digitalWrite(DV, LOW); 
digitalWrite(BR, HIGH);         //Feux rouge ZONE B et D allumé
digitalWrite(DR, HIGH);
digitalWrite(BO, LOW);          //Feux orange ZONE A B C et D éteint
digitalWrite(DO, LOW); 
digitalWrite(AO, LOW); 
digitalWrite(CO, LOW); 
digitalWrite(A1V, LOW);         //Feux piétons vert verticaux ZONE A B C et D éteint
digitalWrite(D1V, LOW);
digitalWrite(B1V, LOW);
digitalWrite(C1V, LOW);
digitalWrite(A1R, HIGH);        //Feux piétons rouge verticaux ZONE A B C et D allumé
digitalWrite(D1R, HIGH);
digitalWrite(B1R, HIGH); 
digitalWrite(C1R, HIGH); 
digitalWrite(A2V, LOW);         //Feux piétons vert horizontaux ZONE A B C et D éteint
digitalWrite(D2V, LOW); 
digitalWrite(B2V, LOW); 
digitalWrite(C2V, LOW); 
digitalWrite(A2R, HIGH);        //Feux piétons rouge horizontaux ZONE A B C et D allumé
digitalWrite(D2R, HIGH);
digitalWrite(B2R, HIGH);
digitalWrite(C2R, HIGH);
delay(2000);                    //Durée : 2 secondes [ÉTAPE POUR LE FEU ROUGE ZONE A B C et D POUR ÉVITER LES ACCIDENTS] 

  
digitalWrite(AV, LOW);          //Feux vert ZONE A et C éteint
digitalWrite(CV, LOW);
digitalWrite(AR, HIGH);         //Feux rouge ZONE A et C allumé
digitalWrite(CR, HIGH);
digitalWrite(BV, HIGH);         //Feux vert ZONE B et D allumé
digitalWrite(DV, HIGH);
digitalWrite(BR, LOW);          //Feux rouge ZONE B et D éteint
digitalWrite(DR, LOW); 
digitalWrite(BO, LOW);          //Feux orange ZONE A B C et D éteint
digitalWrite(DO, LOW); 
digitalWrite(AO, LOW); 
digitalWrite(CO, LOW); 
digitalWrite(A1V, LOW);         //Feux piétons vert verticaux ZONE A B C et D éteint
digitalWrite(D1V, LOW);
digitalWrite(B1V, LOW);
digitalWrite(C1V, LOW);
digitalWrite(A1R, HIGH);        //Feux piétons rouge verticaux ZONE A B C et D allumé
digitalWrite(D1R, HIGH);
digitalWrite(B1R, HIGH);
digitalWrite(C1R, HIGH);
digitalWrite(A2V, HIGH);        //Feux piétons vert horizontaux ZONE A B C et D allumé
digitalWrite(D2V, HIGH);
digitalWrite(B2V, HIGH);
digitalWrite(C2V, HIGH);
digitalWrite(A2R, LOW);         //Feux piétons rouge horizontaux ZONE A B C et D éteint
digitalWrite(D2R, LOW);
digitalWrite(B2R, LOW);
digitalWrite(C2R, LOW);
delay(8000);                    //Durée : 8 secondes [ÉTAPE POUR LE FEU VERT HORIZONTAL]


digitalWrite(AV, LOW);          //Feux vert ZONE A et C éteint
digitalWrite(CV, LOW);
digitalWrite(AR, HIGH);         //Feux rouge ZONE A et C allumé
digitalWrite(CR, HIGH); 
digitalWrite(BV, LOW);          //Feux vert ZONE B et D éteint
digitalWrite(DV, LOW); 
digitalWrite(BR, LOW);          //Feux rouge ZONE B et D éteint
digitalWrite(DR, LOW); 
digitalWrite(BO, HIGH);         //Feux orange ZONE B et D allumé
digitalWrite(DO, HIGH);
digitalWrite(AO, LOW);          //Feux orange ZONE A et C éteint
digitalWrite(CO, LOW); 
digitalWrite(A1V, LOW);         //Feux piétons vert verticaux ZONE A B C et D éteint
digitalWrite(D1V, LOW);
digitalWrite(B1V, LOW);
digitalWrite(C1V, LOW);
digitalWrite(A1R, HIGH);        //Feux piétons rouge verticaux ZONE A B C et D allumé
digitalWrite(D1R, HIGH);
digitalWrite(B1R, HIGH);
digitalWrite(C1R, HIGH);
digitalWrite(A2V, LOW);         //Feux piétons vert horizontaux ZONE A B C et D éteint
digitalWrite(D2V, LOW); 
digitalWrite(B2V, LOW); 
digitalWrite(C2V, LOW); 
digitalWrite(A2R, HIGH);        //Feux piétons rouge horizontaux ZONE A B C et D allumé
digitalWrite(D2R, HIGH);
digitalWrite(B2R, HIGH);
digitalWrite(C2R, HIGH);
delay(2000);                    //Durée : 2 secondes [ÉTAPE POUR LE FEU ORANGE HORIZONTAL]


digitalWrite(AV, LOW);          //Feux vert ZONE A et C éteint
digitalWrite(CV, LOW); 
digitalWrite(AR, HIGH);         //Feux rouge ZONE A et C allumé
digitalWrite(CR, HIGH);
digitalWrite(BV, LOW);          //Feux vert ZONE B et D éteint
digitalWrite(DV, LOW); 
digitalWrite(BR, HIGH);         //Feux rouge ZONE B et D allumé
digitalWrite(DR, HIGH);
digitalWrite(BO, LOW);          //Feux orange ZONE A B C et D éteint
digitalWrite(DO, LOW); 
digitalWrite(AO, LOW); 
digitalWrite(CO, LOW); 
digitalWrite(A1V, LOW);         //Feux piétons vert verticaux ZONE A B C et D éteint
digitalWrite(D1V, LOW);
digitalWrite(B1V, LOW);
digitalWrite(C1V, LOW);
digitalWrite(A1R, HIGH);        //Feux piétons rouge verticaux ZONE A B C et D allumé
digitalWrite(D1R, HIGH);
digitalWrite(B1R, HIGH); 
digitalWrite(C1R, HIGH); 
digitalWrite(A2V, LOW);         //Feux piétons vert horizontaux ZONE A B C et D éteint
digitalWrite(D2V, LOW); 
digitalWrite(B2V, LOW); 
digitalWrite(C2V, LOW); 
digitalWrite(A2R, HIGH);        //Feux piétons rouge horizontaux ZONE A B C et D allumé
digitalWrite(D2R, HIGH);
digitalWrite(B2R, HIGH);
digitalWrite(C2R, HIGH);
delay(2000);                    //Durée : 2 secondes [ÉTAPE POUR LE FEU ROUGE ZONE A B C et D POUR ÉVITER LES ACCIDENTS] 

}

