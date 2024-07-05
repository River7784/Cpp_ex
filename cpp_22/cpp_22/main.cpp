#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

void generate_game(std::vector<int>& numbers) {
    // 랜덤 엔진 초기화
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(numbers.begin(), numbers.end(), std::default_random_engine(seed));     //shuffle사용

    // 처음 6개의 숫자 출력
    for (int i = 0; i < 6; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // 1부터 45까지의 숫자를 벡터에 추가
    std::vector<int> numbers;
    for (int i = 1; i <= 45; ++i) {
        numbers.push_back(i);
    }

    int game_count;
    std::cout << "게임 수를 입력하세요 (1-5): ";
    std::cin >> game_count;

    // 입력된 게임 수가 유효한지 확인
    if (game_count < 1 || game_count > 5) {
        std::cerr << "게임 수는 1에서 5 사이여야 합니다." << std::endl;
        return 1;
    }

    for (int game = 1; game <= game_count; ++game) {
        std::cout << "게임 " << game << ": ";
        generate_game(numbers);
    }

    return 0;
}
