#include "mainwindow.h"
#include "../main.h"
#include "../translation.h"
#include "../libnbt/nbt.h"

#include <QApplication>
extern NBT* root;
extern ItemList* il;
int verbose_level = 0;

int main(int argc, char *argv[])
{
    translation_init();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    int ret = a.exec();
    if(root) NBT_Free(root);
    if(il)   item_list_free(il);
    return ret;
}

int main_qt(int argc, char **argv)
{
    return main(argc, argv);
}
