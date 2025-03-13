# Projet-S6
## Objectif:

Horloge tournante à persistence rétinienne

Simuler une horloge analogique dynamique
## Planning prévisionnel

### Semaine 1 : Etude et conception

Définir les objectif (taille, résolution, affichage prévu):

- Affichage avec les 3 aiguilles

Choix des composantes (STM32, moteur, alimentation)  
Réaliser schéma électronique et mécanique   
Déterminer la fréquence de rotation optimale

### Semaine 2 : Première prototypage 

Une barrette de douze leds et le code sur le sTM32  
Branchement et alimentation puis …  
Pour faire une test avec l’ancien plaquette/moteur du projet

### Semaine 3 : Achats et fabrication du support

Acheter les composants et matériaux (Moteurs, Leds, Microprocesseur…)  
Concevoir le support du bras rotatif (PCB)  
Monter le moteur et le bras sur une base stable  
Ajouter un contrepoids pour limiter les vibrations

### Semaine 4-5 : Assemblage électronique 

### Semaine 6-7 : Programmation et Tests

### Semaine 8 : Optimisation et finalisation

## Cahier des charges

### Différentes étapes:
1. Dimensionner l’horloge 
2. développement du code en C
3. Realisation du PCB
4. Choix moteur (MCC) + axe de rotation
5. Choix des leds (blanches et rouges) → pas de driver LED
6. Choix du microcontroleur/microprocesseur 

### Matériel
1. Stm32F303K8T6
2. Moteurs https://fr.transmotec.com/product/HD3SFN-6040-CC/
3. Régulateur de tension 
4. Batterie 9V

### Tableau 

| Fonction | Critère | Niveau | Commentaires  | Qui s’en charge principalement |
| :---- | :---- | :---- | :---- | :---- |
| Mouvement le la barre de LED | Fréquence de rotation ωLED | \< 20 ms soit  \>50 Hz |  |  |
|  | Contact de la barre des LED’s au support | Fixe. Aucun angle de roulis ou tangage  |  |  |
|  | Axe de rotation | l’axe x; mouvement plan |  |  |
|  | Fixation de la barre au support  | Liaison cylindre fixé |  |  |
|  | Alimentation de la barre | 3.3V → pile 9V | L'entrée peut supporter jusqu’à 12 V |  |
|  | Codage des LED’s | Langage C valable pour STM32 |  | Julie |
| Moteur | Fixation du moteur au support  |  |  |  |
|  | Transmission ωmoteur à ωLED  |  | Idéalement aucune pertes |  |
|  | Vitesse de rotation | Constante, \>3000 rpm |  |  |
| Donner l’heure  | Synchronisation des mouvements des aiguilles en fonction de l’heure  | À la seconde près  OU si on aime les défis à la ms près | Existe des modules dont le RTC | Laure |
|  | Affiche des aiguilles | 3 aiguilles  |  |  |
| Confort visuel | Fréquence de rotation assez élevée pour ne plus avoir de scintillement  | \>50Hz |  |  |
|  | Intensité des LEDs  | Fixe, indice UGR\<18 | C’est du superflu |  |
| Dimensions  |  | À ajuster en fonction des autres élements | Optimiser l’espace un maximum |  |

## Récapitulatif de la séance 1
1. Dimension de notre horloge (20 cm de diamètre; 3 colonnes de 12 leds en // codée individuellement et de couleur différentes)
2. choix de l'affichage de notre horloge (3 aiguilles (s:10, m:9, h:5) + indice pour se repérer sur le cadran codé sur 1 ou 2 leds sur l'aiguille de heure) #idéalement et si on a le temps 
3. micro controleur STM32Nucleo : Stm32F303K8T6
4. Determination de la fréquence (65 Hz)
5. Recherche d'un moteur MCC adéquat
6. Debut des test , notamment allumer des leds

## Objectif de la séance 2
1. realiser un premier test de frequence
2. essayer de coder une barre de LED entierement allumées et la faire tourner jusqu'à qu'il n'y a plus de scitimment

## Récapitulatif de la séance 2
1. Conception du premier prototype de PCB
2. Retour sur l'idée des trois colonnes de leds. Juste 1 de 11 LEDs => commande séparée de chacune des LEDs
3. Début de l'attribution des pattes du microcontrolleur + début du code
4. Premier essai de faire fonctionner le moteur --> Pas concluant: desaxé et inertie trop importante. 
    
### Pour recevoir l'heure en temps réel il faut un module RTC 


## Objectif de la séance 3
1. Trouver le bon module RTC compatible avec le micocontroleur choisi <-- on a plutôt chercher à comprendre le module RTC
2. Réaliser un premier PCB sur Kicad
3. Finaliser le code d'au moins une LED
4. Realiser un premier test en faisant touner une barre de LEDs/1 LED allumée jusqu'à plus aucun scintillemment avec le moteur

## Récapitulatif de la séance 3
1. Test avec les petits moteurs
2. Changement de STM32F303K8 --> STM32G431KBT6
3. DEbut du schématic de Kicad avec la STM 32 adaptée

## Objectif de la séance 4
1. ...

## Ressources 
https://m.youtube.com/watch?v=QOkp9amAs68


### Contacts

kessal@ensea.fr
