#include <iostream>
using namespace std;
int maxCross(inta[], int low, int mid, inthigh)
{
intsum = 0, left = -100000, right = -100000;
for (int i = mid; i >= low; i--)
{
sum += a[i]; if (sum > left)
left = sum;
}
sum = 0;
for (int i = mid + 1; i <= high; i++)
{
sum += a[i];
if (sum > right)
right = sum;
}
return left + right;
}
int maxSub(inta[], int low, inthigh)
{
if (low == high)
return a[low];
int mid = (low + high)/2;
int left = maxSub(a, low, mid);
int right = maxSub(a, mid + 1,high);
intcross = maxCross(a, low, mid,high); if (left >= right && left >= cross)
return left;
elseif (right >= left && right >= cross)
return right;
else
return cross;
}
int main()
{
int a[100],n;
cout << "Entersize:";
cin >> n;
cout << "Enterelements:";
for (int i = 0; i < n; i++)
cin >> a[i];
cout << "Maximum subarraysum = "<< maxSub(a,0,n-1);
return 0;
}
