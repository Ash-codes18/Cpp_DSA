class Solution {
public:
    string intToRoman(int num) {
        vector<int> arr;

        int cur = 0;
        int ten = 10;
        int ele;

        while (ten <= num * 10) {
            ele = (num % ten) - cur;
            arr.push_back(ele);
            ten *= 10;
            cur += ele;
        }

        if (arr.empty()) {
            arr.push_back(num);
        }

        int umax = 3, tmax = 30, hmax = 300, thmax = 3000;

        string u = "", t = "", h = "", th = "";

        for (int i = 0; i < arr.size(); i++) {
            if (i == 0) {
                if (arr[i] == 5) {
                    u.push_back('V');
                } else if (arr[i] > umax && arr[i] < 5) {
                    u += "IV";
                } else if (arr[i] > umax + 5) {
                    u += "IX";
                } else if (arr[i] <= umax) {
                    while (arr[i]--) {
                        u.push_back('I');
                    }
                } else {
                    u.push_back('V');
                    arr[i] -= 5;
                    while (arr[i]--) {
                        u.push_back('I');
                    }
                }
            }

            if (i == 1) {
                if (arr[i] == 50) {
                    t.push_back('L');
                } else if (arr[i] > tmax && arr[i] < 50) {
                    t += "XL";
                } else if (arr[i] > tmax + 50) {
                    t += "XC";
                } else if (arr[i] <= tmax) {
                    while (arr[i] > 0) {
                        t.push_back('X');
                        arr[i] -= 10;
                    }
                } else {
                    t.push_back('L');
                    arr[i] -= 50;
                    while (arr[i] >= 10) {
                        t.push_back('X');
                        arr[i] -= 10;
                    }
                }
            }

            if (i == 2) {
                if (arr[i] == 500) {
                    h.push_back('D');
                } else if (arr[i] > hmax && arr[i] < 500) {
                    h += "CD";
                } else if (arr[i] > hmax + 500) {
                    h += "CM";
                } else if (arr[i] <= hmax) {
                    while (arr[i] >= 100) {
                        h.push_back('C');
                        arr[i] -= 100;
                    }
                } else {
                    h.push_back('D');
                    arr[i] -= 500;
                    while (arr[i] >= 100) {
                        h.push_back('C');
                        arr[i] -= 100;
                    }
                }
            }

            if (i == 3) {
                if (arr[i] == 1000) {
                    th.push_back('M');
                } else if (arr[i] == 2000) {
                    th += "MM";
                } else if (arr[i] == 3000) {
                    th += "MMM";
                }
            }
        }

        return th + h + t + u;
    }
};