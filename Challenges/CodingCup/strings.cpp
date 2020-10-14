#include <iostream>

int main()
{
    std::string webresponse = "5accdd72bb566079faf459cbad0934c5";
    std::string secondStr = "5accdd72bb566079faf459cbad0934c5";

    if (webresponse == "5accdd72bb566079faf459cbad0934c5")
    { // In case you think variable may cause a trouble
        std::cout << "Equal";
    }
    else
    {
        std::cout << "Not equal";
    }

    return 0;
}
