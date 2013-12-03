#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "SDL.h"
#include "SDL_opengl.h"

int main( int argc, char* args[] )
{
    //Start SDL
    SDL_Init( SDL_INIT_EVERYTHING );
 
    //Create an SDL_Surface and display it
    SDL_Window *screen = SDL_CreateWindow("My Game Window",
                          SDL_WINDOWPOS_UNDEFINED,
                          SDL_WINDOWPOS_UNDEFINED,
                          640, 480,
						  SDL_WINDOW_OPENGL);

 
    //wait 2 seconds
    SDL_Delay( 2000 );
 
    //Quit SDL (this also cleans up the SDL_Surface 
    //data - so never fear, we aren't leaking :)
    SDL_Quit();
 
    return 0;
}