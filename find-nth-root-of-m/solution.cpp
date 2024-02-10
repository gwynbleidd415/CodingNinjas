int solution1(int n, int m) {
  int l{1}, r{m}, mid;
  int power;
  while(l < r) {
    mid = (l + r + 1) >> 1;
    power = pow(mid, n);
    if(power == INT_MIN || power > m) r = mid-1;
    else if(power == m) return mid;
    else l = mid;
  }
  return -1;
}
int solution2(int n, int m) {
  int l{1}, r{m}, mid;
  int power;
  while(l < r) {
    mid = (l + r + 1) >> 1;
    power = pow(mid, n);
    if(power == INT_MIN || power > m) r = mid-1;
    else l = mid;
  }
  if(pow(l, n) == m) return l;
  return -1;
}

int NthRoot(int n, int m) {
  // Write your code here.
  // return solution1(n, m);
  return solution2(n, m);
}
