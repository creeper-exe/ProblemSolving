int main() {
    string s;
    cin >> s;
    
    try {
        cout << stoi(s) << endl;
    } catch(...) {
        cout << "Bad String" << endl;
    }
    
