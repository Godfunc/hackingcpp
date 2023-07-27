#include<fstream>
#include<iostream>


void writeFile()
{
    std::ofstream os {"sequares.txt"}; // openfile
    if(os.good())
    {
        for (int i = 0; i <= 6; i++)
        {
            os << i << ' ' << (i * i) << '\n';
        }
    }
}

void readFile()
{
    std::ifstream is {"sequares.txt"};
    if(is.good())
    {
        double x, y;
        while (is >> x >> y)
        {
            std::cout << x << ' ' << y << '\n';
        }
    }
}

int main()
{
    writeFile();
    readFile();
    return 0;
}