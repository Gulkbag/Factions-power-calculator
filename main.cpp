#include <iostream>

void gentime()
{
  std::cout << "This is a program for calculating time needed for getting a certain amount of power in the factions plugin for minecraft" << std::endl;
  std::cout << "Please enter your desired power" << std::endl;
  int pwr = 0;
  float time = 0.0f;
  int i;
  std::cin >> pwr;
  for (i = 0; i < pwr; i++)
  {
    time = time + 5.0f;
  }
  std::cout << "You need " << time << " Minutes to get " << pwr << " Power."<< std::endl;
}

int main()
{
  gentime();
  char tmp[500];
  std::cout << "Enter any button to exit" << std::endl;
  std::cin >> tmp;
  return 0;
}
