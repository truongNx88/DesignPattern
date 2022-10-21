#include "Database.hpp"
#include "Client.hpp"

int main(int argc, char const *argv[]) {
    Database* database = new Database();
    Developer* dev = new Developer();
    Boss* boss = new Boss();
    Client* client = new Client();

    database->registerObserver(dev);
    database->registerObserver(boss);
    database->registerObserver(client);
    

    database->editRecord("delete", "record1");

    database->removeObserver(boss);
    database->editRecord("modify", "record2");


    return 0;
}
