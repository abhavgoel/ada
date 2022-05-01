#include <bits/stdc++.h>
using namespace std;
void printMaxActivities(int s[], int f[], int n)
{
int i, j;
cout <<"Following activities are selected "<< endl; i = 0;
cout <<" "<< i;
for (j = 1; j < n; j++)
{
if (s[j] >= f[i])
{
cout <<" " << j;
i = j;
}
}
}
int main()
{
int s[] = {9, 2, 4, 6, 2, 1};
int f[] = {32, 43, 36, 37, 94, 91};
int n = sizeof(s)/sizeof(s[0]);
printMaxActivities(s, f, n);
return 0;
} 
