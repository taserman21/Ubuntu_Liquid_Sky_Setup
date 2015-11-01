#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void graphics();

void install();

void intel();

void nvidia();

void other();

int main()
{
    graphics();
    
    install();
}

void nvidia()
{
    system("sudo apt-get install nividia-current");
}

void intel()
{
    system("sudo apt-get install libva1 i965-va-driver libva-intel-vaapi-driver vainfo");
}

void other()
{
    system("sudo apt-get install mesa-vdpau-drivers");
}

void graphics()
{
    int x(0);   
    
    cout << "Hello, and Welcome!!!" << endl
            << "Does your computer use Nvidia or Intel for graphics?" << endl
                << "1: Nvidia" << endl
                    << "2: Intel" << endl
                        << "3: Neither or Don't Know" << endl;
    
    cin >> x;
    
    if (x == 1)
    {
        nvidia();
    }
    
    if (x == 2)
    {
        intel();
    }
    
    if (x == 3)
    {
        other();
    }
}

void install()
{
    system("tar xvf LiquidSkyUbuntu10.04.tar.bz2");   
    
}