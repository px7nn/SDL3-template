#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

int main(int argc, char *args[]){
    SDL_Window *win = NULL;
    SDL_Renderer *ren = NULL;

    if(!SDL_CreateWindowAndRenderer("Main-Screen", 640, 420, SDL_WINDOW_RESIZABLE, &win, &ren)){
        SDL_Log("Couldn't Create Window: %s", SDL_GetError());
        return SDL_APP_FAILURE;
    }

    int running = 1;
    
    while(running){
        SDL_Event e;
        if(SDL_PollEvent(&e)){
            if(e.type == SDL_EVENT_QUIT)
                running = 0;
        }
        //UPDATE
    }
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}