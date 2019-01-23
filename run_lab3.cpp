#include <iostream>
#include <fstream>

using namespace std;

int* create_array(int);
void fill_array(int*, ifstream&);
int check_value(char);
void initialize_array(int*, int);

int main(int argc, char const *argv[]) {
  if(argc != 2) {
    cout << "You did not enter a valid file name, try again" << endl;
    return 0;
  }
  else {
    ifstream f (argv[1]);
    if(!f.is_open()) {
      cout << "could not open file" << endl;
    }
    else {
      int size = 26;
      int* array = create_array(size);
      initialize_array(array, size);
      fill_array(array, f);
      return 0;
    }
  }
}


int* create_array(int size) {
  int* array = new int[size];
  return array;
}

void initialize_array(int* array, int size) {
  for(int i = 0; i < size; i++) {
    array[i] = 0;
  }
}

void fill_array(int* array, ifstream &f) {
  char c;
  int val = 0;
  int letter = 97;
  ofstream outfile ("alphabet.txt", ofstream::app);
  while(f.get(c)) {
    int val = check_value(c);
    array[val]++;
  }
  for(int i = 0; i < 26; i++) {
    outfile << char(letter) << ": " << array[i] << endl;
    letter++;
  }
  outfile.close();
}

int check_value(char val) {
  int num = 0;
  if (val == 'a' || val == 'A') {
    num = 0;
    return num;
  } if (val == 'b' || val == 'B') {
    num = 1;
    return num;
  } if (val == 'c' || val == 'C') {
    num = 2;
    return num;
  } if (val == 'd' || val == 'D') {
    num = 3;
    return num;
  } if (val == 'e' || val == 'E') {
    num = 4;
    return num;
  } if (val == 'f' || val == 'F') {
    num = 5;
    return num;
  } if (val == 'g' || val == 'G') {
    num = 6;
    return num;
  } if (val == 'h' || val == 'H') {
    num = 7;
    return num;
  } if (val == 'i' || val == 'I') {
    num = 8;
    return num;
  } if (val == 'j' || val == 'J') {
    num = 9;
    return num;
  } if (val == 'k' || val == 'K') {
    num = 10;
    return num;
  } if (val == 'l' || val == 'L') {
    num = 11;
    return num;
  } if (val == 'm' || val == 'M') {
    num = 12;
    return num;
  } if (val == 'n' || val == 'N') {
    num = 13;
    return num;
  } if (val == 'o' || val == 'O') {
    num = 14;
    return num;
  } if (val == 'p' || val == 'P') {
    num = 15;
    return num;
  } if (val == 'q' || val == 'Q') {
    num = 16;
    return num;
  } if (val == 'r' || val == 'R') {
    num = 17;
    return num;
  } if (val == 's' || val == 'S') {
    num = 18;
    return num;
  } if (val == 't' || val == 'T') {
    num = 19;
    return num;
  } if (val == 'u' || val == 'U') {
    num = 20;
    return num;
  } if (val == 'v' || val == 'V') {
    num = 21;
    return num;
  } if (val == 'w' || val == 'W') {
    num = 22;
    return num;
  } if (val == 'x' || val == 'X') {
    num = 23;
    return num;
  } if (val == 'y' || val == 'Y') {
    num = 24;
    return num;
  } if (val == 'z' || val == 'Z') {
    num = 25;
    return num;
  }
}
