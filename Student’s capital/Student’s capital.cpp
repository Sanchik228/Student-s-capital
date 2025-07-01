#include <iostream>
#include <vector>
#include <algorithm>

struct Laptop {
    int gain;
    int price;
    double profit;

    Laptop(int p, int g) : price(p), gain(g) {
        profit = (double)gain / price;
    }
};

int main() {
    int N, C, K;
    std::cout << "Enter the max laptops to buy: ";
    std::cin >> N;
    std::cout << "Enter the initial capital: ";
    std::cin >> C;
    std::cout << "Enter the total available laptops: ";
    std::cin >> K;

    std::vector<Laptop> laptops;
    for (int i = 0; i < K; i++) {
        int gain, price;
        std::cout << "Laptop " << (i + 1) << " ";
        std::cin >> price >> gain;
        laptops.emplace_back(price, gain);
    }

    std::sort(laptops.begin(), laptops.end(), [](const Laptop& a, const Laptop& b) {
        return a.profit > b.profit;
        });

    int bought = 0, capital = C;
    for (const auto& laptop : laptops) {
        if (bought >= N) break;
        if (laptop.price <= capital) {
            capital -= laptop.price;
            capital += laptop.gain;
            bought++;
        }
    }
    std::cout << "Capital after summer: " << capital << std::endl;

    return 0;
}