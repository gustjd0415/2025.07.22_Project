
#include "SpartaGameMode.h"
#include "SpartaPlayerController.h" 
#include "SpartaCharacter.h"       
#include "SpartaGameState.h"   

ASpartaGameMode::ASpartaGameMode()
{
    PlayerControllerClass = ASpartaPlayerController::StaticClass();
    DefaultPawnClass = ASpartaCharacter::StaticClass();
    GameStateClass = ASpartaGameState::StaticClass();
}