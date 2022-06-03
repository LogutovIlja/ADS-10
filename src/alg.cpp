// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"

using namespace std;

std::vector<char> getPerm(const Tree& tree, int n) {
  string Razm = tree[n - 1];
  vector<char> Kol;
  int i;
  for (i = 0; i < Razm.length(); i++) {
    Kol.push_back(Razm[i]);
  }
  return Kol;
}
