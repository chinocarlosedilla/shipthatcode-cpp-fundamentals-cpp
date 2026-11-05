#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

void do_test_1();
void do_test_2();
void do_test_3();
void do_test_4();
void do_test_5();
void do_test_6();
void do_test_7();

int main() {
  //do_test_1();
  //do_test_2();
  //do_test_3();
  //do_test_4();
  //do_test_5();
  //do_test_6();
  do_test_7();
  return 0;
}

void do_test_7() {
  int N, sum=0;
  std::cin >> N;

  for(int i=1; i<=N; ++i) {
    sum += i;
  }
  std::cout << sum << std::endl;
}

void do_test_6() {
  int n;
  std::cin >> n;

  if(n%3 == 0 && n%5 == 0) {
    std::cout << "FizzBuzz" << std::endl;
  }
  else if(n%3 == 0) {
    std::cout << "Fizz" << std::endl;
  }
  else if(n%5==0) {
    std::cout << "Buzz" << std::endl;
  }
  else {
    std::cout << n << std::endl;
  }
}

void do_test_5() {
  std::string item_name;
  int item_quantity;
  double unit_price;

  std::getline(std::cin, item_name);
  std::cin >> item_quantity;
  std::cin >> unit_price;

  std::cout << std::left << std::setw(10) << item_name << "|"
    << std::right << std::setw(5) << item_quantity << "|"
    << std::right << std::fixed << std::setw(10) << std::setprecision(2) << static_cast<double>(item_quantity) * unit_price << std::endl;
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
