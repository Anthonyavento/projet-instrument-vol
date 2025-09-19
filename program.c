#include <stdio.h>

int main()
{
int vitesse = 200;
int altitude = 1000;
int horizon = 0;
int directionnel = 54;

 printf("| SPD |                             LNAV                              | A /THR |\n");
 printf("────────────────────────────────────────────────────────────────────────────────\n");
 printf("                                      0                                         \n");
 printf("                            10        .        10                                \n");
 printf("                             .       ───        .                               \n");
 printf("| %3d |                20          ───────          20                |  %4d  |\n" ,vitesse + 60, altitude + 1500 );
 printf("|     |                 .            ───            .                 |        |\n");
 printf("| %3d |                     %2d  ───────────  %2d                       |  %4d  |\n" ,vitesse + 40, horizon + 10, horizon + 10, altitude + 1000 );
 printf("|     |                             ──|──                             |        |\n");
 printf("| %3d |                            ───|───                            |  %4d  |\n" ,vitesse + 20, altitude + 500 );
 printf("|=====|                             ──|──                             |========|\n");
 printf("| %3d | ────       ───────| ──────────|────────── |───────       ──── |  %4d  |\n" ,vitesse, altitude );
 printf("|=====|                   |         ──|──         |                   |========|\n");
 printf("| %3d |                            ───|───                            |  %4d  |\n" ,vitesse - 20, altitude + 500 );
 printf("|     |                             ──|──                             |        |\n");
 printf("| %3d |                     %2d  ───────────  %2d                     |  %4d  |\n" ,vitesse - 40, horizon - 10, horizon - 10, altitude + 1000);
 printf("|     |                          ≡─────────≡                          |        |\n");
 printf("| %3d |                     %2d  ───────────  %2d                     |  %4d  |\n" ,vitesse - 60, horizon - 20, horizon - 20, altitude + 1500 );
 printf("                     ____________________________________                       \n");
 printf("                    |     |     |     |     |     |     |                      \n");
 printf("                    |    %3d   %3d   %3d   %3d   %3d    |                      \n" ,directionnel - 2, directionnel - 1, directionnel, directionnel + 1, directionnel + 2);
 return 0;
 }