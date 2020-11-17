#include <bits/stdc++.h>

using namespace std;

int getGroups(float children[]){

    int lastChild = sizeof(children);
    int currentChild=1;
    int startingPoint=0;
    int groups=0;

    while(currentChild < lastChild){

        int x = children[currentChild] - children[startingPoint];
        if(x > 1){
            startingPoint = currentChild ;
            groups++;
        }

        if(currentChild==lastChild-1){
            groups++;
        }
        currentChild++;
    }
    return groups;
   }

  int main() {

    int n;
    cout << "Number of n: ";
    cin >> n;

    float children[n];

    cout << "\nEnter " << n << " points:\n";
    for (int i = 0; i < n; i++) {
        cin >> children[i];
    }
    cout << endl << "Groups: " << getGroups(children) << endl << endl;
  }
