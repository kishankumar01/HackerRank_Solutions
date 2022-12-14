// Driver program to test above function
int main()
{
	int n = 7; // Works only when n is odd
	generateSquare(n);
	return 0;
}
#include <numeric>
#include <array>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    copy_n(istream_iterator<int>(cin), n, begin(v));
    sort(begin(v), end(v));

    auto selected = 0;
    auto tail = begin(v);
    auto head = next(tail);

    while (head != end(v))
    {
        if (*head - *tail <= 1)
        {
            head++;
        }
        else
        {
            selected = max(selected, (int)distance(tail, head));
            tail++;
        }
    }

    selected = max(selected, (int)distance(tail, head));

    cout << selected;
}


