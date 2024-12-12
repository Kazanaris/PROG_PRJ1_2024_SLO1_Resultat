//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 1 - Calculs Segment
// Nom du fichier 		: MesFonctions.h
// Date de cr�ation 	: 21.10.2022
// Date de modification : 10.12.2024
//
// Auteur 				: Philou (Ph. Bovey)
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
short CalculerDistance_A_B(short pointA_x, short pointA_y, short pointB_x, short pointB_y);

//-> calculer le point milieu d'un point orthonorm� 
short CalculerMilieuAxe_X(short pointA_z, short pointB_z);

//-> calculer la pente du segment A-B  
short CalculerPenteSeg_A_B(short pointA_x, short pointA_y, short pointB_x, short pointB_y);

//-> d�termine dans quel quadrant se situe le point orthonorm� 
short DeterminerQuadrant_PointX(short pointX_x, short pointX_y);


#endif // !MES_FONCTIONS_H 
