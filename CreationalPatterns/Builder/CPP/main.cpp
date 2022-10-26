#include "Reader.hpp"
#include "UnixBuilder.hpp"

const int NUM_ENTRIES = 6;
PersistenceAttribute input[NUM_ENTRIES] = 
{
  {
    File, "state.dat"
  }
  , 
  {
    File, "config.sys"
  }
  , 
  {
    Queue, "compute"
  }
  , 
  {
    Queue, "log"
  }
  , 
  {
    Pathway, "authentication"
  }
  , 
  {
    Pathway, "error processing"
  }
};

int main(int argc, char const *argv[]) {
    UnixBuilder unixBuilder;
    VmsBuilder vmsBuilder;
    Reader reader;

    reader.setBuilder(&unixBuilder);
    reader.construct(input, NUM_ENTRIES);
    std::cout << unixBuilder.getResult()->getState() << std::endl;

    reader.setBuilder(&vmsBuilder);
    reader.construct(input, NUM_ENTRIES);
    std::cout << vmsBuilder.getResult()->getState() << std::endl;

    return 0;
}
