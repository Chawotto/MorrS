//
// Created by alexe on 16.10.2024.
//

#include "header/gamerUser.h"

GamerUser::GamerUser(std::string userName, int userAge, std::string userGender): User(std::move(userName), userAge,
    std::move(userGender), userRole::Gamer), countGamesInLabrary(0) {
}