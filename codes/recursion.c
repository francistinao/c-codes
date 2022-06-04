/* Recursion 

Definition of Recursion 
  - Is a process in which a function calls itself directly or indirecty

  Example:

  int fun()
  {
      ...
      fun();
  }

  Another example:

  int fun(int n) {
      (n == 1) ? return 1 : return + fun(n - 1);
  }

  int main() {
      int n = 3;
      printf("%d",fun(n));
      return 0;
  }