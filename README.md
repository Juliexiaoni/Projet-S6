# Projet-S6
## Objectif:

Horloge tournante à persistence rétinienne

Simuler une horloge analogique dynamique

## Cahier des charges

### Objectif du projet
Réaliser une horloge à persistance rétinienne fonctionnel (dynamique)
Intensité des led fixe. Variation des la barrette en fonction de la position.
#### Différentes étapes:
1. Dimensionner l’horloge 
2. développement du code en C
3. Realisation du PCB
4. Choix moteur (MCC) + axe de rotation
5. Choix des leds (blanches et rouges) → pas de driver LED
6. Choix du microcontroleur/microprocesseur 

#### Matériel
1. Stm32F303K8T6
2. Moteurs https://fr.transmotec.com/product/HD3SFN-6040-CC/
3. Régulateur de tension 
4. Batterie 9V


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


### Contacts

kessal@ensea.fr
