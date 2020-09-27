#include <iostream>
#include <vector>
#include <string>

#include "crow.h"
#include "Api/Endpoint.hpp"
#include "Controller/BoardManager.hpp"
#include "Repository/DatabaseMock/BoardRepository.hpp"

using namespace std;

int main()
{
    crow::SimpleApp crowApplication;

    Prog3::Repository::RepositoryIf * repository = new Prog3::Repository::DatabaseMock::BoardRepository();
    Prog3::Controller::BoardManager boardManager(*repository);
    Prog3::Api::Endpoint endpoint(crowApplication, boardManager);

    crowApplication.port(8080)
//        .multithreaded()
        .run();
}