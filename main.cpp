#include <string>
#include <vector>

void count_vowels() {
    std::string text = "prism bridge";
    int vowels = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels += 1;
    }
    (void)vowels;
}

void is_even() {
    int n = 256;
    bool even = (n % 2 == 0);
    (void)even;
}

void average_values() {
    int values[3] = {12, 18, 24};
    int total = values[0] + values[1] + values[2];
    int average = total / 3;
    (void)average;
}

void count_down() {
    int acc = 0;
    for (int i = 8; i > 0; --i) acc += i;
    (void)acc;
}

extern "C" int clever_willow();
extern "C" void sable_ripple();
extern "C" void misty_summit();

int main() {
    count_vowels();
    is_even();
    average_values();
    count_down();
    sable_ripple();
    misty_summit();
    return clever_willow();
}
