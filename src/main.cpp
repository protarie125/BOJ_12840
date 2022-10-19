#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int h, m, s;
	cin >> h >> m >> s;

	auto now = h * 60 * 60 + m * 60 + s;

	int q;
	cin >> q;

	while (0 < (q--)) {
		int t;
		cin >> t;
		if (1 == t) {
			int c;
			cin >> c;

			now += c;
			now %= 60 * 60 * 24;
		}
		else if (2 == t) {
			int c;
			cin >> c;

			now -= c;
			now %= 60 * 60 * 24;

			while (now < 0) {
				now += 24 * 60 * 60;
			}
		}
		else if (3 == t) {
			h = now / (60 * 60);
			m = (now - h * 60 * 60) / 60;
			s = now % 60;

			cout << h << ' ' << m << ' ' << s << '\n';
		}
	}

	return 0;
}