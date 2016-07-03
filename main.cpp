
#include "vlc_on_qt.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Player p;
    p.resize(640,480);
  //  p.playFile("rtp://@:2626"); // Replace with what you want to play
    p.playFile("/home/jon/qtest/dsa.ts");
    p.show();
    return a.exec();
}
