// changes only in 3 lines

string strings_xor(string s, string t) {

    string res = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == t[i])                    // change = to ==
            res += '0';                     // change = to +=
        else
            res += '1';                     // change = to +=
    }

    return res;
}
