#include <iostream>
#include <string>
#include <algorithm>

void do_test_1();
void do_test_2();
void do_test_3();
void do_test_4();

int main() {
  //do_test_1();
  //do_test_2();
  //do_test_3();
  do_test_4();
  return 0;
}

void do_test_4() {
  std::string input;
  std::getline(std::cin, input);

  std::reverse(input.begin(), input.end());
  std::cout << input << std::endl;

}

void do_test_3() {
  int width, height;
  std::cin >> width >> height;

  long long area = static_cast<long long>(width) * height;
  double mean = (static_cast<double> (width) + height) / 2;
  std::cout << area << std::endl;
  std::cout << mean << std::endl;
}

void do_test_2() {
  int a,b;
  long sum, diff;

  std::cin >> a >> b;
  sum = (long)a+(long)b;
  diff = (long)a-(long)b;

  std::cout << sum << std::endl;
  std::cout << diff << std::endl;
}

void do_test_1() {
  std::string name;
  std::string language;

  // TODO: read name, then language, from std::cin
  std::cin >> name >> language;

  // TODO: print the two greeting lines with std::cout
  std::cout << "Hello, " << name << "!" << std::endl;
  std::cout << name << " is learning " << language << "." << std::endl;
}
