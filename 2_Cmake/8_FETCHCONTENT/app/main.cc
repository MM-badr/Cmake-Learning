#include <iostream>

#include <fmt/format.h>
#include <nlohmann/json.hpp>
#include <spdlog/spdlog.h>

#include "my_lib.h"

int main()
{
    spdlog::info("Welcome!");
    std::cout << "JSON LIB VERSION:" << NLOHMANN_JSON_VERSION_MAJOR << "." << NLOHMANN_JSON_VERSION_MINOR << "."
              << NLOHMANN_JSON_VERSION_PATCH << "\n";

    print_HelloWorld();

    return 0;
}
