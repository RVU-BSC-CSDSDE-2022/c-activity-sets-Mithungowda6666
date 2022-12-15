#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void input_two__strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main(){
  char string1[100],string2[100];
  input_two__strings(string1,string2);
  int r = 10;
  r = stringcompare(string1,string2);
  output(string1,string2,r);
}

void input_two__strings(char *string1, char *string2){
  printf("Enter the first string ");
  if(scanf("%s", string1)!=1)
  {
    printf("error");
    exit(0);
  }
  printf("Enter the second string ");
  if(scanf("%s", string2)!=1)
    {
    printf("error");
    exit(0);
  }
  }

int stringcompare(char *string1, char *string2){
  int a = strlen(string1);
  int b = strlen(string2);//use your own strlen function
  if(a == b) {//use only one for loop to check all the required condition
    int i;
    for(i = 0; i<a;i++){
      if(string1[i]==string2[i]){
        return(10);
        continue;
      }
      else if (string1[i]>string2[i]){
        return(1);
        break;
      }
      else{
        return(0);
        break;
        }
      }
    }
  }

void output(char *string1, char *string2, int result){
  if(result == 10)
  {printf("both words are equal");}
  else{
    if (result == 1){printf("%s is greater than %s", string1, string2);}
    else{printf("%s is greater than %s", string2,string1);}
  }
}
