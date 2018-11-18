#include <iostream>
#include <string>
#include <string.h>
#include "CVect2D.h"
#include <SDL.h>
#include <SDL_image.h>

using namespace std;

int main(int argc, char * argv[]) {
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		cout << "SDL initialization failed. SDL Error: " << SDL_GetError();
	}
	else
	{
		cout << "SDL initialization succeeded!";
	}

	cin.get();



	//SDL

	SDL_Window *fenetre;
	fenetre = SDL_CreateWindow("Hello World", 100, 100, 600, 600, 0);

	SDL_Renderer *pRenderer = SDL_CreateRenderer(fenetre, -1, SDL_RENDERER_ACCELERATED);
	if (pRenderer)
	{
		SDL_Surface* pSprite = SDL_LoadBMP("Skull.bmp");
		if (pSprite)
		{
			SDL_Texture* pTexture = SDL_CreateTextureFromSurface(pRenderer, pSprite);
			if (pTexture)
			{
				SDL_Rect dest = { 640 / 2 - pSprite->w / 2,480 / 2 - pSprite->h / 2, pSprite->w, pSprite->h };
				SDL_RenderCopy(pRenderer, pTexture, NULL, &dest);

				SDL_RenderPresent(pRenderer);
				SDL_Delay(3000);

				SDL_DestroyTexture(pTexture);
			}
			else
			{
				fprintf(stdout, "Échec de création de la texture (%s)\n", SDL_GetError());
			}

			SDL_FreeSurface(pSprite);
		}
		else
		{
			fprintf(stdout, "Échec de chargement du sprite (%s)\n", SDL_GetError());
		}

		SDL_DestroyRenderer(pRenderer);
	}
	else
	{
		fprintf(stdout, "Échec de création du renderer (%s)\n", SDL_GetError());
	}
	
	
	


	SDL_Delay(10000);

	SDL_DestroyWindow(fenetre);
	SDL_Quit();


//Vecteur
	/*SDL_Texture* monImage = SDL_CreateTextureFromSurface(renderer, image); 
	SDL_FreeSurface(image);*/

	/*tVect2D vecteur;

	vecteur.fltX = 0.0;
	vecteur.fltY = 0.0;

	float Soluce = 0.0;
	float Choix;

	std::cout << "Rentrer les coordonee en X du 1er point" << std::endl;
	std::cin >> Choix;
	setVectX(&vecteur, (float)Choix);

	std::cout << "Rentrer les coordonee en Y du 1er point" << std::endl;
	std::cin >> Choix;
	setVectY(&vecteur, (float)Choix);

	float P1x = getVectX(vecteur);
	float P1y = getVectY(vecteur);
	system("CLS");


	std::cout << "Rentrer les coordonee en X du 2eme point" << std::endl;
	std::cin >> Choix;
	setVectX(&vecteur, (float)Choix);

	std::cout << "Rentrer les coordonee en Y du 2eme point" << std::endl;
	std::cin >> Choix;
	setVectY(&vecteur, (float)Choix);

	float P2x = getVectX(vecteur);
	float P2y = getVectY(vecteur);
	system("CLS");

	std::cout << "Coordonee du point 1:\nValeur en X: " << P1x << "\nValeur en Y: " << P1y << std::endl;
	std::cout << "\nCoordonee du point 2:\nValeur en X: " << P2x << "\nValeur en Y: " << P2y << std::endl;

	addiX(&vecteur, (float)P1x, (float)P2x, (float)Soluce);
	Soluce = getVectX(vecteur);
	std::cout << "\nAddition des points en X : " << Soluce << std::endl;


	addiY(&vecteur, (float)P1y, (float)P2y, (float)Soluce);
	Soluce = getVectY(vecteur);
	std::cout << "\nAddition des points en Y : " << Soluce << std::endl;

	sousX(&vecteur, (float)P1x, (float)P2x, (float)Soluce);
	Soluce = getVectX(vecteur);
	std::cout << "\nSoustraction des points en X : " << Soluce << std::endl;


	sousY(&vecteur, (float)P1y, (float)P2y, (float)Soluce);
	Soluce = getVectY(vecteur);
	std::cout << "\nSoustraction des points en Y : " << Soluce << std::endl;


	multX(&vecteur, (float)P1x, (float)P2x, (float)Soluce);
	Soluce = getVectX(vecteur);
	std::cout << "\nSoustraction des points en X : " << Soluce << std::endl;


	multY(&vecteur, (float)P1y, (float)P2y, (float)Soluce);
	Soluce = getVectY(vecteur);
	std::cout << "\nSoustraction des points en Y : " << Soluce << std::endl;*/

	system("pause");
	return 0;

}