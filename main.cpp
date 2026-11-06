#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <map>
#include <numeric>

void do_test_1();
void do_test_2();
void do_test_3();
void do_test_4();
void do_test_5();
void do_test_6();
void do_test_7();
void do_test_8();
  long long square(long long n);
void do_test_9();
  void swap(int& a, int& b);
void do_test_10();
void do_test_11();
void do_test_12();

int main() {
  //do_test_1();
  //do_test_2();
  //do_test_3();
  //do_test_4();
  //do_test_5();
  //do_test_6();
  //do_test_7();
  //do_test_8();
  //do_test_9();
  //do_test_10();
  //do_test_11();
  do_test_12();
  return 0;
}

void do_test_12() {
  std::vector<int> input;
  int tmp;
  while(std::cin >> tmp) {
    input.push_back(tmp);
  }
  long long output = std::accumulate(input.begin(), input.end(), 0LL,
    [](long long run, int p) {return p % 2 == 0 ? run + (static_cast<long long>(p)*p) : run;});
  
  std::cout << output << std::endl;
}

void do_test_11() {
  std::map<std::string, int> freq;

  std::string tmp;
  while(std::cin >> tmp)
    freq[tmp] += 1;

  std::cout << freq.size() << std::endl;

  for(std::map<std::string, int>::iterator i = freq.begin();
    i != freq.end(); ++i) {
    std::cout << i->first << " " << i->second << std::endl;
  }
}

void do_test_10() {
  std::vector<int> temps;
  int input;

  while(std::cin >> input)
    temps.push_back(input);

  int largest = temps[0];
  int instance = 0;

  for(std::vector<int>::iterator i = temps.begin();
    i<temps.end(); ++i) {
    //std::cerr << "Checking [" << *i << "]" << std::endl;
    if(largest == *i) {
      ++instance;
      //std::cerr << "Increasing instance coount to [" << instance << "]" << std::endl;
    }
    else if(largest < (*i)) {
      //std::cerr << "New largest is now [" << *i << "]" << std::endl;
      largest = (*i);
      instance = 1;
    }
  }

  std::cout << largest << std::endl << instance << std::endl;
}

void do_test_9() {
  int a, b;
  std::cin >> a >> b;
  swap(a,b);
  std::cout << a << " " << b << "\n";
}

void swap(int& a, int& b) {
  int swapper = a;
  a = b;
  b = swapper;
}

void do_test_8() {
  long long n;
  std::cin >> n;
  std::cout << square(n) << "\n";
}

long long square(long long n) {
  return n*n;
}

void do_test_7() {
  int N;
  long long sum=0;
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
