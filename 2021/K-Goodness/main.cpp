int kGoodnessString(string s, int k) {
  int minOperations = 0, x = 0;
  for(int i = 0; i < s.size() / 2; i++) {
     if(s[i] != s[s.size() - i - 1]) {
         x++;
     }
  }

  if(x == k) {
      minOperations = 0;
  }
  else if(x > k) {
      minOperations = x - k;
  }
  else {
      minOperations = k - x;
  }
  return minOperations;
}