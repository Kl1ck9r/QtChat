#include "server.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Server server(2323);
    server.resize(250,400);
    server.show();

    return a.exec();
}
