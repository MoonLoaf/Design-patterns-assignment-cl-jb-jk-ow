#include "Image.h"
#include "../Utilities/Consts.h"
#include <SDL_image.h>
#include "../Utilities/ImageURLs.h"

Image::Image(Transform transform, const char* newImageURL, SDL_Renderer* renderer) : GameObject(transform) {
    Renderer = renderer;

    SetTexture(newImageURL);
}

void Image::SetColor(SDL_Color Color) {
    SDL_SetTextureColorMod(Texture, Color.r, Color.g, Color.b);
}

void Image::SetTexture(const char* ImgUrl) {
    SDL_Surface* loadedSurface = IMG_Load(ImgUrl);
    Texture = SDL_CreateTextureFromSurface(Renderer, loadedSurface);
    SDL_FreeSurface(loadedSurface);
}
