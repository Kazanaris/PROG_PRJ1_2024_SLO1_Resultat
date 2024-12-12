//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 1 - Calculs Segment
// Nom du fichier 		: MesFonctions.h
// Date de cr�ation 	: 21.10.2022
// Date de modification : 12.12.2024
//
// Auteur 				: Henri Mott
//
// Description          : voir la donn�e du cdc 
//
// Remarques			: voir donnee de l'�preuve            
//----------------------------------------------------------------------------------//
#ifndef MES_FONCTIONS_H 
#define MES_FONCTIONS_H

//-- d�claration de d�finition --//
//-- definition --// 
#define LIMITE_MAX	100.0
#define LIMITE_MIN	-100.0


//-- d�claration de prototype --// 

//-> calculer la longeur d'un segment A-B 
float CalculerDistance_A_B(float ptA_x, float ptA_y, float ptB_x, float ptB_y);	// Point 1

//-> calculer le point milieu d'un point orthonorm� 
float CalculerMilieuAxe_X(float ptA_x, float ptB_x);	// Point 2
float CalculerMilieuAxe_Y(float ptA_y, float ptB_y);	// Point 2

//-> calculer la pente du segment A-B  
float CalculerPenteSeg_A_B();	// Point 3

//-> d�termine dans quel quadrant se situe le point orthonorm� 
char DeterminerQuadrant_PointX();


#endif // !MES_FONCTIONS_H 
