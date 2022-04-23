#pragma once
#include <random>
#include <unordered_map>

class Game
{
public:
  static Game& GetInstance()
  {
    static Game instance;
    return instance;
  };
  Game(const Game&) = delete;
  void operator=(const Game&) = delete;
  bool shouldBeClosed = false;

  void Run();

private:
  Game() = default;
  std::pair<int, std::string> GetRandomPassword(int leftBound, int rightBound);

  static constexpr const char* hello = "something";
  void PrintPasswords(std::pair<int, std::string> first, std::pair<int, std::string> second);
  std::random_device rd;
  std::vector<std::pair<int, std::string>> m_Passwords = {
      {1, "123456"},      {2, "123456789"},   {3, "picture1"},  {4, "password"}, {5, "12345678"},  {6, "111111"},
      {7, "123123"},      {8, "12345"},       {9, "123456789"}, {10, "senha"},   {11, "1234567"},  {12, "qwerty"},
      {13, "abc123"},     {14, "Million2"},   {15, "000000"},   {16, "1234"},    {17, "iloveyou"}, {18, "aaron431"},
      {19, "password1"},  {20, "qqww1122"},   {21, "123"},      {22, "omgpop"},  {23, "123321"},   {24, "654321"},
      {25, "qwertyuiop"}, {26, "qwer123456"}, {27, "123456a"},  {28, "a123456"}, {29, "666666"},   {30, "asdfghjkl"},
  };
};
