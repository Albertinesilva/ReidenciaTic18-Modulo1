#include "../Headers/RedeSocial.hpp"

int main(){

    RedeSocial twitter;
    RedeSocial::recuperaUsuarios(*twitter.getListaDeUsuarios());
    RedeSocial::recuperaTweets(*twitter.getListaDeUsuarios());
    RedeSocial::recuperaSeguindo(*twitter.getListaDeUsuarios());
    RedeSocial::menuPrincipal(*twitter.getListaDeUsuarios());


    return 0;
}