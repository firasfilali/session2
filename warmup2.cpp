void warmup2() {
  // c solution
  char s[1001], vowels = {'a', 'e', 'o', 'u', 'y', 'i'};
  scanf("%s",s);
  int c=0;
  for(int i = 0; i < strlen(s); i++) {
    for(int j = 0; i < 6; j++) {
   		 if(s[i]==vowels[j]) {
    		c=c+1
       }
    }
      
  }
  printf("%d",c);
  // #include <bits/stdc++.h>
  // c++ solution. char[1001] -> string || strlen(s) -> s.size() #include <string>
  // cin >> s || cout << s #include <iostream>
	string s[1000], vowels = {'a', 'e', 'o', 'u', 'y', 'i'};
  cin >> s
}
