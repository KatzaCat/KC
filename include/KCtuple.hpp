
namespace kc {

    template <typename T, typename U>
    struct KC_Tuple {
        KC_Tuple(T e1, U e2) {
            this->e1 = e1;
            this->e2 = e2;
        }
        
        T e1;
        U e2;
    }; 

} // namespace kc
