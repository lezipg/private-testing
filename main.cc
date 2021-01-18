#include <iostream>

int issueDouble()
{
    double x = 1;
    int n = 10;
    while (n--)
    {
        int a = (x + 0.001 * n) * 1000;
        std::cout << a << std::endl;
    }
}

int main()
{
    std::cout << "hello world!" << std::endl;
    std::cout << "new branch" << std::endl;
    return 0;
}
