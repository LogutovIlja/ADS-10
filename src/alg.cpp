// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"


std::vector<char> getPerm(const Tree& tree, int n) {
  std::string Razm = tree[n - 1];
  std::vector<char> Kol;
  int i;
  for (i = 0; i < Razm.length(); i++) {
    Kol.push_back(Razm[i]);
  }
  return Kol;
}
