#include "iostream"
using namespace std;

int main() {
    int a, b, c, d, e, f, g, h, i, j10;

    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j10;

    // lfd --> left_first_digit
    // lsd --> left_second_digit
    /*
    
        Algorithm

        Iterate over the range [0, 9]
        Take target which is equal to one of the variables
        Iterate over the range again in the inner loop
        Match inner loop values with one of the variables except
        the target itself
        To prevent duplicate check whether inner loop value is target's
        This way, we can check again in the next step and do not
        get duplicate as we skip lsd's value equal to target's
        Print a combination

    */

    int count = 0;

    for (int lfd = 1; lfd <= 9; lfd++) {

        int target = 0;

        if (lfd == a) {
            target = a;
        }
        else if (lfd == b) {
            target = b;
        }
        else if (lfd == c) {
            target = c;
        }
        else if (lfd == d) {
            target = d;
        }
        else if (lfd == e) {
            target = e;
        }
        else if (lfd == f) {
            target = f;
        }
        else if (lfd == g) {
            target = g;
        }
        else if (lfd == h) {
            target = h;
        }
        else if (lfd == i) {
            target = i;
        }
        else if (lfd == j10) {
            target = j10;
        }
        else {
            continue; // if no match with the variables, skip this iteraton
        }

        int combination = target * 10;

        for (int lsd = 0; lsd < 10; lsd++) {
            if (target == lsd) {
                continue; // prevent duplicates so that
            }
            
            // we can check the case lsd == target, which is duplicate and
            // is prevented in the previous step

            else if (lsd == a || lsd == b || lsd == c 
            || lsd == d || lsd == e || lsd == f 
            || lsd == g || lsd == h || lsd == i || lsd == j10) {
                cout << combination + lsd << endl;
                count ++;
            }
        }
        cout << endl;

    }

    cout << "Count: " << count << endl; 

    return 0;
}