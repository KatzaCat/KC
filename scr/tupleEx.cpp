#include <KC.h>

int main() {
    kc::Tuple<i32, char> tuple1(1, 'e');
    kc::Tuple<f32, str> tuple2(100.f, "hello world");

    tuple2.sete1(20.f);
    tuple2.sete2("uwu");

    std::cout << tuple1.gete1() << " " << tuple1.gete2() << std::endl;
    std::cout << tuple2.gete1() << " " << tuple2.gete2() << std::endl;
}