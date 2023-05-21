#include <KC.h>

int main() {
    kc::File file1("test1.txt", FILEMODE_READ);

    kc::File file2;
    file2.open("test2.txt", FILEMODE_WRITE);
    file2.putString("uwu");

    std::cout << file1.toString() << std::endl;

    file1.close();
    file2.close();

    return 0;
}