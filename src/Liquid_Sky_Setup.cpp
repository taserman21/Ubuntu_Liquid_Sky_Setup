#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int y(0);

void download();

void graphics();

void install();

void intel();

void nvidia();

void other();

int main()
{
    graphics();
    
    install();
    
    download();
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

void download()
{
    cout << "What version of Ubuntu are you running?" << endl
        << "1: 10.04" << endl
            << "2: 12.04" << endl
                << "3: 14.04" << endl;
    
    cin >> y;
        
    if (y == 1)
    {
        system("sudo wget https://liquidsky.tv/LiquidSkyUbuntu10.04.tar.bz2");
        
        system("sudo tar xvf LiquidSkyUbuntu10.04.tar.bz2");
        
        system("sudo rm LiquidSkyUbuntu10.04.tar.bz2");
    }
    
    if (y == 2)
    {
        system("sudo wget https://liquidsky.tv/LiquidSkyUbuntu12.04.tar.bz2");
        
        system("sudo tar xvf LiquidSkyUbuntu12.04.tar.bz2");
        
        system("sudo rm LiquidSkyUbuntu12.04.tar.bz2");
    }
    
    if (y == 3)
    {
        system("sudo wget https://liquidsky.tv/LiquidSkyUbuntu14.04.tar.bz2");
        
        system("sudo tar xvf LiquidSkyUbuntu14.04.tar.bz2");
        
        system("sudo rm LiquidSkyUbuntu14.04.tar.bz2");
    }
}

void install()
{
    system("sudo apt-get install mesa-utils");
    
    system("sudo glxinfo >> GLXInfo.txt");
    
    system("ln -s /home/Downloads/Ubuntu_10.04/Liquid_Sky_Setup /usr/bin/liquidsky");
}