#include "main.h"

#include "Common/ParseDecimal.h"

int main() {
    

    auto number = Game2D::Common::parse_decimal("16");
    if (number.has_value()) {
        std::println("Received parameter : {:.2f}", number.value());
    }
    else {
        std::println("{}", number.error());
        return 1;
    }

    return 0;
}