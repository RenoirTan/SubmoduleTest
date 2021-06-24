#include <chrono>
#include <string>
#include <vector>
#include <fmt/chrono.h>
#include <fmt/color.h>
#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/os.h>
#include <fmt/ranges.h>

using namespace std::literals::chrono_literals;

int main(int argc, char **argv) {
    fmt::print("Hello world\n");
    std::string s;
    s = fmt::format("The answer is {}.", 42);
    fmt::print("{}\n", s);
    s = fmt::format("I'd rather be {1} than {0}.", "right", "happy");
    fmt::print("{}\n", s);
    std::vector<int> v = {1, 2, 3};
    fmt::print("{}\n", v);
    fmt::print("Default format: {} {}\n", 42s, 100ms);
    fmt::print("strftime-like format: {:%H:%M:%S}\n", 3h + 15min + 30s);
    // fmt::print(FMT_STRING("{:d}"), "I am not a number");
    fmt::print(
        fg(fmt::color::crimson) | fmt::emphasis::bold,
        "Hello, {}!\n", "world"
    );
    fmt::print(
          fg(fmt::color::floral_white)
        | bg(fmt::color::slate_gray)
        | fmt::emphasis::underline,
        "Hello, {}!\n",
        "мир"
    );
    fmt::print(
        fg(fmt::color::steel_blue) | fmt::emphasis::italic,
        "Hello, {}!\n",
        "世界"
    );
    return 0;
}
