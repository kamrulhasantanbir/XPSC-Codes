class Solution{
public:
	int search(string pat, string txt) {
int cnt = 0, m = pat.size(), n = txt.size();
    int arr[26] = {0};

    for (int i = 0; i < m; i++) {
        arr[pat[i] - 'a']++;
    }

    int l = 0, r = 0, d = m;

    while (r < n) {
        int curr1 = txt[r] - 'a';
        if (arr[curr1] > 0) {
            d--;
        }
        arr[curr1]--;
        r++;

        if (d == 0) {
            cnt++;
        }

        if (r - l == m) {
            int curr2 = txt[l] - 'a';
            if (arr[curr2] >= 0) {
                d++;
            }
            arr[curr2]++;
            l++;
        }
    }

    return cnt;
	}

};
