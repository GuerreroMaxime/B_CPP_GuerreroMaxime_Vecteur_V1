#include "CVect2D.h"

float CVect2D::ContructeurSansParametre() const
{
	return P1_X;
}

;

/*float CVect2D::ContructeurAvecParametre(float P2_X, float P2_Y) const
{
	P2_X = 10;
	P2_Y = 30;
};

float CVect2D::ConstructionAvecParametreParDefault(float P3_X, float P3_Y) const
{
	this->P1_X P3_X;
	this->P1_Y P3_Y;
};*/

void setVectX(tVect2D * ptrVect, float fltx)
{
	ptrVect->fltX = fltx;
}

void setVectY(tVect2D * ptrVect, float flty)
{
	ptrVect->fltY = flty;
}

float getVectX(tVect2D tVect)
{
	return tVect.fltX;
}

float getVectY(tVect2D tVect)
{
	return tVect.fltY;
}

void addiX(tVect2D * ptrVect, float flxa, float flxb, float flc)
{
	flc = flxa + flxb;
	ptrVect->fltX = flc;
}

void addiY(tVect2D * ptrVect, float flya, float flyb, float flc)
{
	flc = flya + flyb;
	ptrVect->fltY = flc;
}

void sousX(tVect2D * ptrVect, float flxa, float flxb, float flc)
{
	flc = flxa - flxb;
	ptrVect->fltX = flc;
}

void sousY(tVect2D * ptrVect, float flya, float flyb, float flc)
{
	flc = flya - flyb;
	ptrVect->fltY = flc;
}

void multX(tVect2D * ptrVect, float flxa, float flxb, float flc)
{
	flc = flxa * flxb;
	ptrVect->fltX = flc;
}

void multY(tVect2D * ptrVect, float flya, float flyb, float flc)
{
	flc = flya * flyb;
	ptrVect->fltY = flc;
}

float tVect2D::getVectEnX()
{
	return 0.0f;
}
