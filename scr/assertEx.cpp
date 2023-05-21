#include <KC.h>

int main() {
    int temp = 11;

    KC_ASSERT_WITHOUT_QUIT(temp == 12, "temp doesnt = 12");
    KC_ASSERT_TO_FILE_WITHOUT_QUIT(temp == 12, "temp doesnt = 12");

    return 0;
}