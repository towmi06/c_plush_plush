#include <bits/stdc++.h>
using namespace std;

struct svien {
    string msv, ten;
    double gpa;
    void nhap() {
        cin.ignore();
        getline(cin, msv);
        getline(cin, ten);
        cin >> gpa;
    }
};

struct Node {
    svien data;
    Node* next;
    Node(svien s) {
        data = s;
        next = NULL;
    }
};

void begin(Node* &a, svien x) {
    Node* tmp = new Node(x);
    if (a == NULL) {
        a = tmp;
    } else {
        tmp->next = a;
        a = tmp;
    }
}

void last(Node* &a, svien x) {
    Node* tmp = new Node(x);
    if (a == NULL) {
        a = tmp;
    } else {
        Node* p = a;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = tmp;
    }
}

void midl(Node* &a, svien x, int k) {
    if (k == 1) {
        begin(a, x);
    } else {
        Node* p = a;
        for (int i = 1; i < k - 1; i++) {
            p = p->next;
        }
        Node* tmp = new Node(x);
        tmp->next = p->next;
        p->next = tmp;
    }
}

void print(Node* a) {
    Node* p = a;
    while (p != NULL) {
        cout << p->data.msv << ' ' << p->data.ten << ' ' << fixed << setprecision(2) << p->data.gpa << endl;
        p = p->next;
    }
}

int main() {
    int n;cin >> n;
    Node* a = NULL;
    while (n--) {
        int tloai;
        cin >> tloai;
        if (tloai == 1) {
            svien x;
            x.nhap();
            begin(a, x);
        } else if (tloai == 2) {
            svien x;
            x.nhap();
            last(a, x);
        } else if (tloai == 3) {
            int k;
            cin >> k;
            svien x;
            x.nhap();
            midl(a, x, k);
        }
    }
    print(a);
    return 0;
}
