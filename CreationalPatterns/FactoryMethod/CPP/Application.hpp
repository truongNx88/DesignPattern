#ifndef Application_hpp
#define Application_hpp

#include "Document.hpp"
#include "MyDocument.hpp"

class Application {
private:
    int _index;
    Document* _docs[10];
public:
    Application():_index(0) {
        std::cout << "Application: ctor" << std::endl;
    }

    void NewDocument(char* name) {
        std::cout << "Application: NewDocument()" << std::endl;
        /* Framework calls the "hole" reserved for client customization */
        _docs[_index] = CreateDocument(name);
        _docs[_index++]->Open(); 
    }

    void OpenDocument() {}

    void ReportDocument();

    virtual Document* CreateDocument(char* ) =0;
};
#endif

void Application::ReportDocument() {
    std::cout<< "Application: ReportDocs()" << std::endl;
    for (int i = 0; i < _index; i++)
    std::cout << "   " << _docs[i]->GetName() << std::endl;
}