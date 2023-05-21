#include <KC.h>

int main() {
    kc::KC_Tuple<int, char> tuple(1, 'e');

    std::cout << tuple.e1 << " " << tuple.e2;
}