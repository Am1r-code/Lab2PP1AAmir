#include <iostream>
using namespace std;

int main() {
  int x = 999;
  int y = 1;
  cout << x + y << endl;
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  double i = 96;
  i /= 69;
  cout << i << endl;
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int x = 18;
  int y = 14;
  cout << (x >= y) << endl;
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int x = 99;
  cout << (x > 98 && x < 100) << endl;
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  string congratulations = "Happy Birthday!";
  cout << congratulations << endl;
  return 0;
}

#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "Amir ";
  string lastName = "Abduakilov";
  string fullName = firstName.append(lastName);
  cout << fullName;
  return 0;
}

#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string a = "60";
  string b = "065";
  cout << a + b << endl;
  return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
  string soz = "KANAGATTANDYRYLMAGANDYKTARYNYZDAN";
  cout << "Bul sozdyn uzyndygy: " << soz.length() << " arip" << endl;
  return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
  string cola = "chocolate";
  cout << cola[3] << endl;
  cout << cola[4] << endl;
  cout << cola[5] << endl;
  cout << cola[6] << endl;
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  string thor = "I am Thor \"God of Thunder\" Odynson!";
  cout << thor;
  return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
  string fName;
  cout << "Type your first name: ";
  getline (cin, fName);
  cout << "Your nickname is: " << fName << "228" << endl;
  return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a = 3;
  int b = 4;
  int c = sqrt(a*a + b*b);
  cout << "hypotenuse equals to " << c << endl;
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  bool PP1iseasy = true;
  bool PP1ishard = false;
  cout << PP1iseasy << "\n";
  cout << PP1ishard;
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;
  if (x == 5) {
      cout << "Excellent!" << endl;
  }
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;
  if (x == 5) {
      cout << "Excellent!" << endl;
  } else {
      cout << "Bad((" << endl; }
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;
  if (x == 5) {
      cout << "Excellent!" << endl;
  } else if (x == 4)  { 
      cout << "It's ok!" << endl;
  } else {
      cout << "Bad((" << endl; }
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int meal = 3;
  switch (meal) {
  case 1:
    cout << "Eggs";
    break;
  case 2:
    cout << "Soup";
    break;
  case 3:
    cout << "Steak";
    break;
  }
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int m = 10;
  while (m > 0) {
    cout << m << "\n";
    m--;
  }
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int p = 7;
  do {
    cout << p << "\n";
    p--;
  }
  while (p > 5);
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i <= 100; i = i + 10) {
    cout << i << "\n";
  }
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 1; i++) {
    cout << "Odd: " << i << "\n";  
    for (int j = 2; j <= 10; j = j + 2) {
      cout << "Even: " << j << "\n";  
    }
  }
  return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
  string year[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  for (string y : year) {
    cout << y << "\n";
  }
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 100; i++) {
    if (i == 51) {
      break;
    }
    cout << i << "\n";
  } 
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 3; i++) {
    if (i == 1) {
      continue;
    }
    cout << i << "\n";
  }   
  return 0;
}