#pragma once

class CVect2D
{
	//Données membre
	private:
		float P1_X;
		float P1_Y;


	//Fonctions membres
	public:
		float ContructeurSansParametre()const;
		//float ContructeurAvecParametre(float P2_X, float P2_Y)const;
		//float ConstructionAvecParametreParDefault(float P3_X= 8.8, float P3_Y = 2.4)const;


	//Constructeur
	class CVect2D();
	//class CVect2D(float P2_X, float P2_Y);
	//class CVect2D(float P1_X= 8.8, float P1_Y=2.4);


};

typedef struct tVect2D {

	//Donnees membres
	float fltX;
	float fltY;

	//Fcts membres
	float getVectEnX();
}tVect2D;


void setVectX(tVect2D *ptrVect, float fltx);
void setVectY(tVect2D *ptrVect, float flty);

float getVectX(tVect2D tVect);
float getVectY(tVect2D tVect);

void addiX(tVect2D * ptreVect, float flxa, float flxb, float flc);
void addiY(tVect2D * ptrVect, float flya, float flyb, float flc);
void sousX(tVect2D * ptrVect, float flxa, float flxb, float flc);
void sousY(tVect2D * ptrVect, float flya, float flyb, float flc);
void multX(tVect2D * ptrVect, float flxa, float flxb, float flc);
void multY(tVect2D * ptrVect, float flya, float flyb, float flc);