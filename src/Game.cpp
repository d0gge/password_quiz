#include "Game.hpp"
#include "Utils.hpp"
#include <iostream>
#include <random>

void Game::Run()
{
  while (true)
  {
    utils::ClearConsole();
    std::pair<int, std::string> first = GetRandomPassword(0, static_cast<int>(m_Passwords.size()) - 1);
    std::pair<int, std::string> second = GetRandomPassword(0, static_cast<int>(m_Passwords.size()) - 1);
    bool wrongInput = false;
    int choice = 0;

    std::cout << "What password is more common?\n";
    std::cout << "\"" << first.second << "\""
              << " or "
              << "\"" << second.second << "\""
              << "?\n";
    std::cout << "Enter 1 (stands for first one) or 2 (stands for second one): \n";

    while (true)
    {
      std::cin >> choice;
      if (choice == 1 || choice == 2)
      {
        break;
      }
      else
      {
        std::cout << "Please, enter 1 or 2.\n";
      }
    }

    if (choice == 1 && first.first < second.first)
    {
      utils::ClearConsole();
      std::cout << "Yeees, you are right\n";
      PrintPasswords(first, second);
      std::cin.get();
      std::cin.get();
    }
    else if (choice == 2 && second.first < first.first)
    {
      utils::ClearConsole();
      std::cout << "Yeees, you are right\n";
      PrintPasswords(first, second);
      std::cin.get();
      std::cin.get();
    }
    else
    {
      utils::ClearConsole();
      std::cout << "Close. But no.\n";
      PrintPasswords(first, second);
      std::cin.get();
      std::cin.get();
    }

    while (true)
    {
      utils::ClearConsole();
      char proceed;
      if (wrongInput)
      {
        std::cout << "Please enter (Y/y), (N/n) to proceed.\n";
      }
      else
      {
        std::cout << "One more round? (Y/N)\n";
      }
      std::cin >> proceed;
      if (proceed == 'n' || proceed == 'N')
      {
        shouldBeClosed = true;
        break;
      }
      else if (proceed == 'y' || proceed == 'Y')
      {
        break;
      }
      else
      {
        wrongInput = true;
      }
    }

    if (shouldBeClosed)
    {
      utils::ClearConsole();
      break;
    }
  }
}

std::pair<int, std::string> Game::GetRandomPassword(int leftBound, int rightBound)
{
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> distr(leftBound, rightBound);
  int idx = distr(gen);
  return m_Passwords[idx];
}

void Game::PrintPasswords(std::pair<int, std::string> first, std::pair<int, std::string> second)
{
  std::cout << "Position of \"" << first.second << "\" is: " << first.first << '\n';
  std::cout << "Position of \"" << second.second << "\" is: " << second.first << '\n';
}
