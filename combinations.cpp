#include "iostream"
using namespace std;

int main() {
    int a, b, c, d, e, f, g, h, i, j10;

    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j10;

    // lfd --> left_first_digit
    // lsd --> left_second_digit
    /*
    
        Algorithm

        Iterate over the range [0, max_num]
        Take target which is equal to one of the variables
        Iterate over the range again in the inner loop
        Match inner loop values with one of the variables except
        the target itself
        To prevent duplicate check whether inner loop value is target's
        This way, we can check again in the next step and do not
        get duplicate as we skip lsd's value equal to target's
        Print a combination

    */


    // Max Value
    int max_num;

    if (a >= b && a >= c && a >= d && a >= e && a >= f && a >= g && a >= h && a >= i && a >= j10) {
        max_num = a;
    }
    else if (b >= a && b >= c && b >= d && b >= e && b >= f && b >= g && b >= h && b >= i && b >= j10) {
        max_num = b;
    }
    else if (c >= a && c >= b && c >= d && c >= e && c >= f && c >= g && c >= h && c >= i && c >= j10) {
        max_num = c;
    }
    else if (d >= b && d >= c && d >= a && d >= e && d >= f && d >= g && d >= h && d >= i && d >= j10) {
        max_num = d;
    }
    else if (e >= b && e >= c && e >= d && e >= a && e >= f && e >= g && e >= h && e >= i && e >= j10) {
        max_num = e;
    }
    else if (f >= b && f >= c && f >= d && f >= e && f >= a && f >= g && f >= h && f >= i && f >= j10) {
        max_num = f;
    }
    else if (g >= b && g >= c && g >= d && g >= e && g >= f && g >= a && g >= h && g >= i && g >= j10) {
        max_num = g;   
    }
    else if (h >= b && h >= c && h >= d && h >= e && h >= f && h >= g && h >= a && h >= i && h >= j10) {
        max_num = h;   
    }
    else if (i >= b && i >= c && i >= d && i >= e && i >= f && i >= g && i >= h && i >= a && i >= j10) {
        max_num = i;
        
    }
    else if (j10 >= b && j10 >= c && j10 >= d && j10 >= e && j10 >= f && j10 >= g && j10 >= h && j10 >= a && j10 >= i) {
        max_num = j10;        
    }

    int count = 0;

    for (int lfd = 1; lfd <= max_num + 1; lfd++) {

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

        for (int lsd = 0; lsd <= max_num + 1; lsd++) {
            if (target == lsd) {
                continue; // prevent duplicates so that
            }
            
            // we can check the case lsd == target, which is duplicate and
            // is prevented in the previous step

            else if (lsd == a || lsd == b || lsd == c 
            || lsd == d || lsd == e || lsd == f 
            || lsd == g || lsd == h || lsd == i || lsd == j10) {
                cout << target << " : " << lsd << endl;
                count ++;
            }
        }
        cout << endl;

    }

    cout << "Count: " << count << endl; 

    return 0;
}