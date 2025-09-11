#include <iostream>
#include <algorithm> // Required for std::max

int main() {
    int n; // Number of stops
    std::cin >> n;

    int current_passengers = 0;
    int max_passengers = 0;

    for (int i = 0; i < n; ++i) {
        int exiting, entering;
        std::cin >> exiting >> entering;

        current_passengers -= exiting;
        current_passengers += entering;

        // Update max_passengers if current_passengers is higher
        max_passengers = std::max(max_passengers, current_passengers);
    }

    std::cout << max_passengers << std::endl;

    return 0;
}
