#include "MyApplication.hpp"

int main(int argc, char const *argv[]) {
    MyApplication app;

    app.CreateDocument("foo");
    app.CreateDocument("bar");
    app.ReportDocument();
    return 0;
}