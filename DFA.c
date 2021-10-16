/*DFA Implementation*/

#include<stdio.h>

void main() {
  int n, q1 = 1;
  scanf("%d", & n);
  char str[n], ch;
  scanf("%s", str);
  for (int i = 0; i < n; i++) {
    if (str[i] == 'a' || str[i] == 'b') {
      // printf("\n Valid String \n");
      ch = str[i];
      switch (ch) {
      case 'a': {
        q1 = 2;
        //printf("\n State Changed \n");
        if (q1 == 1)
          q1 = 2;
        else
          q1 = 1;
        break;
      }
      case 'b':
        //printf("\n Same State \n");
        break;
      default: {
        printf("\n Invalid Input \n");
      }
      }
    } else {
      q1 = -1;
      break;
      printf("\n Invalid String \n");
    }
  }
  if (q1 == 1) {
    printf("\n String Accepted \n");
  } else {
    printf("\n String not Accepted \n");
  }
}