#ifndef Define_h
#define Define_h

// Mémoire EEprom.
#define MEM_VOLUME  0 
#define MEM_SENS    1
#define MEM_FALL    2

// Sensibilité - valeurs.
#define MAX_SENS    40   // Seuil maxi déclenchement en monté
#define MIN_SENS    10   // Seuil mini déclenchement en monté
#define MIN_FALL    -30  // Seuil déclenchement en descente

// Volume - valeurs.
#define MAX_VOLUME  20
#define MIN_VOLUME  0

// Constantes pour la fonction "check" - valeurs.
#define DELAY_TRUE 100    // Durée d'activation du bip et led "check".
#define FREQ_TRUE 1500    // Fréquence pour le son du bip "check".
#define DELAY_FALSE 500
#define FREQ_FALSE 800

// Constantes pour la fonction "vario" - valeurs.
#define SOUND_RISE 600  // Bip de monté.
#define SOUND_FALL 400  // Bip de descente. 

// Constantes pour la fonction "switchBouton" - valeurs.
# define STEP_SENS  10  //augmentation par pas de x...
# define STEP_VOL   4

// Buzzer - pins.
#define BUZZER    10

// Boutons - pins.
#define SELECT    0
#define UP        1
#define DOWN      2

// Leds - pins.
#define LED       3
#define LED_ERROR 13


// MCP4017 - adresse.
#define MCP4017 0x2E



#endif
