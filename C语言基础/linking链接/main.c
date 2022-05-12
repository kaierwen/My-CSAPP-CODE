/* main.c */
/* $begin main */
// http://csapp.cs.cmu.edu/3e/ics3/code/link/main.c
int sum(int *a, int n);

int array[2] = {1, 2};

int main() 
{
    int val = sum(array, 2);
    return val;
}
/* $end main */