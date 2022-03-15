#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/

struct cell {
  int value;
  struct cell *ref1, *ref2;
  int v1, v2;
  char op;
  int pass;

  void eval() {
    switch (op) {
      case 'V':
        value = v1;
        break;
      case 'A':
        value = v1 + v2;
        break;
      case 'S':
        value = v1 - v2;
        break;
      default:
        value = v1 * v2;
        break;
    }
    pass = 1;
  }

  int dref() {
    if (pass)
      return value;
    if (ref1)
      v1 = ref1->dref();
    if (ref2)
      v2 = ref2->dref();
    eval();
    return value;
  }
};

int main()
{
  int size;
  scanf("%d", &size);
  struct cell *sheet = (struct cell*)malloc(size * sizeof(struct cell));
  for (int i = 0; i < size; i++) {
    char operation[6];
    char arg1[7];
    char arg2[7];
    scanf("%s%s%s", operation, arg1, arg2);
    printf("%s %s %s\n", operation, arg1, arg2);
    sheet[i].op = operation[0];
    if (arg1[0] == '$')
      sheet[i].ref1 = &sheet[atoi(arg1+1)];
    else {
      sheet[i].v1 = atoi(arg1);
      sheet[i].ref1 = NULL;
    }
    if (arg2[0] == '$') {
      sheet[i].ref2 = &sheet[atoi(arg2+1)];
    }
    else if (arg2[0] != '_') {
      sheet[i].v2 = atoi(arg2);
      sheet[i].ref2 = NULL;
    }
    if (!sheet[i].ref1 && !sheet[i].ref2) {
      sheet[i].eval();
    }
  }
  int j = 0;
  while (j < size) {
    printf("%d\n", sheet[j].dref());
    j++;
  }
}
